#include <bits/stdc++.h>
using namespace std;

#define lli long long
#define pb push_back

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'minimalOperations' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY words as parameter.
 */

vector<int> minimalOperations(vector<string> v) {
    lli i,a,n,j,b,c,sum,count;
    string s;
    a = v.size();
    vector<int> vans;

    for(i=0;i<a;i++)
    {
        n = v[i].length();
        s = v[i];
        j=0;
        sum = 0;

        while(j<(n-1))
        {
            count = 0;
            while(s[j] == s[j+1])
            {
                count++;
                j++;
            }
            sum += (count+1)/2;
            j++;
        }

        vans.pb(sum);
        cout<<vans[i]<<endl;
    }

    return vans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string words_count_temp;
    getline(cin, words_count_temp);

    int words_count = stoi(ltrim(rtrim(words_count_temp)));

    vector<string> words(words_count);

    for (int i = 0; i < words_count; i++) {
        string words_item;
        getline(cin, words_item);

        words[i] = words_item;
    }

    vector<int> result = minimalOperations(words);

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

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}


