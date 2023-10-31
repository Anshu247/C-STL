#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 5:- "<<binary_search(v.begin(), v.end(),5)<<endl;
    cout<<"Finding 6:- "<<binary_search(v.begin(), v.end(),6)<<endl;

    cout<<endl;

    cout<<"Lower bound:- "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"Upper bound:- "<<upper_bound(v.begin(), v.end(), 6)-v.begin()<<endl;

    cout<<endl;

    int a = 3;
    int b = 5;

    cout<<"Max:- "<<max(a,b)<<endl;
    cout<<"Min:- "<<min(a,b)<<endl;

    cout<<endl;

    swap(a,b);

    cout<<"After Swapping value of a is:- "<<a<<endl;
    cout<<"After Swapping value of b is:- "<<b<<endl;

    cout<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());

    cout<<"String after reversing is:- "<<abcd<<endl;

    cout<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotating"<<endl;

    for(int i : v)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    

    return 0;
}