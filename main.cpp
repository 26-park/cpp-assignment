#include<iostream>

int game(int answer[],int guess[],int size);
int* randomNumber();


int main(){
    
    
    int chance =5;

    
    
    int* answer;
    answer=randomNumber();
    
    
    while (chance>=0)
    {
        if (chance==0)
        {
            std::cout<<"You lose!."<<std::endl;
            break;
        }else{
            std::cout<<chance<<" chances left."<<std::endl;
            std::cout<<"Enter a guess: ";
            int guess[3];
            int guess1;
            std::cin >> guess1;
            for (int i = 2; i >= 0; i--) {
                guess[i] = guess1 % 10;
                guess1 /= 10;
            }
            
            int flag=game(answer,guess,3);
            if(flag==1){
                break;
            }
            chance--;
        }
        
        
    }
    

}