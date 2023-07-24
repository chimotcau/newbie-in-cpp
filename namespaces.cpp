//Namespace = provides a solution for preventing name conflicts in large projects
//            Each entity needs a unique name.
//            A namespace allows for indentically named entities as long as the namespaces are different.
#include<iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

int main(){
    
    using namespace first; // by using " using namespace + ..." so we dont need to call the namespace again
    std::cout<<x<<'\n';    // in the line "std::cout"
    
    int x=0;
    std::cout<<second::x; //the double colons "::" In the scope resolution operator- used to access elements or functions of namespace or class

    return 0;
} 
//We can use : int main(){
//                 using namespace std;      |   using std::cout;
//                 string name="hello"       |   using std::string;
//                 cout<<name;               |   string name = "hello"
//                                           |   cout<<name;

//That means we dont need to put the "std" in front of each command

//      return 0;
// }


    
    
    

