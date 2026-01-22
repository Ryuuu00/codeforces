#include<iostream>
using namespace std;
int main(){
    int k, r;
    cin>>k;
    cin>>r;
    int shovels;
    int cur = 10;

    while(true){
        if(cur!=k){
            shovels++;
        }
        else if(cur == k){
            cout<<shovels;
            break;
        }
        else if(cur + r == k){
            cout<<shovels;
            break;
        }
        cur+=10;
        k+=k;
    }
    return 0;
}