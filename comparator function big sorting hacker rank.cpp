#include <bits/stdc++.h>

using namespace std;

// Complete the bigSorting function below.
bool myfunction(string s1,string s2)
{
    int n=s1.length();
    int m=s2.length();
    if(n==m)
    return s1<s2;
    else
    return n<m;
}
vector<string> bigSorting(vector<string> arr) {

sort(arr.begin(),arr.end(),myfunction);
return arr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

