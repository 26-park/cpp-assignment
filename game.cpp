#include<iostream>

int game(int answer[],int guess[],int size){
    int strike=0;
    int ball=0;
    
    for (int i = 0; i < 3; i++)
    {
       if(answer[i]==guess[i]){
        strike++;
       }else {
        for(int j=0;j<3;j++){
            if(answer[j]==guess[i]){
                ball++;
                break;
            }
        }
            

       }
       
    }
    if (strike==3)
    {
        std::cout<<"you win!"<<std::endl;
        return 1;
    }else{
        std::cout<<"Strikes: "<< strike <<", Ball: "<< ball <<std::endl;
        return 0;
    }
    
    



}