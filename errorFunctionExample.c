/******************************************************************************
 *
 *  Program to print error details with errno and perror().
 *
*******************************************************************************/

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main () {

   FILE * ptrToFile;
   int errnumber;
   char* filename = "temp.txt";
   ptrToFile = fopen (filename, "r");
	
   if (ptrToFile == NULL) {
   
      errnumber = errno;
      fprintf(stderr, "Value of errno: %d\n", errno);
      perror("Error printed by perror");
      fprintf(stderr, "Error opening file: %s\nError reason:%s\n", filename, strerror( errnumber ));
   } else {
   
      fclose (ptrToFile);
   }
   
   return 0;
}
