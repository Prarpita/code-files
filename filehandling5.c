#include <stdio.h> //writes the txt to the file
int main()
{ 
  FILE *file; 
  file = fopen("file2.txt", "w");
  fprintf(file, "Hello! I am Arpita.\n");
}