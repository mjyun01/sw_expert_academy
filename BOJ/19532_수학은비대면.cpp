#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    int a, b, c, d, e, f ; 
    int answer_1, answer_2;
    cin>>a>>b>>c>>d>>e>>f;
    
    //get cards
    for (int x=-999 ; x<=999 ; x++)
    {
        for (int y = -999 ; y<= 999 ; y++ )
        {
            answer_1 = a*x + b*y ;
            answer_2 = d*x + e*y ;
            
            if(answer_1 == c && answer_2 == f)
            
            {
                cout << x << " " << y ;
                break ;
            }
        }
        
        

    }
    
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
