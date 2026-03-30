#include<iostream>
using namespace std;
int main(){
    int n;
    int count =0;
    cout<<"entert the number"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        count =count+i;
        cout<<count<<endl;
    }
}