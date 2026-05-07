#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func(int x,int y)
{
    return x+y;
}

// Now this
// int(*)(int,int) is the function type of this function 
// and you can declare a variable with it ,
//it works strange but it works



/*
This comes in handy when you take or create a function with function as a parameter 
*/
int func_with_func(int a,int(*p)(int,int)){ // in this function with function as a parameter we are taking inside a function p with int return type and two integer parameters for it 
    int add = p(a,a) + a;
    return add ;
}



int main() {

    printf("%d\n",func(10,11));

    int(*f)(int,int) = func; // here int(*)(int,int) this is the type and f is the variable normally we have int float etc as variable func is also a varibale with diffrent types depending on the type of varible inputs and outputs are in consideration 

    printf("%d\n",f(10,11));

    printf("%d\n",func_with_func(10,f));

    return 0;
}