#include <iostream>

using namespace std;
int add(int x,int y);

int main()
{
    int x;
    x=add(3,8);

    cout << x;


    return 0;
}

int add(int x,int y)
{
    int sum=x+y;

    return sum;
}

