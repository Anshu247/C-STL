#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    cout<<"For Maxi"<<endl;
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"Size:- "<<maxi.size()<<endl;
    int n = maxi.size();

    for(int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    cout<<endl;

    cout<<"For Mini"<<endl;

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout<<"Size:- "<<mini.size()<<endl;
    int m = mini.size();

    for(int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<endl;

    cout<<"Empty or Not, mini:- "<<mini.empty()<<endl;
    cout<<"Empty or Not, maxi:- "<<maxi.empty()<<endl;

    return 0;
}