#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonaci(int n)
{
    int a=0;
    int b=1;
    int c ;
    for(int i =1; i<n - 1 ; i++){
        c = a + b;
        a=b;
        b=c;
     }
    return c;
}
int main()
{
    int a;

    cin>>a;
    cout << fibonaci(a);

    return 0;
}
