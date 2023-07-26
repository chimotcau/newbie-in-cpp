//  && (and) = Check if 2 or more conditions are true
//  || (or)  = Check if at least 1 of 2 conditions is true
//  !  (not) = Reverses the logical state of its operand

#include<iostream>
int main(){
    bool good= true;
    double price;
    double temp;
    std::cout<<"enter the temperature ";
    std::cin>>temp;
    std::cout<<"enter the price";
    std::cin>>price;

    if(temp >0 && temp <=30){
        std::cout<<"the weather is good\n";


    }
    else{
        std::cout<<"the weather if bad\n";
    }
    if(price>1000 || price <500){
        std::cout<<"u're good buyer\n";
    }
    else{
        std::cout<<"u're bad buyer\n";
    }
    if(!good){
        std::cout<<"good";
    }
    else{
        std::cout<<"bad";
    }
    return 0;
}