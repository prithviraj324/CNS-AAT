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

    //  \u2060->1
    //  \u200C->0
    cout<<"In encryption:"<<endl;
    string one=u8"\u2060";
    string zero=u8"\u200C";

    //input
    string plain,hide;
    cout<<"Enter plain text: ";
    cin>>plain; 
    cin.clear();
    cin.ignore(INT_MAX, '\n');
    cout<<"Enter text to hide: ";
    cin>>hide;
    cout<<endl;

    //encryption
    string enc;
    for(char c:hide) {
        int ch=(int)c;
        //cout<<"char ascii:"<<ch<<endl;
        for(int i=0;i<8;i++) {
            //cout<<ch<<",";
            if(ch%2 == 0) {
                enc.insert(0,zero);
                ch /= 2;
            }
            else if(ch%2 == 1){
                enc.insert(0,one);
                ch /= 2;
            }
        }
    }
    //cout<<endl<<enc.size()<<endl;
    int sz=enc.size();
    int st=0;
    int id=3;
    st = plain.size();
    //cout<<"Encrypted msg: "<<enc<<endl;
    string tmp = plain.substr(id+1, plain.size());
    plain = plain.substr(0,id+2) + enc + tmp;
    cout<<"Hidden msg is:"<<hide<<endl;
    return 0;
}