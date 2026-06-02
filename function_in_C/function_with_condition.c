#include<stdio.h>

     // WAP of function that print the 'namaste' if user is indian and bonjour if user is french.

void indian();
void french();

int main(){
      
    char ch;
    printf("enter the i for india and f french:");
    scanf("%c",&ch);

    if(ch == 'i'){
        indian();
    }
    if(ch == 'f'){
        french();
    }
    return 0;
}

void indian(){
     printf("namaste");
}

void french(){

    printf("bonjour");
}