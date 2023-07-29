/* Function = name a block of reusable code
*/
#include<iostream>

// "Void" keyword is used as a return type for functions that don't return a value
void happybirthday(std::string name, int age);    // Declare the function and the parameter within function. 
                                                  // If we want to declare more parameters, use the comma "," between them.
int main(){
    std::string name="Khoa";
    int age=19;
    happybirthday(name,age);                      // Call the function inside the main function with the parameters.
    return 0;
}
void happybirthday(std::string name, int age){    //Define the function that perform specific tasks.
    std::cout<<"happy birthday to "<<name<<'\n';
    std::cout<<"happy birthday dear "<<name<<'\n';
    std::cout<<"you are "<<age<<" years old";
}