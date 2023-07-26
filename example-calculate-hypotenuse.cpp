#include<iostream>
#include<cmath>

int main(){
    double a;
    double b;
    double c;
    
    std::cout<<"Enter side A ";
    std::cin>>a;

    std::cout<<"Enter side B ";
    std::cin>>b;

    a=pow(a,2);        
    b=pow(b,2);

    c=sqrt(a+b);    // we can use the command c=sqrt(pow(a,2)+pow(b,2)) that doesn't need the commands in line 15,16
    
    std::cout<<"length of C "<<c;


    return 0;
}