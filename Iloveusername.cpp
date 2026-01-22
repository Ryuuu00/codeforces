#include<iostream>
using namespace std;
int main(){
    int n, ini, min, max; 
    cin>>n;
    cin>>ini;
    max = min = ini;
    int amazing = 0;
    for(int i = 0; i<n-1; i++){
        int temp;
        cin>>temp;
        if(temp > max){
            max = temp;
            amazing++;
        }

        else if(temp<min){
            min = temp;
            amazing++;
        }
    }
    cout<<amazing;
    return 0;
}