#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

long calculate_manhattan_distance(vector<long> &a)
{
    long distance = 0;
    for (int i = 0; i < a.size(); i++)
    {
        distance += abs(a[i]);
    }
    return distance;
}

double calculate_euclidean_distance(vector<long> &a)
{
    double distance = 0;
    for (int i = 0; i < a.size(); i++)
    {
        distance += abs(a[i]) * abs(a[i]);
    }
    return sqrt(distance);
}

int calculate_chebyshev_distance(vector<long> &a)
{
    long distance = 0;
    for (int i = 0; i < a.size(); i++)
    {
        distance = max(distance, abs(a[i]));
    }
    return distance;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << calculate_manhattan_distance(a) << endl;
    cout << fixed << setprecision(15) << calculate_euclidean_distance(a) << endl;
    cout << calculate_chebyshev_distance(a) << endl;

    return 0;
}
