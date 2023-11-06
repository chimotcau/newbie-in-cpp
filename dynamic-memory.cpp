//   Dynamic memory    : Memory that is allocated after the program is already compiled and running
//          "new"      : Use the "new" operation to allocate memory in the heap rather than stack

//                       Useful when we don't know how many memory we will need. Makes our programs more flexible,
//                       especially when accepting user input

#include <iostream>
int main(){
    char *pGrades = NULL;
    int size;
    std::cout<<" How many grades ";
    std::cin>>size;
    pGrades = new char[size];
    for(int i=0;i<size;i++){
        std::cout<<"Enter Grades # "<<i+1<<" ";
        std::cin>>pGrades[i];
    }
    for(int i=0;i<size;i++){
        std::cout<<pGrades[i]<<" ";

    }
    delete[] pGrades;        // We should detele array after using them to prevent a memory leak




    return 0;
}