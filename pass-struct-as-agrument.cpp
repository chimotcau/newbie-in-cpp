#include<iostream>

struct Car{
    std::string name;
    int year;
};
void printcar(Car &car );
int main(){
    Car car1;
    car1.name="mercedes";
    car1.year=1999;
    std::cout<<&car1<<'\n';
    printcar(car1);

    return 0;
}
void printcar(Car &car ){
    std::cout<<&car;
}