#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;

    cin >> a >> b >> c;

    int t = b / a;

    if (t > c)
    {
        cout << c;
    }
    else
    {
        cout << t;
    }

    return 0;
}
