#include<iostream>

int game(int answer[],int guess[]);



int main(){
    int answer[3];
    int answer1;
    

    std::cout<<"Enter a answer: ";
    std::cin >> answer1;
    for (int i = 2; i >= 0; i--) {
        answer[i] = answer1 % 10;
        answer1 /= 10;
    }
    while (true)
    {
        std::cout<<"Enter a guess: ";
        int guess[3];
        int guess1;
        std::cin >> guess1;
        for (int i = 2; i >= 0; i--) {
        guess[i] = guess1 % 10;
        guess1 /= 10;
    }
        
        int flag=game(answer,guess);
        if(flag==1){
            break;
        }

    }
    

}