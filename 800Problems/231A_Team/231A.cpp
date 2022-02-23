#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input = 0;
    cin >> input;
    int array2D[input][3];
    int count = input;
    // init the array values
    while (count != 0)
    {
        cin >> array2D[input - count][0] >> array2D[input - count][1] >> array2D[input - count][2];
        count = count - 1;
    }
    // applying the algorithm
    int output = 0;
    for (int i = 0; i < input; i++)
    {
        if (array2D[i][0] == 1 || array2D[i][1] == 1 || array2D[i][2] == 1)
        {
            if (array2D[i][0] == 1 && array2D[i][1] == 1)
            {
                output++;
            }
            else if (array2D[i][1] == 1 && array2D[i][2] == 1)
            {
                output++;
            }
            else if (array2D[i][0] == 1 && array2D[i][2] == 1)
            {
                output++;
            }
        }
    }
    cout << output;

    return 0;
}