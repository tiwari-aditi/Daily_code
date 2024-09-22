#include<bits/stdc++.h>
using namespace std;

void printNums(int i,int n){
    if(i>n)
        return;
    cout<<i<<"\n";
    i++;
    printNums(i,n);
}

int main() {
    int i = 1;
    int n;
    cin>>n;
    printNums(i,n);

    return 0;
}
