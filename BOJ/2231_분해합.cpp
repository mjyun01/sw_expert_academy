#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    int N;
    int answer = 0;
    int element = 0;
    int tmp = 0; 
    int sum ; 
    cin>>N;
    
    //get cards
    for (int i=1 ; i<N ; i++)
    {
        sum = i;
        tmp = i;
        
        while(tmp>0)
        {
          
            element = tmp%10 ; //245 -> 5
            sum += element ; 
            //tmp -= element ; // 245 -> 240
            tmp /= 10 ; // 240 -> 24
             
        }
            
        if( N == sum )
        {
            answer = i ; 
            break ; 
            
        }

    }
    
    if(answer <= N) cout << answer ;
    
    else cout << 0;
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
