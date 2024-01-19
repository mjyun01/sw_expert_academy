#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>
#include <string> 

using namespace std;
 

int main()
{
    int N, k;
    int line[10000];
    int min, maxi, mid ; 
    int answer ; 

    cin >> k >> N ;

    for (int i= 0 ; i<k ; i++)
    {
        int tmp ; 
        cin >> tmp ;
        line[i] = tmp ;
        maxi = max(maxi, line[i]);
    }

    
    //initialize min, max 
    min = 1 ; 

    while(min <= maxi) 
    { 
        int sum = 0;
        mid = (min + maxi) / 2; 
        for(int i =0 ; i<k ; i++) sum+= floor(line[i]/mid) ;
        if ( sum >= N ) 
        { 
            min = mid + 1 ;
            answer = max(answer, mid) ;
        }
        else maxi = mid-1 ; 
        
    }
    
    cout << answer ;
 
}