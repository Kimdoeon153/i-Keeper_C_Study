#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    cout << a / b;

    a %= b;
    cout << ".";
    for (int i = 0;i < 1200;i++)
    {
        a *= 10;
        if (a % b == 0)
        {
            cout << a / b;
            break;
        }
        else if (a / b >= 1)
        {
            cout << a / b;
            a %= b;
        }
        else
            cout << "0";

    }

}
