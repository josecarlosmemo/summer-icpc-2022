#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;

    if (n % 1000 != 0)
    {
        cout << 1000 - n % 1000;
    }
    else
    {
        cout << 0;
    }

    return 0;
}
