#include<iostream>

int main(){
    int n;
    std::cin>>n;

    for(int i = 0; i<n; i++){
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;

        int count = (a<b) + (a<c) + (a<d);

        std::cout<<count<<std::endl;
    }
}