// Given a positive integer n, find the pivot integer x such that:

// The sum of all elements between 1 and x inclusively equals the 
// sum of all elements between x and n inclusively.
// Return the pivot integer x. If no such integer exists, return -1. 
// It is guaranteed that there will be at most one pivot index for the given input.


#include<bits/stdc++.h>
using namespace std;

int pivotInteger(int n) {
    for(int x=1;x<=n;x++){
        int before_x = x*(x+1)/2;
        int after_x = n*(n+1)/2 - before_x + x;
        if(before_x == after_x)
            return x;
    }
    return -1;
}

int main(){
	cout<<"Enter a positive integer: "<<endl;
	int n;
	cin>>n;
	int pivot = pivotInteger(n);
	if(pivot==-1)
		cout<<"Such an integer doesn't exist";
	else
		cout<<"Pivot integer is: "<<pivot;
	return 0;
}