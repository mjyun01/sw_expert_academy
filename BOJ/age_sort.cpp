#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>
#include <string> 

using namespace std;

bool comp( pair<int, string> a, pair<int, string> b )  
{
    if (a.first  == b.first )  return 0 ; 
    else return a.first < b.first ;
}

int main()
{
    int N, age;
    cin >> N ;

    vector <pair<int, string>> v; 
    for (int i= 0 ; i<N ; i++)
    {
        string s ; 
        cin >> age >> s ;
        v.push_back(make_pair(age, s));
    }

    stable_sort(v.begin(), v.end(), comp); 

    for (int i=0 ; i< v.size() ; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";

    }
}