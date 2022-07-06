//! NOT COMPLETED
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<pair<int, int>> candies;
        int n; // types of candy
        cin >> n;

        int total_amount_candy = 0; // total amount of candy

        for (int j = 0; j < n; j++)
        {
            int a; // amount of candy
            cin >> a;
            total_amount_candy += a;

            candies.push_back(make_pair(j, a));
        }

        // sort candies by amount of candy
        sort(candies.begin(), candies.end(), [](pair<int, int> a, pair<int, int> b)
             { return a.second > b.second; });

        while (total_amount_candy != 0)
        {
        }
    }

    return 0;
}
