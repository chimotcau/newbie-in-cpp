#include<iostream>
#include<iomanip>    //Set precision for floating point numbers.
void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    double balance =0;
    int choice =0;
    do{
        std::cout<<"Banking program\n";
        std::cout<<"Enter your choice\n";
        std::cout<<"1. Show Balance\n";
        std::cout<<"2. Deposit Money\n";
        std::cout<<"3. Withdraw Money\n";
        std::cout<<"4. Exit\n";
        std::cin>>choice;
        std::cin.clear();
        std::cin.ignore();

        

        switch(choice){
            case 1: showBalance(balance);

                    break;
            case 2: balance+=deposit();
                    showBalance(balance);
                    break;
            case 3: balance-=withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout<<"Thank for visiting";
                    break;
            default: std::cout<<"Invalid choice\n";        

                
        }
    }while(choice!=4);
    return 0;
}
void showBalance(double balance){
    std::cout<<"Your Balance is $"<<std::setprecision(2)<<std::fixed<<balance<<'\n'; // we use 2 statements with "iomanip" 
                                                                                     // to display 2 decimal number after floating point number.
    
}
double deposit(){
    double amount=0;
    std::cout<<"Enter amount you want to deposit\n";
    std::cin>>amount;
    if(amount>0){
        return amount;
    }
    else{
        std::cout<<"It not a valid amount"<<'\n';
        return 0;
    }
}
double withdraw(double balance){
    double drawmoney;
    std::cout<<"Enter money you want to withdraw ";
    std::cin>>drawmoney;
    if(drawmoney>balance){
        std::cout<<"Your bank acount doesn't have enough money"<<'\n';
        return 0;
    }
    else if(drawmoney<=0){
        std::cout<<"It's not a valid amount"<<'\n';
        return 0;
    }
    else{
        return drawmoney;

    }
   
}
