#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[5][5];
    int targetI;
    int targetJ;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                targetI = i;
                targetJ = j; 
            }
        }
    }
    cout<<abs(targetI-2) + abs(targetJ -2);
    
    
}