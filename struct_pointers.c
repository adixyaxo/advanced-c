#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  typedef struct
  {
    int var;
    int *ptr;
    int **ptr_ptr;
    int ***ptr_ptr_ptr;
  }pointer;

int main() {
  printf("---------------------------------------------------");
  pointer strt;
  strt.var = 10;
  strt.ptr = malloc(100);
  *strt.ptr = 20;
  strt.ptr_ptr = malloc(100);
  **strt.ptr_ptr = 30;
  strt.ptr_ptr_ptr = malloc(100);
  ***strt.ptr_ptr_ptr = 40;
  printf("%d %d %d %d",strt.var,*strt.ptr,**strt.ptr_ptr,***strt.ptr_ptr_ptr);



  printf("---------------------------------------------------");
  printf("---------------------------------------------------");


  printf("---------------------------------------------------");


  return 0;
}