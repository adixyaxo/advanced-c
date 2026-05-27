#include <stdio.h>
#include "add_header.h"
#include "sub_header.c"
#include "multiply_dec.h"

int main(int argc,char **argv) {
  printf("Hello World!\n");

  int x = add(10,11);

  printf("%d\n",x);

  int y = sub(11,10);

  printf("%d\n",y);

  int z = mul(10,10);



  return 0;
}