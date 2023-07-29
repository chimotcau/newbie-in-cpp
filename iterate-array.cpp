#include<iostream>
int main(){
    std::string students[]={"vo","nguyen","dang","khoa"};
    for(int i=0; i< sizeof(students)/sizeof(std::string);i++){    //if we dont know how many elements in the array,
                                                                  //we can calculate through the formula:
                                                                  // amount of elements= sizeof(name of array) / sizeof(data type)
        std::cout<<students[i]<<'\n';


    }



    return 0;
}