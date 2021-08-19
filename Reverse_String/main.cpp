#include <bits/stdc++.h>
using namespace std;

int reverseString(char input[]){
    int Count =0;
     for(int i = 0 ; input[i]!=0 ; i++){              //count is used to reach to the last element of the array
        Count ++;
     }
     int i =0 , j=Count-1;                                     // since last element is null so count-1
     while(i<j){                                                    //loop to swap the end and the first letter simultaneously
         char temp = input[i];
        input[i] = input[j];
        input[j]=temp;
        i++;
        j--;
     }
     return 0;
}

int main()
{
    char input[50];
    cin.getline(input , 50);               //input from user
   reverseString(input);                   //function calling
    cout<<input<<endl;
    int len = strlen(input);
    cout <<len<<endl;
    cout<<a;
  return 0;
}
