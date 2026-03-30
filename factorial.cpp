#include<iostream>
using namespace std;
int main(){
    int n;
    int count=1; 
    cout<<"enteer the nuber"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        count=count*i;
        
    }
    cout<<count;
}