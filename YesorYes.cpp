#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    std::cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i = 0; i<n; i++){
        string c;
        getline(cin, c);
        transform(c.begin(), c.end(), c.begin(), :: toupper);

        if(c == "YES"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}