#include<iostream>
using namespace std;
void percentage(int number)
{
    int num;
	float counter1=0,counter2=0,counter3=0;
 for(int i=1 ;i<=number ;i++)
 {
   cout<<"enter number ";
   cin>>num;
   if(num%2==0) 
   {
    counter1=counter1+1;
   }
     if(num%3==0) 
   {
    counter2=counter2+1;
   }   
    if(num%4==0)
    {
        counter3=counter3+1;
    }
   
 }
float pre1=(counter1/number)*100;
 float pre2=(counter2/number)*100;
 float pre3=(counter3/number)*100;
 cout<<pre1 <<endl;
 cout<<pre2 <<endl;
 cout<<pre3;
}
int main()
{
    float number;
    cout<<"enter number of terms :";
    cin>>number;
    percentage(number);
}
