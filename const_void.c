// const void is a valid but distinct type in C++ that represents a void type qualified as constant.  It is primarily used in the context of pointers, such as const void* (or equivalently void const*), which denotes a pointer to an unknown data type that cannot be modified through that pointer.

// While void itself signifies an absence of type, adding const ensures type safety and const-correctness by preventing implicit conversions from const types (like const int*) to non-const void*.  This is essential for functions that accept generic pointers but guarantee not to alter the pointed-to data, such as memcpy or memcmp.

// Key distinctions include:

// const void*: A pointer to constant data; the data cannot be modified, but the pointer itself can be reassigned to point elsewhere.
// void* const: A constant pointer to data; the pointer cannot be reassigned, but the data it points to can be modified.
// const void* const: Both the pointer and the data it points to are constant and immutable.
// Return Types: Using const void as a function return type is meaningless because the const qualifier is stripped from the return value of non-class, non-array types, though it remains legal syntax.

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int a;
  char b;
}sctructure;

void func(sctructure* fah){
  fah->a = 100;
  fah->b = 'F';
}

int main() {


  int a =4;
  int *pa = &a;

  printf("%d\n",*pa);

  void *va = &a;
  // printf("%d\n",*va); not allowed

  sctructure* SS = (sctructure*)malloc(sizeof(sctructure));
  func(SS);
  printf("%d :: %c\n",SS->a,SS->b);
  // malloc returns a void* which we have to cast to a sctructure pointer to use it


  return 0;
}
