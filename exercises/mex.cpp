#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    set<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        arr.insert(x);
    }

    if (arr.count(0) == 0)
    {
        cout << 0;
        return 0;
    }
    arr.insert(0);
    for (auto el : arr)
    {
        if (arr.count(el + 1) == 0)
        {
            cout << el + 1;
            break;
        }
    }

    return 0;
}
