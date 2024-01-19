#include<iostream>
 
using namespace std;
void swap(int *a, int *b); 

int main()
{
    int score[1000] ; 
    int N, k ; 
    cin >> N >> k ; 

    for( int i=0; i<N ; i++)
    {
        cin >> score[i] ; 
    }

    for (int i=0 ; i<N-1 ; i++)
    {
        for(int j=0 ; j<N-i-1 ; j++)
        {
            if(score[j] < score[j+1])
            {
                swap ( &score[j+1], &score[j] ) ;
            }
        }
    } 
    
    cout << score[k-1] ;
 
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

void swap ( int * a, int * b)
{
    int tmp = *b; 
    *b = *a ; 
    *a = tmp;
}

