#include<iostream>
#include<string>

int main()
{
    int c;
    int u = 0;
    int y = 0;
    
    while(y < 1000){
        std::cin>> c;
        u = u + c;
        std::cout<< "Если хотите узнать сумму введите 'y'или 'Y'";
        std::string z;
        if(z[y] == 'y'){
            std::cout<< u ;
            return 0;
        }
        else if(z[y] == 'Y'){
            std::cout<< u ;
            return 0;
        }
        else{}
        y = y + 1;
    }
}
