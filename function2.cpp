
#include <iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
    return a;
    }else{
    return b;
    }
}
void printNumber(int num){
    cout<<num;
}
int add(int a,int b){
    return a+b;
}
int main(){

 int a =1;
    int b=2;
    cout<<max(a,b)<<endl;
    printNumber(23);
   
    cout<<"   "<<add(2, 6);

}