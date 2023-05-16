#include <iostream>
using namespace std;

int power( int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "INPUT BASE:" << endl;
    cin >> a;
    cout << "INPUT POWER:" << endl;
    cin >> b;

    cout <<"RESULT:"<< power(a, b);
}