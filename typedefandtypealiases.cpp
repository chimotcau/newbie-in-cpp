//typedef   : reserved keyword used to create an additional name
//            (alias) for another data type
//            New indentifier for an existing type
//            Helps with readability and reduces typos
#include<iostream>
#include<vector>
typedef std:: vector<std::pair<std::string,int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

using text_t= std::string;     //normally use " using" keyowrd to define the typedef ( line 8 = line 11   |  line 9 = line 12)
using number_t=int; 

int main(){  
    text_t firstname="khoa"; 
    number_t age=19;

    std::cout<<firstname;
    return 0;
}