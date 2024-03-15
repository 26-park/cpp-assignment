#include<iostream>
#include<cstdlib>
#include<ctime>

int* randomNumber(){
    static int arr[3];;
    srand((unsigned int)time(NULL));
    for(int i=0; i<3; i++){
        arr[i]=rand() % 10;
    }
    
    
    return arr;
}
