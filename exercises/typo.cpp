#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    bool equal = false;
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        for (int i = 0; i < a.length(); i++)
        {
            swap(a[i], a[i + 1]);
            if (a == b)
            {
                equal = true;
                break;
            }
            swap(a[i], a[i + 1]);
        }
        if (equal)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        }

    return 0;
}
