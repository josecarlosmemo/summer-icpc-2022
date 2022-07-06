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

set<int> divisores(int n)
{
    set<int> divisores;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (crib[i])
            {
                divisores.insert(i);
            }
            if (crib[n / i])
            {
                divisores.insert(n / i);
            }
        }
    }
    return divisores;
}

int main(int argc, char const *argv[])
{
    vector<int> primes = makeCrib();
    int n;
    cin >> n;
    int count = 0;

    for (int i = 1; i < n + 1; i++)
    {
        if (divisores(i).size() == 2)
        {
            count++;
        }
    }

    cout << count;

        return 0;
}
