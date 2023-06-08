#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"hello world"<<endl;
    int n=5;
    vector<int>ans(n+1,0);
   
    cout<<endl;
    int arr[5]={2,3,5,4,3};
    for(int i=0;i<n;i++){
		int index=0;
		index=arr[i];
		ans[index]=ans[index]+1;
		
	}
     for(auto i:ans){
        cout<<i<<" ";
    }
    pair<int,int>p;
    for(int i=1;i<n+1;i++){
		if(ans[i]==0){
			p.first=i;
		}
		if(ans[i]==2){
			p.second=i;
		}
	}
    cout<<p.first<<" "<<p.second;

    return 0;
}