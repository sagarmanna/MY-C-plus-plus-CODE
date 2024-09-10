#include<iostream>
using namespace std;
int main(){
for(int i=0;i<4;i++){
    for(int j =i;j<=2*i;j++){
        cout<<(char)(j+65)<<" ";
    }
    cout<<endl;
}



}