#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cout<<"Hii there user !\n";
    cout<<"Pick your choice :\n";
    cout<<"1.Sign up :\n";
    cout<<"2.Login :\n";
    int ch;
    cin>>ch;
    string add;
    int mob;
    string pass,pass1;
    int log,log1;
    int n;
    cout<<"enter choice: \n";

    cin>>n;
    while(n==1){
        if(ch==1){
        cout<<"Enter your name customer :\n";
        cin>>name;
        pass=name;
        cout<<"Enter your address :\n";
        cin>>add;
        cout<<"Enter your mobile number :\n";
        cin>>mob;
        log=mob;
        cout<<"Welcome to CCB, your bank login id is :"<<mob<<" and password is : "<<name<<endl;
    }
    else if(ch==2){
        cout<<"Login id: ";
        cin>>log1;
        cout<<endl;
        cout<<"password: ";
        cin>>pass1;
        cout<<endl;

        if(pass==pass1 && log==log1){
           cout<<"Welcome "<<name<<" !\n";

        }
        else{
            cout<<"Login creadentials!\n";
        }
    }
    else{
        cout<<"Please enter correct option!!\n";
    }
    cout<<"enter choice :\n";
    cin>>n;
    }
    
    return 0;
}