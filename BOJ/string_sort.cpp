#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>
#include <string> 

using namespace std;

bool comp( string a, string b ) 
{
    if (a.length() == b.length())  return a < b ; 
    else return a.length() < b.length() ;
}

int main()
{
    int N;
    cin >> N ;

    vector <string> v; 
    for (int i= 0 ; i<N ; i++)
    {
        string s ; 
        cin >> s ;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), comp); 
    v.erase(unique(v.begin(), v.end()) , v.end() );

    for (int i=0 ; i< v.size() ; i++)
    {
        cout << v[i]<< "\n";

    }
}