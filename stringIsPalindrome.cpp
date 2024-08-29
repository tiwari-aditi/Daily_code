#include<iostream>
using namespace std;

string isPalindrome(string s){
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1])
            return "No";
    }

    return "Yes";
}

int main() {
    string str;
    cin>>str;
    string check = isPalindrome(str);
    cout<<check;
    return 0;
}