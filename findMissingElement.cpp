#include<iostream>
#include<vector>

using namespace std;

int missingElement(vector<int> nums){
    int n = nums.size();
    int actual_sum = n*(n+1)/2;
    int given_sum = 0;
    for(int i=0;i<n;i++){
        given_sum+=nums[i];
    }

    return actual_sum - given_sum;
}
int main() {
    int len;
    cin>>len;
    vector<int> nums(len);
    for(int i=0;i<len;i++){
        cin>>nums[i];
    }
    int missing = missingElement(nums);
    cout<<missing;
    return 0;
}