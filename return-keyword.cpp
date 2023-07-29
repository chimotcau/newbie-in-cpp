// Return = return a value back to the spot
//          where you called the encompassing function

#include<iostream>

std::string Yourname(std::string firstname, std::string lastname);

int main(){
    std::string firstname;
    std::string lastname;
    std::cout<<"Enter your first name ";
    std::cin>>firstname;
    std::cout<<"Enter your last name ";
    std::cin.ignore();                     // Ignore the newline character from the previous cin operation.
    std::getline(std::cin,lastname);
    std::string fullname = Yourname(firstname,lastname);
    std::cout<<"Hello "<< fullname;


    return 0;
}
std::string Yourname(std::string firstname, std::string lastname){    // The datatype of the function must match 
    return firstname + " " + lastname;                                // with the datatyped of returned value

}