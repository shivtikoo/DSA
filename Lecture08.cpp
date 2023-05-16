// Switch case and Functions
#include <iostream>
using namespace std;

int main()
{

    int num;
    num = 3;

    switch (num)
    //DOESNT TAKE STRINGS AND FLOATS AS CASE!!
    {
    case 1:
        cout << "num=1" << endl;

    case 2:
        cout << "num=2" << endl;

    case 3:
        cout << "num=3" << endl;
        break;

    default:
        cout << "Default Case" << endl;
    }
}