#include <stdio.h>

struct  Structure
{
  int a;
  float b;
  char str[16];
};

union Onion
{
  int a;
  float b;
  char str[16];
};


int main() {
  struct Structure structure;
  union Onion onion;

  printf("%ld - structure\n%ld - onion\n",sizeof(structure),sizeof(onion));




  return 0;
}