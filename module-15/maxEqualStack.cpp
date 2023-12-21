#include <bits/stdc++.h>

using namespace std;

int getSum(stack<int> s){
    int sum = 0;
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    return sum;
}

int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3) {
    // Write your code here
    int sumOne = getSum(stk1);
    int sumTwo = getSum(stk2);
    int sumThree = getSum(stk3);

    while(true){
        if(sumOne == sumTwo && sumTwo == sumThree) break;
        if(sumOne >= sumTwo && sumOne >= sumThree){
            sumOne -= stk1.top();
            stk1.pop();
        }
        else if(sumTwo >= sumOne && sumTwo >= sumThree){
            sumTwo -= stk2.top();
            stk2.pop();
        }
        else {
            sumThree -= stk3.top();
            stk3.pop();           
        }

    }
    return sumOne;
}