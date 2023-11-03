// copies from example 4 of:
// stackoverflow.com/questions/3911400/how-to-pass-2d-array-matrix-in-a-function-in-c/3912959

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void func_vla(int rows, int cols, int array[rows][cols]);
extern void get_rows_cols(int *rows, int *cols);
extern void dump_array(const char *tag, int rows, int cols, int array[rows][cols]);

void func_vla(int rows, int cols, int array[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = (i + 1) * (j + 1);
        }
    }
}

int main(void)
{
    int rows, cols;

    get_rows_cols(&rows, &cols);

    // allocate an array of rows # of pointers to cols # of ints
    int (*array)[cols] = malloc(rows * cols * sizeof(int));
    /* error check omitted */

    func_vla(rows, cols, array);
    dump_array("After initialization", rows, cols, array);

    free(array);
    return 0;
}

void dump_array(const char *tag, int rows, int cols, int array[rows][cols])
{
    printf("%s (%dx%d):\n", tag, rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%4d", array[i][j]);
        putchar('\n');
    }
}

void get_rows_cols(int *rows, int *cols)
{
    srand(time(0));           // Only acceptable because it is called once
    *rows = 5 + rand() % 10;
    *cols = 3 + rand() % 12;
}
