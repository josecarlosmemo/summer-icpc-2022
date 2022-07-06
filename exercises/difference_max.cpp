#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max(a, b) - min(c, d);

    return 0;
}
