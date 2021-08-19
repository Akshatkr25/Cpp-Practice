#include <iostream>

using namespace std;

void moveZero(int n, int arr[]){
   int i,j;
    for(i = 0 ; i<n ; i++){
            for(j = i+1 ; j<=n ; j++){
        if(arr[i]==0 && arr[j] != 0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        }
    }
}

int main()
{
   int x,m;
    cin >>x;
    int Arr[x];
    for(m=0 ; m<x ; m++){
        cin>>Arr[m];
    }
    moveZero(x,Arr);

    for(m=0 ; m<x ; m++){
        cout<<Arr[m]<<" ";
    }

    return 0;
}
