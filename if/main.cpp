#include <iostream>

using namespace std;

int main()
{
  int average;
  cin>> average;
   if ( average>90 &&  average<100){
    cout<< "A"<<endl;
   }
   else if(  average>80 &&  average<90){
    cout << "B"<<endl;
       }
   else if(  average>70 &&  average<80){
    cout << "C"<<endl;
       }
   else if(  average>60 &&  average<70){
    cout << "D"<<endl;
       }
    else if(  average>50 &&  average<60){
    cout << "E"<<endl;
    }

    else (average<50 && average>0);

        {
    cout << "F"<<endl;
       }

    return 0;
}
