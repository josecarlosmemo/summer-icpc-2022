#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<pair<int, string> > mountains(n);

    for (int i = 0; i < n; i++)
    {
        cin >> mountains[i].second >> mountains[i].first;
    }

    sort(mountains.begin(), mountains.end(), [](pair<int, string> a, pair<int, string> b) {
        return a.first > b.first;
    });

    cout << mountains[1].second;

    return 0;
}
