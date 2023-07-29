//Array  = a data structure that can hold multiple values
//         value are accessed by an index number
//         "kind of like a variable that holds multiple values"
//         can store values that have the same datatype

#include<iostream>

int main(){
    double money[] = {2.13,3.50,4.98};
    std::cout<<money[0]<<'\n';
    std::cout<<money[1]<<'\n';
    std::cout<<money[2]<<'\n';

    
    //Or we can delare the size of array first, then each element of array
    double money1[3];
    money1[0]=1;
    money1[1]=2.13;
    money1[2]=3.14;
    std::cout<<money1[0]<<'\n';
    std::cout<<money1[1]<<'\n';
    std::cout<<money1[2]<<'\n';


    return 0;
}