#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    cout<<"In decryption:"<<endl;
    string s;
    cin>>s; //read from output(stdout) of encrypt file
    int sz=s.size();
    int st=0, ans =0;
    string res;
    while(st<=sz-2) {
        //cout<<"st:"<<st<<", end:"<<st+3<<endl;

        string tmp=s.substr(st,st+3);
        wstring_convert<std::codecvt_utf8_utf16<wchar_t>> convert;
        wstring tmp8 = convert.from_bytes( tmp );
        if(tmp==u8"\u2060"){
            ans+=1;
            ans = ans >> 1;
        }
        
        else if(tmp==u8"\u200C"){
            ans >> 1;
        }
        if(ans>10)
        res.push_back((char)ans);
        st+=3;
    }
    cout<<"Hidden String is:" + s<<endl;
    return 0;
}