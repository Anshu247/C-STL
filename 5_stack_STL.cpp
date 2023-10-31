#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Professor");
    s.push("Phoenix");
    s.push("Ghost");

    cout<<"Top Element:- "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element:- "<<s.top()<<endl;

    cout<<endl;

    cout<<"Size of Stack after pop is:- "<<s.size()<<endl;

    cout<<endl;

    cout<<"Empty or Not:- "<<s.empty()<<endl;
    return 0;
}