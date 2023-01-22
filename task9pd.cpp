#include<iostream>
using namespace std;
main()
{
    int x ,y,j,i;

    int a;
    cout<<"enter rows";
    cin>>a;
    int g=a-1;
    for(i=1;i<=a;i++)
    {
        for(y=1;y<=i;y++)
        {
            cout<<"*";

        }
        for( x=1;x<=g;x++)
        {
            cout<<"  ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        x=x+1;
        g=g-1;
        cout<<endl;
    }
}