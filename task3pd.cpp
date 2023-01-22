#include<iostream>
using namespace std;
main()
{
    int i,y;
     int z=1;
        int g=14;
      int f=1;
          int h=1;
    for(i=1 ;i<=15 ;i++)
    {
         while(z<=g)
    {
        cout<<" ";
        z++;
    }
        for(y=1 ; y<=i ;y++)
        {
            cout<<"*";
        
        } 
        z=1;  
        g=g-1;
        cout<<endl;
    
    }
        for(i=15;i>=1 ;i--)
    {
           
        for(y=1;y<=i;y++)
        {

            cout<<"*";
        }
        cout<<endl;
             while(h<=f)
           {
            cout<<" ";
            h++;
           }
        h=1;
        f=f+1;
    
    }
}