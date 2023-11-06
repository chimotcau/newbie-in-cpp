#include<iostream>
int main(){
                              // Null pointer : a special value that means something has no value
                              //                When a pointer is holding a null value, it means that pointer is not pointing at anything (Null pointer)

                              
                        
    int *pointer = nullptr;   // nullptr       : keyword represents a null pointer literal
                              // nullptrs are helpful when determining if an address was successfully assigned to a pointer or not 

    int age=21;
    pointer = &age;
    if (pointer==nullptr){
        std::cout<<"pointer was not assigned";    // When using pointers, be careful that your code isn't dereference nullptr or pointing to free memory
                                                  // this will cause underfined behavior

    }
    else{
        std::cout<<"pointer was assigned successfully";
    }
     
    return 0;
}