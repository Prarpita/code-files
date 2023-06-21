//reading the context of the file mentioned to be read
#include <stdio.h>
int main() 
{
  FILE *fptr;

  // Open a file in read mode
  fptr = fopen("filename.txt", "r");

// Storing the content of the mentioned file
char myString[100];

// Read the content and store it inside myString
fgets(myString, 100, fptr);

printf("%s", myString); 

// Closes the file
fclose(fptr);
return 0;
}