#include<iostream>
#include<cstdlib>
#include<ctime>

int random(){
    srand((unsigned int)time(NULL));
    int a= rand() % 900+100;
    return a;
}
