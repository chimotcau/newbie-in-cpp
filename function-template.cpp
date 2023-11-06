// function template  : decribes what a function looks like.
//                      can be used  to generate as many overloaded functions
//                      as needed, each using different data types

#include<iostream>
template <typename T,typename U>   // We add template T,U,.. to use any data types of variables, prevent the overloaded functions
auto max(T x, U y){                // We should use auto function to make auto selecting the suitable datatype for the return value
    return (x>y) ? x : y;

}
int main(){
    std::cout<<max(1,2.1);
    return 0;
}