// If statements = do smth if a condition is True.
//                 if not, then don't do it.

#include<iostream>

int main(){

    int age;

    std::cout<<"Enter your age ";
    std::cin>>age;

    if(age >=100){                       //  Check the condition insite the parenthesis, 
        std::cout<<"you are too old ";   //  if satisfies then excute the staments in the curly braces.
    }

    else if(age>=18){                    // The "==" is not a comparison, it an assignment operation
        std::cout<<"welcome";
    }
    else{                                // The else doesn't have the parenthesis, only curly braces
        std::cout<<"get out";
    }
}