// Memory leak is a case when we allocate memeory on the heap using the malloc operation and do not free it
// on heap memory is allocated by us on stack it is done by programme on static and global we have static or global variables or functions and then we have code
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int func(int a, char* c){
  char* h = malloc(sizeof(c));
  strcpy(h,c);
  printf("%s\n%d\n",h,a);
  free(h);
}

int main() {
  while (1)
  {
    func(100,"Namaste");
  }
  return 0;
}