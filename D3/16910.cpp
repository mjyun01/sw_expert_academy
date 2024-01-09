#include<iostream>
 
using namespace std;
 
int main(int argc, char** argv)
{
    int test_case;
    int T, N, count;
      
    cin>>T;
      
    for(test_case = 1; test_case <= T; ++test_case)
    {
        count = 0;
        cin >> N  ; //get radius 
        for (int x=1; x<=N ; x++) 
        {
            for(int y=1 ; y<=N ; y++) 
            {
                if ( x*x + y*y <= N*N ) 
                {
                    count += 1; 
                }
            }    
        }
        count *= 4; 
        count += 4*N ;
        count += 1; 
         
        cout << '#' << test_case <<" "<< count<< "\n"; 
               
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
