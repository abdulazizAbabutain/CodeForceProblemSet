#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin >> size;
    // initlation the array size from input
    string words[size];
    // take input for each word
    for (int i = 0; i < size; i++)
    {
        cin >> words[i];
    }
    // apply the algorithm
    for (int i = 0; i < size; i++)
    {
        // steps for algorithm
        // (1) check if the length more than 10 characters
        // Case 1 : true
        //      (1) take the first character
        //      (2) take the length for the word subtract by two, because we displayed the first and last characters.
        //      (3) take the last character => length -1
        //      (4) Display the output
        // Case 2 : false
        //      (1) display the output
        if (words[i].length() > 10)
        {
            cout << words[i].at(0) << words[i].length() - 2 << words[i].at(words[i].length() - 1) << "\n";
        }
        else
        {
            cout << words[i] << "\n";
        }
    }
}
