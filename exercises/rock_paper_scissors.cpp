#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;

    cin >> x >> y;

    if (x == y)
    {
        cout << x;
    }
    else
    {
        if (x == 1 && y == 2)
        {
            cout << 0;
        }
        else if (x == 0 && y == 1)
        {
            cout << 2;
        }
        else if (x == 2 && y == 0)
        {
            cout << 1;
        }

        if (y == 1 && x == 2)
        {
            cout << 0;
        }
        else if (y == 0 && x == 1)
        {
            cout << 2;
        }
        else if (y == 2 && x == 0)
        {
            cout << 1;
        }
    }

    return 0;
}
