#include <stdio.h>
int main()
 {
  FILE *fptr;

  // Open a file in read mode
  fptr = fopen("filename.txt", "r");

  // Storing the content of the file
  char myString[100];
 while(fgets(myString, 100, fptr))
{
    printf("%s", myString);//prints the contents
}

  // Close the file
  fclose(fptr);

  return 0;
}
