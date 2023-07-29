/* Do-while loops:    Executes a block of code repreatedly as long as a specified condition is true.
// Different between while or for loops:  that the code block is executed at least once 
                                        regardless of the condition being true or false */

/* Formula :    do{
                   specific task....
              

                }while(condition..);        */

#include<iostream>
int main(){
    int i=1;
    do{                              /*The loop executes the code block, than checks the condition*/
        std::cout<<i<<" ";
        i++;
    }while (i<=5);

    return 0;
}                     