#include<stdio.h>
  // WAP of function - one print "hello" and second is print "good bye". 

  void fun1(); // this is fun decleration 
void fun2();

int main(){
    fun1();    // this is funtion calling.
    fun2();
    return 0;
}

void fun1(){
    printf("Hello\n");      // this is function definition 
}

void fun2(){

    printf("good bye");    // this is function definition 
}
