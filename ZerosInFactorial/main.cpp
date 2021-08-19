#include <iostream>

using namespace std;

int noOfZeros(int n)
{
    int ans = 0;
    for(int Count=5 ; n/Count > 0 ; Count = Count * 5){   // occurrence of 5 in a factorial = no. of zeros
        ans =ans +  (n/Count);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout << noOfZeros(n) << endl;
    return 0;
}
