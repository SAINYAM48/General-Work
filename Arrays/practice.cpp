#include<iostream>
using namespace std;
int main(){
	int A[10]={1};
	cout<<sizeof(A)<<endl;
	for(int i=0;i<10;i++){
		cout<<A[i]<<" ";
	}cout<<endl;

	for(int x:A){
		cout<<x<<" ";
	}cout<<endl;
	hello();
	return 0;
}
void hello(){
	cout<<"This a garuda linux speed test\n";
}
