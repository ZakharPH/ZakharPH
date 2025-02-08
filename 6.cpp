#include<iostream>

int main(){
    int x;
    std::cin>>x;
    for(int i = 0;i < x;i++){
        if(i % 2 == 1){
            std::cout<< i * i<<" ";
        }
        else{}
    }
}
