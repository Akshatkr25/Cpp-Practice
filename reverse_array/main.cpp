#include <bits/stdc++.h>
using namespace std;

void Reverse(long input[],long n){
       int i=0 , j = n-1;
     while(i<j){
         int temp = input[i];
        input[i] = input[j];
        input[j]=temp;
        i++;
        j--;
     }
}

int main() {
    long  a,t ;
    cin>>a;
    long input[a];
    for(t =0 ; t<a ; t++){
        cin>>input[t];
    }
    Reverse(input , a);
    for(t=0 ; t<a; t++)
    cout<< input[t]<<" ";
    return 0;
}

