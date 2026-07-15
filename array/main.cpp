#include <iostream>

using namespace std;

int main()
{
  /* int x[5];
   cout<< "enter a numbers"<< endl;

   for (int i=0;i<=4;i++)
    cin>> x[i];

    cout<< "the numbers that you entered are"<< endl;


   for (int i=0;i<=4;i++)
    cout<< x[i] << endl;*/

    int num1[2] [3];
    int num2[2] [3];
    int sum [2] [3];
       cout << "enter num1"<< endl;

    for (int i=0 ; i<2 ; i++)
        for (int j=0 ; j<3 ; j++)
        cin>> num1[i][j];
       cout << "enter num2"<< endl;
    for (int i=0 ; i<2 ; i++)
        for (int j=0 ; j<3 ; j++)
        cin>> num2[i][j];

       // int sum1=num1[i] + num2[x] ;
       // int sum2=num1[j]+ num2[y] ;

       // int f[sum1] [sum2] ;

     for (int i=0 ; i<2 ; i++)
        for (int j=0 ; j<3 ; j++)
         sum[i][j]=num1[i][j] + num2[i][j];

          cout<< "the sum of the two matrix is"<<endl;
     for (int i=0 ; i<2 ; i++)
        for (int j=0 ; j<3 ; j++)
            cout << sum[i][j] << "  ";

        cout << endl;

    return 0;
}
