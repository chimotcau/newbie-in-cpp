#include<iostream>
int main(){
    std::string cardnumber;
    std::cout<<"cardnumber";
    std::cin>>cardnumber;
    int a=0;
    a+=(cardnumber[0]-'0');    // We need to subtract character "0" by using -'0' in string to return the right number of that index of the string into decimal
    std::cout<<a;

    return 0;
}