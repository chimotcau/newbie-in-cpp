#include<iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;
    std::cout<<"calculator/n";   // we can use "/n" inside the sentence to write down but not use the '/n'
    std::cout<<" enter operation(+ - * /): ";
    std::cin>>op;
    std::cout<<"enter num1= ";
    std::cin>>num1;
    std::cout<<"enter num2= ";
    std::cin>>num2;
    switch(op){
        case '+':
            result = num1 + num2;
            std::cout<<"result= "<<result;
            break;
        case '-':
            result = num1 - num2;
            std::cout<<"result= "<<result;
            break;
        case '*':
            result = num1 * num2;
            std::cout<<"result= "<<result;
            break;
        case '/':
            result = num1 / num2;
            std::cout<<"result= "<<result;
            break;
        default:
            std::cout<<"pls enter the valid operation";
            break;   
    }

    return 0;
}