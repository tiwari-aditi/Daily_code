#include<iostream>
using namespace std;

string reverseString(string s){
    int n = s.length();
    string reversed;
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    return s;
}

int main(){

    string str;
    cin>>str;
    string rev = reverseString(str);
    cout<<rev;
    return 0;
    
}