#include<iostream>
using namespace std;
void percentage(int number)
{
    float tone;
	float counter1=0,counter2=0,counter3=0,sum=0 ,total1;
    float price1,price2,price3,total;
 for(int i=1 ;i<=number ;i++)
 {
   cout<<"enter tones";
   cin>>tone;
   sum =sum+tone;
   if(tone<=3) 
   {
    counter1=counter1+tone;
   }
    else  if(tone>3 && tone<=11) 
   {
    counter2=counter2+tone;
   }   
   else if(tone>11)
  {
    counter3=counter3+tone;
  }
   
}  


 price1=counter1*200;
 price2=counter2*175;
 price3=counter3*120;
 total=(price1+price2+price3 )/sum;
float pre1=(counter1/sum)*100;
 float pre2=(counter2/sum)*100;
 float pre3=(counter3/sum)*100;
 cout<<total <<endl;
 cout<<pre1 <<endl;
 cout<<pre2 <<endl;
 cout<<pre3;
}
int main()
{
    int number;
    cout<<"enter number of cargos :";
    cin>>number;
    percentage(number);
}
