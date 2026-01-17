#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    getline(cin, s);
    string w;
    cin >> w;
    stringstream ss(s);
    string word;
    int word_count = 0;
    while (ss >> word)
    {
        if (word == w)
        {

            word_count++;
        }
    }
    cout << word_count << endl;
    return 0;
}