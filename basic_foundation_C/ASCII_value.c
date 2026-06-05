#include<stdio.h>

int main(){

    int n = 65;
    char big='A';
    int m = 97;
    char small = 'a';


    printf("the ASCII value of capital alphabets\n");
    while(n <= 90){
       
        printf("the ascii value is : %c = %d\n", n,big);
        n++;
        big++;
     }

     printf("\n");

     printf("the ASCII value of small alphabets\n");
    
     while (m <=122)
     {
        printf("the ascii value is : %c = %d\n",m,small);
        m++;
        small++;
     
    }
     
    return 0;

}