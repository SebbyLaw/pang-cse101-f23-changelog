#include <stdbool.h>
//----------------------------------------------------
// List.h
// Header file for List ADT
// ---------------------------------------------------
  
typedef struct NodeObj{
    void *data;
    struct NodeObj* next;
} NodeObj;

typedef struct NodeObj* NodePtr;

typedef struct ListObj{
    NodePtr head;
    void (*dataPrinter)(void *data);
    int length;
} ListObj;

typedef struct ListObj* ListPtr;

// Constructors-Destructors --------------------------

/**
 * @brief Creates a new list
 * 
 * @param	dataPrinter	Function to use to print out a piece of 
data in the list
 * @return	ListPtr		pointer to newly created list.
 */
ListPtr createList(void (*dataPrinter)(void *data));


/**
 * @brief Frees the space taken up by the list
 * 
 * @param	*pL		A pointer to the ListPtr to deallocate.
 * 				The pointer should be set to NULL!
 */
void destroyList(ListPtr *pL);





// Access functions ----------------------------------

/**
 * @brief Gets the length of a list
 * 
 * @param	L	The list for which the length should be returned.
 * @return	int	The length of the list, or -1 if error
 */
int lengthList( ListPtr L );


/**
 * @brief Prints the data in the list in the format "%s\n" for each entry
 * 
 * @param	L           The list to print
 */
void printList(ListPtr L);


/**
 * @brief Retrieves the data from the entry at the specified index.
 *
 * @param L The list to retrieve the entry from.
 * @param i The index of the entry to retrieve. The 1st element has index 
0.
 * @return void* The data that was stored in that entry. Returns NULL if 
the entry does not exist.
 */
void *getList( ListPtr L, int i );


// Manipulation functions ----------------------------

/**
 * @brief Appends an entry to the list.
 * 
 * @param	L	The list to append to
 * @param	data	The data to add as new entry in list
 * @return	bool	True if successful append, False otherwise
 */
bool appendList( ListPtr L, void *data );


/**
 * @brief Deletes the entry at the specified index and returns the data 
from that entry.
 * 
 * @param	L	The list to delete the entry from.
 * @param	i	The index of the entry to remove. 1st element has 
index 0.
 * @return	void*	The data that was stored in that entry. Returns 
NULL if the entry does not exist.
 */
void *deleteList( ListPtr L, int i );

