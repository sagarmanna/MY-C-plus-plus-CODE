#include<iostream>
using namespace std;
int main(){

int arr[300];
int n ; 
 cout<<"How many number array : ";
 cin>>n;
 cout<<"Enter the number:";
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 cout<<"Doubless";
 for(int i =0;i<n;i++){
    cout<<2*arr[i];
 }


}