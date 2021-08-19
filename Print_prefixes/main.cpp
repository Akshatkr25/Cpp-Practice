#include <bits/stdc++.h>
using namespace std;

void printPrefix(char input[],int len){

    for(int i = 0 ; i <= len;i++){
        for(int j= 0 ; j <= i ; j++){
            cout<< input[j];
        }
        cout<<endl;
    }

}

int main()
{
    char input[50] ;
    cin.getline(input,50);
    int len = strlen(input);
    printPrefix(input,len);

    return 0;
}
