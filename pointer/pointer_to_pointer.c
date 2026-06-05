#include<stdio.h>

  // WAP to print the value of 'i' from its pointer to pointer.

int main(){
int i = 9;
int *ptr = &i;
int **ptrr = &ptr;

printf("the value of double pointer is: %d",**ptrr);

return 0;
}
