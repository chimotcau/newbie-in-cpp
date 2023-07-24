#include <iostream> //using for input/output(cin,cout)

int main(){
    
    int x =5;    //declaration,assignment
    int y =10;   //declaration,assignment
    int sum = x + y;
    
    std::cout <<x<< '\n'; //'\n' use to write down the line
    std::cout<<y<< '\n';
    std::cout<<sum<<'\n';
    
    //integer (whole number)
    int age=21;
    int year=2023;
    int days=7;
    
    std::cout<<age<<'\n';
    
    //double(number including decimal)
    double price=10.08;
    double gpa = 4.95;
    
    std::cout<<price<<'\n';

    //(single) character
    char grade='A';
    char currency='$';
    
    std::cout<<currency<<'\n';

    //boolen( true or false)
    bool student = true;
    bool answer = false;
    
    std::cout<<answer<<'\n';

    //string( objects that represents a sequence of text)
    std::string name="khoa";
    std::string address="25k4 moscow";

    std::cout<<name<<'\n';
    std::cout<<"hello "<<name<<'\n';
    std::cout<<address<<'\n';
    std::cout<<"hello "<< age<<" years old";






    return 0;
}