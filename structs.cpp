// struct   : A structure that group ralated variables under one name
//            structs can contain many different data types( string, int, double, bool,..)
//            Variables in struct as known as "members"
//            members can be accessed with . "Class Member Access Operator"

#include<iostream>
struct student{
    std::string name;
    int gpa;
    bool enrolled;
};
int main(){
    student student1;
    student1.name="khoa";            // access the member of struct by using dot "."
    student1.gpa=5;
    student1.enrolled=true;
    std::cout<<student1.name;
    


    return 0;
}