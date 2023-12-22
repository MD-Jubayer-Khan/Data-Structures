#include <bits/stdc++.h>

using namespace std;

int main () {
    stack<int> st;
    queue<int> q;
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    if(n == m){
        bool flag;
        while (!st.empty() && !q.empty())
        {
            if(st.top() == q.front()){
               flag = true;
                st.pop();
                q.pop();
            }
            else{
                flag = false;
                break;
            }
        }
       if(flag) cout << "YES";
       else cout << "NO"; 
    }
    else cout << "NO";
    return 0;
}