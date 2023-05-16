#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "INPUT first number: " << endl;
    cin >> a;
    cout << "INPUT second number: " << endl;
    cin >> b;
    cout << "INPUT operation number: " << endl;
    cout << "1. ADDITION " << endl;
    cout << "2. SUBTRACTION " << endl;
    cout << "3. MULTIPLICATION " << endl;
    cout << "4. DIVISION " << endl;
    cin >> c;

    switch (c)
    {
    case 1:
        cout << (a + b) << endl;
        break;
        //IF WE DONT PUT BREAK IT ENETERS OTHER CASES!!!
    case 2:
        cout << (a - b) << endl;
        break;
    case 3:
        cout << (a * b) << endl;
        break;
    case 4:
        cout << (a / b) << endl;
        break;
    //Enters default statement if it doesnt enter any other case!!! BECAUSE OF BREAK!
    default:
        cout << "INVALID SELECTION" << endl;
    }
}