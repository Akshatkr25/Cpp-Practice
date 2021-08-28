#include <bits/stdc++.h>
using namespace std;

int findOccurence(int input[],int n,int a){
    int i=0,Count=0;
    while (i < n){
      if(a==input[i]){
        Count++;
       }
       i++;
    }
     return Count;
}

int main() {

	int x,y;
	cin>>x;
    int arr[x];
    for(y=0;y<x;y++){
        cin>>arr[y];
}
    int a;
    cin>>a;
    cout<<"findOccurence of "<<a<<" is: "<<findOccurence(arr,x,a);

        return 0;
}
