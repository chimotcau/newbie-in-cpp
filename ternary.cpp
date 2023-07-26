//  Ternary operator  ? :   = Replacement to an if/else statement
//  Formula of ternary :    condition ?  expression1(true) : expression2(false)

#include<iostream>
int main(){
    int number =2;
    number %2==1 ? std::cout<<"Odd" : std::cout<<"Even"<<'\n';

    bool hungry = true;
    hungry ? std::cout<<"u're hungry" : std::cout<<"u're full";  // if there're boolean expression, so the program auto checking
                                                                 // dont need to check after variable in ternary.



    return 0;
}