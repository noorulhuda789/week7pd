#include<iostream>
using namespace std;
main()
{
    int i,y;
    for(i=15;i>=1 ;i--)
    {
        for(y=1;y<=i;y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}