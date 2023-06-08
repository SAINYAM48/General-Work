#include<iostream>
using namespace std;
class array{
	public:
	int length;
	int ar[10];
	
	void display(int ar[],int n){
		cout<<"Array :";
		for(int i=0;i<n;i++){
			cout<<ar[i]<<" ";
		}
	}

//	void add(int x,int ar,int length){
//		ar[length]=x;
//		length++;
//	}
        void add(int *ar[],int x,int n){
		n++;
		ar[n-1]=x;
	}
};
int main(){
	int no=5;
	int arr[no]={1,2,3,4,5};
	array ob;
	ob.display(arr,no);
	ob.add(&arr,6,no);
	ob.display(arr,no);
	return 0;
}
