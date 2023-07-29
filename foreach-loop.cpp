//Foreach loop = loop that eases the traversal over an iterable data set

#include<iostream>

int main(){
    int grades[]={50,89,100,189};
    
    for(int grade: grades){          // first one is new variable, then the colon ":", after that is array that we want to withdraw
        std::cout<<grade<<'\n';
    }


    return 0;
}