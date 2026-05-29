#include <stdio.h>


// the functions type declaration is like this

// type (*function_name)(inputs)


void fuh()
{
    printf("Fahhh\n");
}

void func(void (*function)()){
function();
}

int main() {

  func(*fuh);




  return 0;
}

