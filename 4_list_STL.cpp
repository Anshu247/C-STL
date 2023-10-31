#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;
    // list<int> n(l); // copy list l
    list<int> n(5, 100);

    cout<<"Printing"<<endl;
    for(int i : n)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<endl;

    l.erase(l.begin());

    cout<<"After Erase"<<endl;
    for(int i : l)
    {
        cout<<i<<endl;
    }
    cout<<endl;

    cout<<endl;

    cout<<"Size of list:- "<<l.size()<<endl;


    return 0;
}