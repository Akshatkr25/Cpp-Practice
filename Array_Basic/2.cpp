#include <iostream>

using namespace std;

int main()
{
    int i,m,n;
    cout<<"input the size of array"<<endl;
    cin>>m;
    cout<<"input the no. to be matched"<<endl;
    cin>>n;
    int arr[m];

    for(i=0;i<m;i++)
 {
     cin>>arr[i];


     }
       for(i=0;i<m;i++){
         if(arr[i]==n){
            cout<<"true"<<endl;

       break;
         }
          }
            if(arr[i]!=n){
                cout<<"false";
}
return 0;
}
