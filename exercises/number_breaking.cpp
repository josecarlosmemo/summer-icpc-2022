#include <iostream>
#include <vector>
#include <set>

using namespace std;

typedef long long lli;

lli n = 1000000;

vector<bool> crib(n, true);

vector<int> makeCrib()
{
    crib[0] = crib[1] = false;

    for (int i = 2; i * i < n; ++i)
    {
        if (!crib[i])
            continue;
        for (int j = i * i; j < n; j += i)
        {
            crib[j] = false;
        }
    }
    vector<int> primes;
    for (int i = 2; i < n; i++)
    {
        if (crib[i])
        {
            primes.push_back(i);
        }
    }

    return primes;
}

int main(int argc, char const *argv[])
{
    vector<int> primes = makeCrib();
    int t;
    cin >> t;
    vector<lli> cases(t);

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> cases[i];
    }

    for (int i = 0; i < cases.size(); i++)
    {
        set<int> factors;

        for (auto p : primes)
        {
            while ((cases[i] % p) == 0)
            {
                cases[i] /= p;
                factors.insert(p);
            }
        }
        if (cases[i] > 1)
        {
            factors.insert(cases[i]);
        }

        cout << "Case " << i + 1 << ": ";
        for (auto f : factors)
        {
            cout << f << " ";
        }
        cout << endl;
    }

    return 0;
}
