//  Switch  ::   Alternative to using many "else if" statements
//               compare one value against matching cases
#include<iostream>
int main(){
    char grade;
    std::cout<<"What is your grade? ";
    std::cin>>grade;

    switch(grade){                // inside the parentheses of switch statement, they are variable we need to compare( with matches cases)
        case 'A':                 // after "case" there're value that we need to compare with the variable in switch
            std::cout<<"great";
            break;                // At the end of each case we need to break it
        case 'B':
            std::cout<<"good";
            break;
        case 'C':
            std::cout<<"not bad";
            break;
        case 'D':
            std::cout<<"normal";
            break;
        case 'F':
            std::cout<<"failed";
            break;
        default:                  //We need a default case to return if no case matches with the variable
            std::cout<<"pls enter 1 letter from A-F";




      
    

    }



    return 0;
}