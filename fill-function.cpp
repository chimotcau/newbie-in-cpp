// fill() = Fills a range of elements with a specified value
//          fill(begin, end, value)
#include<iostream>
int main(){
    const int size=99;
    std::string array[size];
    fill(array,array + (size/3),"saurma");
    fill(array+(size/3),array+(size/3)*2,"humburger");
    fill(array+(size/3)*2,array+size,"kfc");
    for(std::string food:array){
        std::cout<<food<<'\n';
    }

    return 0;
}