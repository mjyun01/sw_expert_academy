#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>

using namespace std;

bool comp( pair<int, int> a, pair<int, int> b ) 
{
    if(a.second == b.second) return a.first < b.first ; 
    else return a.second < b.second ; 
}

int main()
{
    int N;
    cin >> N ;

    vector< pair<int, int> > v; 
    for (int i= 0 ; i<N ; i++)
    {
        int x, y;
        cin >> x >> y ;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), comp); 
    
    for (int i= 0 ; i<N ; i++)
    {
        cout << v[i].first << " " << v[i].second ;
        cout << '\n' ;

    }
}