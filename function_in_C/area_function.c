#include<stdio.h>

// program for to print area of square,circle and rectangle.

void square(int n);
void circle(int m);
void rectangle(int l,int b);

int main(){
     
    char ch;
    int n,m,l,b;
    printf("enter the name of shapes to print its area accroding to below instruction :");
    printf("press s to print the area of square\n press c to print the area of circle\n press r to print the area of rectangle\n");
    scanf("%c",&ch);

    if(ch =='s'){
         printf("enter the side of square:");
         scanf("%d",&n); 
        square(n);
    }
    if(ch =='c'){
         printf("enter the side of circle:");
         scanf("%d",&m); 
        circle(m);
    }

    if(ch =='r'){
         printf("enter the side of rectangle:");
         scanf("%d %d",&l,&b); 
        rectangle(l,b);
    }
    return 0;
}

void square(n){
    int area= n*n;
    printf("the area of square is :%d",area);
}

void circle(m){

    float area2 = 3.14*(m*m);
    printf("the area of circle is :%f",area2);
}

void rectangle(l,b){

    int area3 = l*b;
    printf("the area of rectangle is :%d",area3);
}