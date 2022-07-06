#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t = 0;
    cin >> t;
    vector<int> a;

    for (int i = 0; i < t; i++)
    {
        int n = 0;
        bool flag = false;
        cin >> n;

        for (int j = 0; j < n - 1; j++)
        {

            int x = 0;
            cin >> x;

            if (x != j + 1 && !flag)
            {
                flag = true;
                a.push_back(j + 1);
            }
        }
        if (!flag)
        {
            a.push_back(n);
        }
    }

    for (auto var : a)
    {

        cout << var << endl;
    }

    return 0;
}
