#include<iostream>

int main(){
    int a, b;
    std::cin>>a>>b;

    int pair = std::min(a,b);
    int dif = std::max(a,b) - pair;

    std::cout<<pair<<" "<<dif/2;
}