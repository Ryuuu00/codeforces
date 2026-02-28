#include<iostream>

int main(){
    int n;
    std::cin>>n;

    for(int i = 0; i<n; i++){
        int temp;
        std::cin>>temp;
        if(temp >= 1900)
            std::cout<<"Division 1"<<std::endl;
        else if(temp >= 1600)
            std::cout<<"Division 2"<<std::endl;
        else if(temp >= 1400)
            std::cout<<"Division 3"<<std::endl;
        else
            std::cout<<"Division 4"<<std::endl;
    }
    return 0;
}