#include <iostream>

using namespace std;

void pattern(){
    int n;
    cin>>n;
    for(int i = 1 ; i<=n; i++){
        //int count = n-i + 1;
        char alphabet = 'A';

        for(int j=1;j<=n-i +1;j++){
            cout<<alphabet;
            alphabet++;
        }
        cout<<endl;
    }
}

int main()
{
    pattern();
    return 0;
}
