#include <iostream>
int main() {

    // Memory address = a location in memory where the data is stored
    // A memory address can be accessed with "&" (address-of operator)
    // Memory address will be changed every time, it can be represented by hexadecimal address
    std::string name="KHoa";
    int age = 18;
    std::cout<<&name<<'\n';
    std::cout<<&age<<'\n';



    return 0;
}
