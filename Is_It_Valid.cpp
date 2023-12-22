#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<int> s1;
        stack<int> s2;
        for(char c:s){
            if(c == '0') s1.push(c);
            else s2.push(c);
        }

        if(s1.size() == s2.size()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}