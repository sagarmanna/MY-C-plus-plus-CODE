#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0; j <=n-i;j++){
            cout<<" ";
        }
        for(int r=0;r<1+(2*i);r++){
            cout<<"*";
        }
        cout<<endl;
    }
}