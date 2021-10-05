#include<bits/stdc++.h>
using namespace std;

class st{
    queue<int> q1;
    queue<int> q2;
    public:
    void push(int x){
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop(){
        cout<<q1.front()<<endl;
        q1.pop();
    }
};

signed main(){
    st s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.pop();
    s.pop();
}