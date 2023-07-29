// Local variables = declared inside a function or block {}
// Global variables= declared outside of all functions
#include<iostream>

int mynum=3;                   //Global variable : outside the function
void printnum();
void printnum1();
int main(){
    int mynum =1;              //Local variable  : inside the main function
    printnum();
    printnum1();
    return 0;
}
void printnum(){
    int mynum=2;               //Local variable  : inside the function
    std::cout<<mynum<<'\n';

}
void printnum1(){
    int mynum=4;
    std::cout<<::mynum;        //We can put precede Local variable 2 colons "::" to use the Global variable.
}

// If we perform some task inside the function with variable, 
// so it perfer the local variable more than the global variable