#include<iostream>
 
using namespace std;
 
int main()
{
    int N, count; 
    cin >> N ; 
    count = 0;
    int i = 666; 
    int series_6, answer; 

    while (1)
    {   
        int tmp = i; 
        int series_6 = 0; 

        while(tmp>0) 
        {   
            int element = tmp%10;
            tmp /= 10 ; 
            if( element != 6 & series_6<3 )
                series_6 = 0 ; 
            else 
                series_6 += 1; 

        }
        if(series_6 >=3 ) 
        {
            count += 1; 
            answer = i ; 
        }
        i++ ;

        if(count == N) break;
    }
    
    cout << answer ; 
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
