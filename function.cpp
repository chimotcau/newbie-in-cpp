/* Function = name a block of reusable code
*/
#include<iostream>

void happybirthday(std::string name, int age);    // Declare the function and the argument within function. 
                                                  // If we want to declare more arguments, use the comma "," between them.
int main(){
    std::string name="Khoa";
    int age=19;
    happybirthday(name,age);                      // Call the function inside the main function with the agruments.
    return 0;
}
void happybirthday(std::string name, int age){    //Reuse the function that perform specific tasks.
    std::cout<<"happy birthday to "<<name<<'\n';
    std::cout<<"happy birthday dear "<<name<<'\n';
    std::cout<<"you are "<<age<<" years old";
}