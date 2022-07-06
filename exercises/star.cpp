#include <iostream>

using namespace std;

int main(int argc, const char **argv)
{
    int x;
    cin >> x;

    cout << 100 - (x % 100);

    return 0;
}