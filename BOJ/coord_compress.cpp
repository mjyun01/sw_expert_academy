#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
 
int main(){

    int N;
    long long temp;

    vector<int> x1; //sorted
    vector<int> x2; //original

    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> temp;
        x1.push_back(temp);  
        x2.push_back(temp);  
    } 

    sort(x1.begin(), x1.end()); 
    x1.erase(unique(x1.begin(), x1.end()), x1.end());  
 
    for (int i = 0; i < N; i++){
        cout << lower_bound(x1.begin(), x1.end(), x2[i]) - x1.begin() << " ";
    }
}