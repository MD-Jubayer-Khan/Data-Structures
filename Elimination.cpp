#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        stack<char> stk; 
           
        for(char c:s){
            if(c == '0'){
                stk.push(c);
            }
            else{
                if(!stk.empty() && stk.top() == '0') stk.pop();
                else stk.push(c);
            }
        }

        if(stk.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}