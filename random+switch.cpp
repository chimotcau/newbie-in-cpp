#include<iostream>
#include<ctime>

int main(){
    srand(time(0));

    int results = rand() %3 +1;
    switch(results){

        case 1:
            std::cout<<"u have 1$";
            break;                          // If we want 1 by 1 so we use the break

        case 2:
            std::cout<<"u have 2$";
            break;
        case 3:
            std::cout<<" u have 3$";
            break;
       
    }


    return 0;
}