#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    set<int> arr;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int d;
        cin >> d;

        for (int i = 0; i < d; i++)
        {
            int pp;
            cin >> pp;
            arr.insert(pp);
        }
    }
    cout << n - arr.size();
    return 0;
}
