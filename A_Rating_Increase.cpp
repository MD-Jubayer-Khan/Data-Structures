#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string ab;
        cin >> ab;

        int n = ab.size();
        int i;
        for (i = 1; i < n; i++) {
            string a_str = ab.substr(0, i);
            string b_str = ab.substr(i);
            int a = stoi(a_str);
            int b = stoi(b_str);

            if (a > 0 && b > 0 && b > a && to_string(a).size() == a_str.size() && to_string(b).size() == b_str.size()) {
                cout << a << " " << b << endl;
                break;
            }
        }
        if (i == n)
            cout << -1 << endl;
    }

    return 0;
}

