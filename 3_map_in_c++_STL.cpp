#include<iostream>
#include<map>
#include<string>

using namespace std;

// Map is an associative array

int main()
{   
    map<string, int> marksMap;

    marksMap["Anshu"] = 100;
    marksMap["Harshit"] = 99;
    marksMap["Abhijeet Beta"] = 4;
    marksMap.insert({{"George Beta",3}, {"Mayank Beta", 2}});

    map<string, int> :: iterator itr;

    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n"; 
    }
    
    cout<<"The size is:- "<<marksMap.size()<<endl;
    cout<<"The max size is:- "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is:- "<<marksMap.empty()<<endl;

    return 0;
}