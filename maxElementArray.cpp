#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of array:";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"Max element in array is "<<max;
    return 0;
}