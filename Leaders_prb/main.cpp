#include <iostream>
using namespace std;

void leaders(int arr[], int n)
{
    int j;
    for(int i=0; i<n; i++)
   {
        for(j=i+1; j<n; j++)
        {
      if(arr[i]<arr[j]){
         break;
      }
    }
     if(j==n){
        cout<<arr[i] <<" ";
     }
  }
 }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int a =0 ; a<n ; a++){
        cin>>arr[a];
    }

    leaders(arr, n);
    return 0;
}
