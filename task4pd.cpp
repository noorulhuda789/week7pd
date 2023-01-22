#include<iostream>
using namespace std;

main()
{
    int x;
    int y;
    cout<<"enter starting number :";
    cin>>x;
    cout<<"enter ending term :";
    cin>>y;
    for(int i=x;i<=y ;i++)
    {
        if(i%4==0)
        {
            int a= i*10;
            cout<<a;
        }
        else
        {

    
        cout<<i;
        }
    }
    
}