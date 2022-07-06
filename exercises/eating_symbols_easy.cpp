#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case '-':
            x--;
            break;
        case '+':
            x++;
            break;
        }
    }

    cout << x;

    return 0;
}
