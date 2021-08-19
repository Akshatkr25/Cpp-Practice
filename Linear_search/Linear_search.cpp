#include <iostream>

using namespace std;

int linearSearch(int n , int input[] , int val){
    for(int i = 0  ; i<=n-1 ; i++){
        if( input[i] == val){
             return i;
        }
        }
        return -1;
    }

int main(){
    int x,m;
    cout<< "enter the no. of element  "  ;
    cin>> x;
    int arr[x];
    for(m=0 ; m<x;m++){
        cin>>arr[m];
    }
    int a;
    cout<<"enter the of element to be matched ";
    cin>>a;
    cout<<endl<<"the index of the element is  "<<linearSearch(x,arr,a)<<endl;
    return 0;
}
