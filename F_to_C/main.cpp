#include <iostream>

using namespace std;

int conversion(int f , int End,int wait){
    int i = 0;
    int c;
    while( i<=End){
            c = (f-32) * 5/9;
            cout<<i<<"   :   "<<c<<endl;
            f = f+wait;
            i=i+ wait;

    }
    return c;
}
int main()
{
    int f,End,wait;
    cin>>f>>End>>wait;
        conversion(f,End,wait);
    return 0;
}
