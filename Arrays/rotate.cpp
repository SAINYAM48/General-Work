#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&nums,int left,int right){
    while(left<right){
        int temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
    for(auto i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v={1,2,3,4,5,6};
    int n=v.size()-1;
    int i=0;
    int k=3;
    //reverse(v,i,n);
    reverse(v,i,n-k);
    reverse(v,n-k+1,n);
    reverse(v,i,n);
    return 0;
}