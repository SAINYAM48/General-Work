#include<iostream>
using namespace std;
int main(){
	int ar[5]={1,2,3,4,5};
	for(int i=0,j=4;i<j;i++,j--){
		int temp=ar[i];
		ar[i]=ar[j];
		ar[j]=temp;
	}
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
	return 0;
}
			
