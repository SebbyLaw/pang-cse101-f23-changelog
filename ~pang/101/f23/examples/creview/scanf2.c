#include <stdio.h>

main()
{
   char   c;
   char   s[10];
   char*  cp;

   scanf( "%s", s );
   c  = s[0];
   cp = &c;
   printf( "%s\n", s );
   printf( "%c\n", c );
   printf( "%c\n", *cp );
}
