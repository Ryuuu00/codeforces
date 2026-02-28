#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count_0= 0;
        int count_1 = 0;
        
        for(int i = 0; i<n; i++){
            int temp;
            cin>>temp;
            if(temp == 0)
                count_0++;
            else if (temp == 1)
                count_1++;
        }

        if(count_0 == 0)
            cout<<"NO"<<endl;
        else if(count_0 >=2 && count_1 == 0)
            cout<<"NO"<<endl;
        else    
            cout<<"YES"<<endl;
    }
    return 0;
}