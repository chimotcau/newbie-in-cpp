// While loops can excute as long as the conditions remain True.

#include<iostream>

int main(){
    std::string name;
    while(name.empty()){
        std::cout<<"Pls enter your name";
        std::getline(std::cin,name);
    }
    std::cout<<"Hello "<<name;
    


    return 0; 
}