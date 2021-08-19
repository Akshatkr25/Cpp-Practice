#include <iostream>

using namespace std;

void insertionSort(int n , int arr[]){
    for(int i = 0 ; i< n ; i++){
        int current = arr[i];
        int j;
        for(j = i-1 ; j>=0 ; j--){
            if(current < arr[j]){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = current;
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
    insertionSort(x,Arr);

    for(m=0 ; m<x ; m++){
        cout<<Arr[m]<<" ";
    }

    return 0;
}
