#include<iostream>
int main (){
    int num;
    int guess;
    int tries;

    srand(time(0));
    num = rand()%5+1;
    do{
        std::cout<<" Enter the guess between 1 to 5: ";
        std::cin>>guess;
        tries++;
        if(guess> num){
            std::cout<<"too high\n";

        }
        else if(guess<num){
            std::cout<<"too low\n";

        }
        else{
            std::cout<<"correct";
        }





    }while (guess!=num);


    return 0;
}