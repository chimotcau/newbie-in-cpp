// sizeof()  = determines the size in bytes of a:
//             variable, data type, class, objects, etc
//             we can divide the sizeof array by the sideof data type to calculate how many elements in array

#include<iostream>

int main(){
    std::string name[] = {"khoa","vo"};
    std::cout<<sizeof(name)/ sizeof(std::string);



    return 0;
}