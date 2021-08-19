#include <iostream>

using namespace std;

void bubbleSort(int n , int input[]){
    for(int j = 0 ; j<n-1 ; j++){
        for(int i = 0 ; i< n-1-j ; i++) {
        if(input[i]>input[i+1]){
            int temp = input[i];
            input[i] = input[i+1];
            input[i+1] = temp;
        }
      }
    }
 }

int main()
{
    int i,x;
    cin>>i;
    int arr[i];
    for(x = 0 ; x<i ; x++){
        cin>>arr[x];
    }
    bubbleSort(i,arr);
    for(x = 0 ; x<i; x++){
        cout<<arr[x] <<" ";
    }
    cout<<endl;

    return 0;
}
