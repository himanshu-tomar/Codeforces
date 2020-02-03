#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << 0 << endl;
        return 0;
    }
    bool flag = true;

    int s_count[26] = {0}, t_count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        s_count[s[i] - 'a']++;
        t_count[t[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (s_count[i] != t_count[i])
        {
            cout << -1 << endl;
            return 0;
        }
    }

    char temp = ' ';
    vector<int> result;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != t[i])
            for (int j = i + 1; j < n; j++)
                if (s[j] == t[i])
                {
                    temp = s[j];
                    s[j] = s[j - 1];
                    s[j - 1] = temp;
                    result.push_back(j);
                    if (s[i] != t[i])
                        i--;
                    else
                        break;
                }
    }
    int k = result.size();
    cout << k << endl;
    for (int i = 0; i < k; i++)
        cout << result.at(i) << " ";
    cout << endl;

    return 0;
}