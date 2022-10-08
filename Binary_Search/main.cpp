#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int Search(int arr[] , int val , int n){
    int start =0 , End = n - 1;      // end is n-1 because it will go through 0 to 4 in a 5 sized array.
    while (End >= start){
   int mid = (start + End) / 2;  // IT WILL FIND THE MIDDLE ELEMENT IN THE ARRAY
        if(arr[mid] == val){         // IF THE MID ELEMENT MATCHES WITH THE VALUE THEN
            return mid;                  //IT RETURN THE MID ELEMENT AS ANS.
    }
    else if (arr[mid] > val){     //IF IT IS GREATER THAN THE VALUE
        End = mid -1;                   //IT MOVES TO THE LEFT SIDE OF THE ARRAY  I.E SMALLER SIDE
    }
    else{                                    // NOW IT SHOULD PROBABLY BE LESS THAN THE VALUE
        start = mid +1;              //IT MOVES TO THE RIGHT SIDE OF THE ARRAY  I.E GRATER SIDE
    }
}
    return -1;                          // IT WILL SHOEW -1 AS NO VALUE MATCHES
}
int main()
{
    int n;
    cin >>n;
    int Arr[n];
    for (int i=0 ; i<n ; i++){
        cin>>Arr[i];
    }
    int x;
    cin>>x;
    cout<< "Index of the following no. is : "<<Search(Arr , x ,n);

    return 0;
}
