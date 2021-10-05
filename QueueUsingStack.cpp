#include<bits/stdc++.h>
using namespace std;

class que{
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x){
        s1.push(x);
    }
    void pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Queue is empty\n";
            return;
        }
        if(s2.empty()){
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout<<"Deletion of "<<s2.top()<<endl;
        s2.pop();
    }
};

int main(){
    que q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.push(7);
    q.push(8);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(9);
    q.pop();
}