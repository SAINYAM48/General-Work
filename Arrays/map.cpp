#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>m;
    vector<int>v{1,2,2,1,2,2};
    int n=v.size();
 
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    map<int,int>::iterator it=m.begin();
    /*for(auto i:m){
        cout<<i.first<<endl;
        cout<<i.second<<endl;
    }*/
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    cout<<m.size();
return 0;
}