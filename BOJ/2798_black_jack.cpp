#include<iostream>

using namespace std;
int main()
{
    int N, M ;
    int cards[100] = {0, };
    int diff = 999999;
    int answer = 0;
    int new_answer = 0;
    cin>>N>>M;
    
    //get cards
    for (int i=0; i<N ; i++)
    {
        cin >> cards[i];
    }
    for (int i=0 ; i< N-2 ; i++)
    {
        for(int j=i+1 ; j<N-1 ; j++)
        {
            for (int k=j+1 ; k<N; k++)
            {
                new_answer=cards[i]+cards[j]+cards[k];
                if( ( ( M-new_answer) < diff ) && (M-new_answer) >=0 )
                {    
                    answer=new_answer;
                    diff = M-answer;
                }
            }
        }
    }
    cout << answer ;
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
