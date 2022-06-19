#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
    string s;
    //  \u200B -> zero width space
    //  \u200C -> zero width non-joiner
    //  \u2060 -> zero width joiner
    //  \uFEFF -> zero width nbsp
    // demo website: https://www.diffchecker.in/
    string c=u8"\u2060";
    s+=c;
    cout<<"size:"<<s.size()<<endl;
    cout<<"char c1:"<<c<<"-----"<<endl;
    cout<<"string:"<<s;
    cout<<"printing\u200Cthis \n\n\n";
    cout<<"input text";
    return 0;
}