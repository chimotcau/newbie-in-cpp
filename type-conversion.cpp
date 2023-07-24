// type conversion   =  conversion a value of one data type to another
//                    Implicit = automatic
//                    Explicit = precede value with new data type(int)

#include <iostream>

int main(){
    double x = (int) 3.14;          // Explicit type conversion
    std::cout<<(char)100<<'\n';     // Explicit type conversion  
    std::cout<<x<<'\n';

    int correct =8;                                   
    int questions = 10;                                
    double score = correct/(double) questions *100;    // Explicit type conversion
    std::cout<<score<<"%"<<'\n';

    char y =100;                    // Implicit type conversion   
    std::cout<<y<<'\n';             // Implicit type conversion
    
    




    return 0;
}