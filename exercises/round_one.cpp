#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x, y;
    cin >> x >> y;

    int arr[4];

    arr[1] = 0;
    arr[2] = 0;
    arr[3] = 0;

    arr[x]++;
    arr[y]++;

    for (int i = 1; i <= 3; i++)
    {
        if (arr[i] == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}
