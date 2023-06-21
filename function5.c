#include <stdio.h>
void myFunction(char name[]) 
{
  printf("Hello %s\n", name);
}
int main() 
{
  myFunction("arpita");
  myFunction("Jenny");
  myFunction("Anjali");
}