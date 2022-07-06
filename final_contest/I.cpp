#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, M, T, t, r;
    cin >> N >> M >> T >> t >> r; // Vacations days, training days, max tireness, added tireness from training, minus tireness from resting
    int cd = 0, ct = 0, de = 0;   // Current day, current tireness, current training days

    for (int i = 0; i < N; i++)
    {
        if (t > T)
        {
            cout << -1 << endl;
            return 0;
        }
        else if (cd == N)
        {
            cout << -1 << endl;
            return 0;
        }

        if (ct + t <= T)
        {
            ct += t;
            de++;
        }
        else
        {
            ct -= r;
            if (ct < 0)
            {
                ct = 0;
            }
        }

        cd++;

        if (de == M)
        {
            cout << cd << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
