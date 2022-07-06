#include <iostream>
#include <set>
#include <vector>

using namespace std;

vector<long long> sieve(long long n)
{
    vector<long long> primes;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i <= n; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (long long j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

vector<long long> primes = sieve(10000);

long long get_prime_factors(long long x, long long k)
{
    long long count = 0;
    for (auto var : primes)
    {
        bool flag = false;

        while (x % var == 0)
        {
            if ((x <= k) && !flag)
            {
                count++;
                flag = true;
            }
            x /= var;
        }
    }

    return count;
}

long long main(long long argc, char const *argv[])
{
    long long t = 0;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        long long total = 0;
        long long n;
        long long k;
        cin >> n >> k;

        for (long long j = 2; j <= n; j++)
        {
            total += get_prime_factors(j, k);
        }
        cout << total << endl;
    }

    return 0;
}
