#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,m,n;
    cout<<"input the size of array"<<endl;
    cin>>m;
    int arr[m];

    for(i=0 ; i<m ; i++)
 {
     cin>>arr[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;

    for(i=0 ; i<m; i++){
        if(arr[i] > max)
        {
            max = arr[i];
           }
           if(arr[i] < min){
            min = arr[i];
           }
        }
         cout<<"MAX : "<<max<<endl;
         cout<<"MIN : "<<min<<endl;

        /* int sum;
         for(i=0;i<m;i++){
            sum = sum + arr[i];
         }
         cout<<"SUM = "<<sum<<endl;
        */
    return 0;
}
