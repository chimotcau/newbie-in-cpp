#include<iostream>
int main()

// cout "<<" ( insertion operation )
// cin  ">>" ( extraction operation) 
{
   std::string name;
   int age;

   std::cout << "What's your age?: ";
   std::cin >> age;


   std::cout << "What's your full name?: ";   // want to write a string with white space, we use the getline's function :
   std::getline(std::cin >> std::ws, name);   //             std::getline(std::cin, name of string);
                                              // if the "int" cin appears before the getline's function, in the getline's function we use
                                              // one more step after std::cin - ">>std::ws"   
   
   std::cout << "Hello " << name << '\n';
   std::cout << "You are " << age << " years old";

   return 0;
}