//  Recusion                : is a programming technique where a function invokes itself from within
//                            it will help break a complex concept into repeatable single step

//  (iterative) and (recursive)

//   Adventages             : less code and it cleaner
//                            useful for sorting and searching algorithms
//   Disaventages           : uses more memory and slower
#include<iostream>
int factorial(int num);
int main(){
    std::cout<<factorial(10);



    return 0;
}
int factorial(int num){
    if(num>1){
        return num * factorial(num-1);

    }
    else{
        return 1;
    }
}
