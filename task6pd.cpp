#include<iostream>
using namespace std;
main()
{
   int day,treated=0,doctor=7 ,diff,untreated=0;
    cout<<"enter days";
    cin>>day;
    for(int x=1 ; x <= day ; x++)
    {
        int  patient;
        cout<<"enter pateint ";
        cin >> patient;
        if(x%3==0)
        {
            if(treated<untreated)
            { 
                doctor=doctor+1;
                treated=treated+doctor;
                diff=patient-doctor;
                untreated=untreated+diff;
            }
            else
            {
                treated=treated+doctor;
                 diff=patient-doctor;
                untreated=untreated+diff;
                
            }
        }

        if( x % 3 != 0)
        {
            if(patient<=7)
            {
                treated = treated+patient;
                
            }
            else
            {
            
               treated = treated + doctor;
               diff=patient-doctor;
               untreated=untreated+diff;
            }
            
        } 
        
    }
    
      cout<<"treated patients :"<<treated <<endl;
    cout<<"untreated patients :" <<untreated;
}
