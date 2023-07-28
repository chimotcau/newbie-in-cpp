#include<iostream>

int main(){
    double temp;
    char unit;
    std::cout<<"F = Fahrenheit\n";
    std::cout<<"C = Celsius\n";
    std::cout<<"What unit would you like to convert to ";
    std::cin>>unit;

    if(unit=='F' || unit=='f'){
        std::cout<<"Enter the temperature in Celsius ";
        std::cin>>temp;
        temp = (temp*1.8)+32;
        std::cout<<"Temperature in Fahrenhiet = "<<temp<<"F";
    }
    else if(unit == 'C'  || unit =='c'){
        std::cout<<"Enter the temperature in Fahrenheit ";
        std::cin>>temp;
        temp = (temp-32)/1.8;
        std::cout<<"Temperature in Celsius = "<<temp<<"C";
    }
    else{
        std::cout<<"Please enter the letter C or F";
    }

    return 0;
}