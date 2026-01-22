#include<iostream>
using namespace std;

int main(){
    int n, k, solved = 0;
    int total = 240;

    cin>>n;
    cin>>k;
    total-=k;
    for(int i = 1; i<=n; i++){
        int temp = 5*i;
        if(total >= temp){
            total-=temp;
            solved++;
        }
    }
    cout<<solved;
    return 0;
}