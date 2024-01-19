#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>
#include <string> 

using namespace std;

int main()
{
    int N, M;
    cin >> N ;

    vector <int> v; 
    for (int i= 0 ; i<N ; i++)
    {
        int tmp;
        cin >> tmp ;
        v.push_back(tmp);
    }
    cin >> M ; 
    vector <int> f; 
    sort(v.begin(), v.end());
    for (int i=0 ; i<M ; i++)
    {
        int tmp; 
        cin >> tmp;
        f.push_back(binary_search(v.begin(), v.end(), tmp));
    
    }

    for (int i=0 ; i< M ; i++)
    {
        cout << f[i] << " ";

    }
}