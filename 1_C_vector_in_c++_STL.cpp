#include<iostream>
#include<vector>

using namespace std;
template <class T>

void display(vector<T> &v)
{
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
}

int main()
{
    // ways to create a vector

    vector<int> vec1; // zero length integer vector
    vector<char> vec2(4); // 4-element character vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(4,13); // 6-element vector of 3s

    // vec2.push_back('7');

    // display(vec1);
    // display(vec2);
    // display(vec3);

    display(vec4);

    cout<<"Size:- "<<vec4.size();
    
    return 0;
}