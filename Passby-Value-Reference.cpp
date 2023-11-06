#include<iostream>
void swap(std::string &x, std::string &y);  // If we use the address-of operator so it will pass by reference,vice versa it will pass by value
                                            // If it is passing by reference, it'll pass memory addresses to where original values are located
                                            // If it is passing by value, it'll make the copy of original values and won't make any change with the original values.
int main(){
    std::string x="Coca";
    std::string y="Pepsi";
    swap(x,y);
    std::cout<<"X="<<x<<'\n';
    std::cout<<"Y="<<y<<'\n';
    
    return 0;
}
void swap(std::string &x,std::string &y){
    std::string a;
    a=x;
    x=y;
    y=a;


}