#include<iostream>

double getTotal(double prices[],int size);

int main(){
    double prices[]= {10.00,23.34,324,23,33.33};
    int size = sizeof(prices) / sizeof(prices[0]);

    double total = getTotal(prices,size);
    std::cout<<"$"<<total;



    return 0;
}
double getTotal(double prices[],int size){
    int total =0;
    for (int i=0; i<size; i++){
        total +=prices[i];

        
    }
    return total;


}
