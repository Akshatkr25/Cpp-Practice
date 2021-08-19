#include <iostream>
                                                                         //this is a question of hacker blocks and IT WORKS!!!
using namespace std;

int main() {
  int n;
  cout<<"Enter the no of rows ";
  cin>>n;
  cout<<endl;
    for(int i=1;i<=n;i++){
         int j = 1;
         if(i%2!=0){
         while(j<=i ){
            cout<<1<<" ";
                j++;
         }
         }
         else{
        cout<<1 <<" ";
        while(j<=i-2){
            cout<<0<<" ";
            j++;
        }
       cout<<1 <<" ";
       }
     cout<<endl;
  }
    return 0;
}
