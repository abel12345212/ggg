#include <iostream>

using namespace std;

int main()
{
    int a,b,sum,sub,mul,div,mod,sum_inc, sum_dec,resualt;
   cout<<"enter two numbers"<<endl;
   cin>>a;
   cin>>b;
   sum=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;
   mod=a%b;
   sum_inc=a++ + b;
   sum_dec=++a + b;
   cout<<" the sum of "<< a <<" and "<< b <<" is "<< sum <<endl;
   cout<<" the difference of "<< a <<" and "<< b <<" is "<< sub <<endl;
   cout<<" the multiplication of "<< a <<" and "<< b <<" is "<< mul <<endl;
   cout<<" the division of " << a <<" and "<< b <<" is "<< div <<endl;
   cout<<" the module of " << a <<" and "<< b <<" is "<< div <<endl;
   cout<<" the summetion of increament " << a <<" and "<< b <<" is "<<sum_inc <<endl;
   cout<<" the summetion of decreament" << a <<" and "<< b <<" is "<< sum_dec <<endl;
   cout<< (a==b)<<endl;
   cout << (a&&b)<< endl;
   cout << !(a>b) <<endl;

   cout<< (a<<b)<<endl;
   resualt =(a>b)? a:b;
   cout << resualt <<endl;

   if (a>b){
     cout<< "the condition is true"<<endl;

   }
   else {

     cout<< "the condition is false"<<endl;

    }
    return 0;

}

