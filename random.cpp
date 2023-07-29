// pseudo - random  = Not truly random ( but close)
#include<iostream>
int main(){

    srand(time(NULL));           // Random function. We can use NULL or 0 instead

    int num = (rand() %6+1);     // We take the remainder(modulus) of that random number by the expected range
                                 // than +1 to make it from 1 to the expected end.
    std::cout<<num;                             


    return 0;
}