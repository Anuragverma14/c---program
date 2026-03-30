#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"check the numebr"<<endl;
    cin>>n;
    if(n<0){
        cout<<"negative"<<"\n";
    }
    if(n>0){
        cout<<"positive"<<"\n";
    }
    if(n==0){
        cout<<"zero"<<"\n";
    }
    return 0;
}