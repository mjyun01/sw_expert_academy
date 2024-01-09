#include<iostream>

using namespace std;
int main(int argc, char** argv)
{
	int test_case, N;
	int T;

    cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N ; 
       	long price[200] = { 0, };
    	long discount_price[100] = {0 , } ;
        int count = 0;
        int find;
        
        for (int i=0 ; i<2*N ; i++)
        { 
        	cin >> price[i];
        }
        for (int i=0 ; i<2*N ; i++ ) 
        { 
        	for (int j = i ; j < 2*N ; j++)
            {
                if( price[i] != -1 ) 
                {
                    //cout <<"here price i,j " << i << " " << j << " " << price[i]*4/3 << " " << price[j] << '\n' ;
                    if( price[j] == price[i]*4/3 )
                    {
                        //cout <<"here price j" << price[j] << '\n'  ;
                        discount_price[count] = price[i];
                        count += 1; 
                        price[j] = -1; 
                        break;
                    }
                }
            }
        }
		cout <<"#" << test_case ;
        
        for (int i=0 ; i<N ; i++)
        {             
                cout <<" "<< discount_price[i] ;
    	}
        cout <<"\n" ;
        }
        
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
