#include<iostream>
void profile(const std::string name,const int age);           // Const parameter: parameter that can be read only 
                                                  // Code will more secure and conveys intent  
                                                  // Useful for pointers and references
                                                  // We use "const" before the declaration of parameters
int main(){
    std::string name="Khoa";
    int age=20;
    profile(name,age);
    
    

    return 0;
}
void profile(const std::string name, const int age){
    std::cout<<name<<'\n';
    std::cout<<age; 
    
}