#include<iostream>
using namespace std;
int main(){

/*    

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/



    for(int i =0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=num-1;i>0;i--){
        for(int j=0;j<=i-1;j++){
            cout<<"* ";
        }
        cout<<endl;

    }



    /*
    
      *
     ***
    *****
   *******
  *********
 ***********
    
    
    */

// for space print 
for(int i =0;i<6;i++){
    for(int j=0;j<6-i;j++){
        cout<<" ";
    }
    // for star print 
for(int r=0;r<1+(2*i);r++){
    cout<<"*";
    
}
cout<<endl;
    }
}





