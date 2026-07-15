#include <iostream>
#include <math.h>

using namespace std;
int square (int a);

int main()
{
    int s,a;

    cout <<" enter a number "<< endl;

    cin >> a;
    s = square (a);

    cout <<" the square root of " <<  a  <<" is " << s ;
    return 0;
}
 int square (int a )
 {

     return pow(a,2);;
 }
