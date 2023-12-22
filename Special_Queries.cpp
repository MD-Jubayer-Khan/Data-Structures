#include <bits/stdc++.h>

using namespace std;

int main () {
    int Q;
    cin >> Q;
    queue<string> q;  
      
    while (Q--)
    {
        int command;
        cin >> command;
        string person;

        if(command == 0){
            cin >> person;
            q.push(person);
        }

        if(command == 1){
            if(!q.empty()){
                cout << q.front() << endl;
                q.pop();
            }
            else cout << "Invalid" << endl;
        }
    }
    
    return 0;
}