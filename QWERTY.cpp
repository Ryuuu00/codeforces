#include<bits/stdc++.h>

using namespace std;

int main(){
    string a = "1234567890-=";
    string b = "qwertyuiop[]";
    string c = "asdfghjkl;'";
    string d =" zxcvbnm,./";

    string in;
    getline(cin,in);
    int size = in.length();
    string out = "";
    for(char temp: in){
        size_t idx;

        idx = a.find(temp);
        if (idx != string::npos && idx > 0) { 
            out += a[idx - 1];
            continue;
        }

        idx = b.find(temp);
        if (idx != string::npos && idx > 0) {
            out += b[idx - 1];
            continue;
        }

        idx = c.find(temp);
        if (idx != string::npos && idx > 0) {
            out += c[idx - 1];
            continue;
        }

        idx = d.find(temp);
        if (idx != string::npos && idx > 0) {
            out += d[idx - 1];
            continue;
        }
        out+=temp;
    }
    cout<<out;
}