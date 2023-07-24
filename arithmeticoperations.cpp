//arithmetic operations = return the result of a specific arithmetic operation ( + - * / )

//   1.parenthesis
//   2.multiplication and division
//   3.addition and subtraction
#include<iostream>

int main(){
    int students = 20;   // or double price( if there are decimal number )

    students+=1;   //students = students +1  ||  students++
    
    students-=1;   //students= students -1   ||  students--

    students*=2;   //students= students *2

    students/=2;    //students= students/2
    
    students%=3;    //students= students%3 - to find the remainder
    std::cout<<students;

    return 0;
}