//  Break    = break out of the loop
//  Continue = skip the current iteration

#include<iostream>
int main(){
    for( int i=1; i<=5; i++){
         if(i==4){                
            break;      // So the results will be 1;2;3
        }

        if(i==4){
            continue;  // So the results will be 1;2;3;5
        }
        std::cout<<i<<'\n';
    }

    return 0;
}