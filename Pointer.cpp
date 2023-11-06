#include<iostream>
int main(){               // Pointers        : variables that store in a memory address of another variable
                          //                   sometimes work easier with an address
                          //                   The datatype of the pointer should be the same with the variable
                          
                          //  &              : address-of operator
                          //  *(asterisk)    : dereference operator
                          

    std::string name="Khoa";
    std::string *pName=&name;       // Declare and store the new variable pName in name's address
    std::cout<<pName<<'\n';         // Access the address of PName aslo address of name
    std::cout<<*pName <<'\n';       // Access the value at that address

    std::string cakes[2]={"cake1","cake2"};
    std::string *pCakes = cakes;    //  The array already an address so dont need to use address-of operator
    std::cout<<*pCakes<<'\n';       //  Access the first value at that address
    std::cout<<*(pCakes+1);         //  If we want to access the index of array just plus number of index
    
    return 0;
}