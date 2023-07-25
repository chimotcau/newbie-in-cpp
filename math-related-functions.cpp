#include<iostream>
#include<cmath>   // to import the mathematical function

int main(){
    double x=3.14;
    double y=2;
    double z;   // only delare the z but not assign to print the z after performed specific function

//go into website https://www.cplusplus.com/reference/cmath to know more about the math function

    z= std::max(x,y); // find max x,y
    z= std::min(x,y); // find the min x,y
    z=pow(x,y);       // find the x power of y
    z=sqrt(x);        // find the square root of x
    z=abs(x);         // find the absolute value of x
    z=round(x);       // find the round the number x
    z=ceil(x);        // find the round up of x
    z=floor(x);       // find the round down of x
    
    std::cout<<z;
    return 0;
}