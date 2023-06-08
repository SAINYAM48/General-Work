#include<bits/stdc++.h>
using namespace std;
vector<int>reverse(vector<int>&v,int start,int end){
    while(start<end){
        int temp=v[start];
        v[start]=v[end];
        v[end]=temp;
        start++;
        end--;
    }
    return v;
}
int main(){
    vector<int>arr={1,2,3};
    reverse(arr,0,2);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}