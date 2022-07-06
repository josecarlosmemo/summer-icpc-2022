#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        if (y != x)
        {
            arr[i] = y;
        }
    }

    if (arr.size() != 0)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] != 0)
            {
                cout << arr[i] << " ";
            }
        }
    }
    else
    {
        cout << endl;
    }

    return 0;
}
