#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size, score;
    cin >> size >> score;
    int x[size];

    for (int i = 0; i < size; i++)
    {
        cin >> x[i];
    }
    int output = 0;
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        if (x[i] > 0)
        {
            if (score > 0)
            {
                output++;
                score--;
            }
            if (score == 0)
            {
                for (int t = i; t < size; t++)
                {
                    if (x[t] == x[t + 1] && flag)
                    {
                        output++;
                    }
                    else if (x[t] != x[t + 1])
                    {
                        flag = false;
                    }
                }
                score--;
            }
        }
    }
    cout << output;
}