#include<iostream>

int digitSum(int x){
    int sum = 0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main(){
    int n;
    std::cin>>n;

    for(int i = 0; i<n ; i++){
        int temp;
        std::cin>>temp;
        if(digitSum(temp/1000) == digitSum(temp%1000)){
            std::cout<<"YES"<<std::endl;
        }
        else
            std::cout<<"NO"<<std::endl;
    }

    return 0;
}