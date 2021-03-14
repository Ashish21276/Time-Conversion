#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    string y = s.substr(0, 2);
    stringstream ashish;
    ashish << y;
    int x = 0;
    ashish >> x;

    if (s[8] == 'P')
    {
        if (x == 12)
        {
            string pp = s.substr(2, 6);
            string ashu = "12";
            ashu = ashu + pp;
            return ashu;
        }
        else
        {
            x = x + 12;
            string ashu;
            stringstream bb;
            bb << x;
            bb >> ashu;
            string pp = s.substr(2, 6);
            ashu = ashu + pp;
            return ashu;
        }
    }
    else if (x == 12 && s[8] == 'A')
    {
        string pp = s.substr(2, 6);
        string ashu = "00";
        ashu = ashu + pp;
        return ashu;
    }
    else
    {
        return s.substr(0, 8);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
