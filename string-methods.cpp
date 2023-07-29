#include<iostream>
int main(){
    std::string name;

    std::cout<<"Enter your name: ";
    std::getline(std::cin,name);
    
    std::cout<<name.length();                // We can calculate the length of a string by using ".length()"
    
    
    if(name.empty()){                        // Check the input/string are empty or not
        std::cout<<"you didn't enter the name ";
    }
    else{
        std::cout<<"hello"<<name;
    }

    name.clear();                            // Clear method
    

    name.append("@gmail.com");               // Append method
    
    std::cout<<name.at(0);                   // Select the character by using their index inside parentheses
                                             // The first letter always have order = 0.
    
    
    name.insert(0, "$");                     // We can insert an element into the string
                                             // First one is the number index that we expected, than the element we want to insert.
                                 
    std::cout<<name.find('a');               // We can find the index of an element that we expected.
    
    name.erase(0,3);                         // We can erase the element/sequence of elements
                                             // The first number is first number of index, 
                                             // Second number is the end of sequence that we expected( not include the last )
    return 0;
}