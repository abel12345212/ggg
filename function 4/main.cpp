#include <iostream>

using namespace std;

int odd (int x);

int main()
{
    int x;
    cout << "enter a number" << endl;
    cin >> x;
   odd (x);
    return 0;
}
int odd (int x)
{
    if (x%2==0){
        cout << "the number is even";
    }

    else {
     cout << "the number is odd";}

}
