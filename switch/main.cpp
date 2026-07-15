#include <iostream>

using namespace std;

int main()
{
   char ch;
   int day;
   cout<< "enter any letter"<<endl;
   cin>> ch;
   switch (ch)
   {
        case 'a':
        case 'i':
        case 'e':
        case 'o':
        case 'A':
        case 'I':
        case 'O':
        case 'E':
       cout<< "this is vowel"<< endl;
       break;

        default:
            cout<< "this is not vowel"<< endl;

   }


    int day;
   cout<< "enter a number"<<endl;
    cin>>day;

    switch (day)
    {
    case 1 :
        cout << "monday";
        break;

    case 2 :
        cout << "tuesday";
        break;
    case 3 :
        cout << "wednsday";
        break;
    case 4 :
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6 :
        cout << "saturday";
        break;
    case 7 :
        cout << "sunday";
        break;
    }

    }



