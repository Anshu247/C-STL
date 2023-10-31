#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5,1);
    vector<int> last(a);

    cout<<"Print a"<<endl;
    for (int i : a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<endl;

    cout<<"Print last"<<endl;
    for (int i : last)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<endl;

    cout<<"Capacity:- "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity:- "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity:- "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity:- "<<v.capacity()<<endl;

    cout<<endl;

    cout<<"Size:- "<<v.size()<<endl;

    cout<<endl;

    cout<<"Element at 2nd Index is:- "<<v.at(2)<<endl;

    cout<<endl;

    cout<<"Front:- "<<v.front()<<endl;
    cout<<"Back:- "<<v.back()<<endl;

    cout<<endl;

    cout<<"Before POP"<<endl;
    for (int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<endl;

    cout<<"After POP"<<endl;
    for (int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<endl;

    cout<<"Before Clear Size:- "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear Size:- "<<v.size()<<endl;

    return 0;
}