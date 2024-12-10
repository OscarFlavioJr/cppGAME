#include <iostream>
#include <random>

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> dis(1,100);

    int randomNumber = dis(gen);
    int userGuess;
    std::cout<<"Try your luck!"<<std::endl;
    std::cin>>userGuess;

    while(userGuess != randomNumber){
        if(randomNumber > userGuess){
            std::cout<<"Try some numbers above!"<<std::endl;
            std::cin>>userGuess;
        }
        else{
            std::cout<<"Try some number lower"<<std::endl;
            std::cin>>userGuess;
        }
    }

    std::cout<<"You've found it"<<std::endl;

    system("PAUSE");
}