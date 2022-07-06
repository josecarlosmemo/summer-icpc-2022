#include <iostream>
#include <vector>
#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

vector<int> build_crib(int n)
{
    vector<int> crib(n, 1);
    crib[0] = 0;
    for (int i = 2; i < n; ++i)
    {
        for (int j = i; j < n; j += i)
        {
            crib[j] += i;
        }
    }
    return crib;
}

int main(int argc, char const *argv[])
{
    _;
    vector<int> crib = build_crib(500005);
    int t;
    cin >> t;
    vector<int> cases(t);

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> cases[i];
    }
    for (auto var : cases)
    {
        cout << crib[var] - var << endl;
    }

    return 0;
}
