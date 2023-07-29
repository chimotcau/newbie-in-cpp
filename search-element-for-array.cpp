// we can rename the parameters( it need to correspond with the position)
#include<iostream>

int searchArray( std:: string array[], int size, std:: string element);
int main(){
    std::string foods[]={"saurma","kfc","burger","rice"};
    int index;
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string myfood;
    std::cout<<"Enter your food\n";
    std::getline(std::cin,myfood);
    index=searchArray(foods,size,myfood);
    if(index!=-1){
        std::cout<<"Your food's number is "<<index;
    }
    else{
        std::cout<<"In the list doesn't have your food";
    }


    return 0;
}
int searchArray( std:: string array[], int size, std:: string element){
    for(int i =0; i< size; i++){
        if(array[i]==element){
            return i;
        }


    } return -1;          // -1 means there is no element match with target value.
}