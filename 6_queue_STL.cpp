#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Professor");
    q.push("Phoenix");
    q.push("Ghost");

    cout<<"First Element:- "<<q.front()<<endl;
    q.pop();
    cout<<"First Element:- "<<q.front()<<endl;

    cout<<endl;

    cout<<"Size of Queue after pop is:- "<<q.size()<<endl;

    return 0;
}