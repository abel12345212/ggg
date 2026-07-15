#include <iostream>

using namespace std;

#include <iostream>
#include <math.h>

using namespace std;
int square (int a);
int power(int a,int r);
int main()
{  int a, r,s ;

    cout <<" enter a numbers "<< endl;

    cin >> a;

    cout <<" enter a power "<< endl;

    cin >> r;
    s = power( a, r);
    cout <<" the final resualt  " <<  a  <<" is " << s ;

    return 0;
}
 int power(int a,int r)
 {

     return pow(a,r);
 }
