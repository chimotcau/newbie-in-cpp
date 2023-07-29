// Return statement auto break, so that we dont need to push the break statement behind Return.
#include<iostream>
#include<ctime>

void chooseWinner(char player,char computer);
char playerchoose();
char computerchoose();
void showchoice(char choice);

int main(){
    char player;
    char computer;
    player = playerchoose();
    std::cout<<"Your choose is ";
    showchoice(player);
    computer = computerchoose();
    std::cout<<"Computer choose is ";
    showchoice(computer);
    chooseWinner(player,computer);
    
    return 0;
}
char playerchoose(){
    char player;
    do{
        std::cout<<"Enter your choose\n";
        std::cout<<"r'for the Rock\n";
        std::cout<<"p'for the Paper\n";
        std::cout<<"s'for the Sissors\n";
        std::cin>>player;
    }while(player !='r' && player !='p' && player !='s');
    return player;


}

char computerchoose(){
    char computer;
    srand(time(0));
    computer = rand()%3+1;
    switch(computer){
        case 1 : return 'r';
        case 2 : return 'p';
        case 3 : return 's' ;


    }
    
    
    return computer;
}   

void showchoice(char choice){
    switch(choice){
        case 'r': std::cout<<"Rock\n";
                  break;
        case 'p': std::cout<<"Paper\n";
                  break;
        case 's': std::cout<<"Scissors\n";
                  break;
    }

}
void chooseWinner(char player,char computer){
    switch(player){
        case 'r':   if(computer== 'r'){
                        std::cout<<"It's a tie\n";
                    }
                    else if(computer=='p'){
                        std::cout<<"You lose\n";
                    }
                    else{
                        std::cout<<"You win\n";
                    }
        case 'p':   if(computer== 'p'){
                        std::cout<<"It's a tie\n";
                    }
                    else if(computer=='s'){
                        std::cout<<"You lose\n";
                    }
                    else{
                        std::cout<<"You win\n";
                    }
        case 's':   if(computer== 's'){
                        std::cout<<"It's a tie\n";
                    }
                    else if(computer=='r'){
                        std::cout<<"You lose\n";
                    }
                    else{
                        std::cout<<"You win\n";
                    }
    }

   

}