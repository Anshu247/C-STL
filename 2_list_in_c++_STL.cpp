#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
    
}

int main()
{
    list<int> list1; // List of 0 length
    list<int> list2(3); // Empty List of size 7

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);

    // Removing elements from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);
    // display(list1);

    // sorting the list
    // list1.sort();
    // display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);

    list<int> :: iterator iter;
    iter = list2.begin();

    *iter = 45;
    iter++;

    *iter = 6;
    iter++;

    *iter = 9;
    iter++;

    display(list2);

    list1.merge(list2);

    list1.sort();
    list2.sort();

    cout<<"List 1 after merging:- ";
    display(list1);

    // list<int> :: iterator iter;
    // iter = list1.begin();


    // cout<<*iter<<" ";
    // iter++;

    // cout<<*iter<<" ";
    // iter++;

    // cout<<*iter<<" ";
    // iter++;

    // cout<<*iter<<" ";
    // iter++;

    // cout<<*iter<<" ";
    
    return 0;
}