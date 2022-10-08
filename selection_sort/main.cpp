#include <bits/stdc++.h>
using namespace std;

void selectionSort(int n , int element[]){
        for(int i = n-1 ; i>0 ; i--){
            int Min = element[i] , minIndex = i;
            for(int j = i+1 ; j < n ; j++){
                if(Min < element[j]){
                        Min = element[j];
                        minIndex = j;
                }
            }
            int temp = element[i];
            element[i] = element[minIndex];
            element[minIndex] = temp;
        }
    }

int main()
{
    int i,x ;
    cin >> i;
       int arr[i] ;

    for(x=0 ; x<i ; x++){
        cin>>arr[x];
    }
         selectionSort(i,arr);
      for(x=0 ; x<i ; x++){
        cout<<arr[x]<<" ";
      }

    /*  int input[] = {3,55,6,4,2};
      selectionSort(6,input);
       for(int a=0 ; a<6 ; a++){
            cout<<input[a]<< " ";
       }
*/





    return 0;

}

//hello
