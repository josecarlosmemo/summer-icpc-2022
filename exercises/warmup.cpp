#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int k = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            k++;
        }
    }

    cout << k;

    return 0;
}
