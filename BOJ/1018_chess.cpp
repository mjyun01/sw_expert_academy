#include<iostream>
 
using namespace std;
 
int main()
{
    int N, M ; 
    int board[50][50];  
    
    int answer = 64 ; 
    int diff; 
    
    int B_board[8][8] = {
                    {0, 1, 0, 1, 0, 1, 0, 1},
                    {1, 0, 1, 0, 1, 0, 1, 0},
                    {0, 1, 0, 1, 0, 1, 0, 1}, 
                    {1, 0, 1, 0, 1, 0, 1, 0},
                    {0, 1, 0, 1, 0, 1, 0, 1},
                    {1, 0, 1, 0, 1, 0, 1, 0},
                    {0, 1, 0, 1, 0, 1, 0, 1}, 
                    {1, 0, 1, 0, 1, 0, 1, 0}
                   } ;
    char tmp ; 
    
    cin>>M>>N;
     
    //get original board 
    for(int y = 0 ; y<M ; y++)
    {
        for(int x=0 ; x<N ; x++) 
        {    
            cin >> tmp  ;
            if(tmp == 'B') board[x][y] = 0;
            else if (tmp == 'W') board[x][y] = 1; 
        }   
    } 
    
    for (int x = 0 ; x <= N-8 ; x ++ )
    { 
        for( int y = 0 ; y <= M-8 ; y++ ) 
        {   
            diff = 0 ;
            //cout << "x " << x << "y " << y << '\n';  
            for( int i=0 ; i<8 ; i++ )
            {
                for(int j=0 ; j<8 ; j ++ )
                {
                    //check B start board
                    //cout << B_board[i][j] << "," << board[x+i][y+j] << " ";  
                    if( B_board[i][j] != board[x+i][y+j] ) diff += 1; 
                    
                }
                //cout << '\n' ;
            }
            
            //cout << "diff" << diff ; 
            if( answer > diff ) answer = diff ; 
            if ( answer > (64 - diff) ) answer = 64-diff ; 
            
        }
    }
    
    cout << answer ; 
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
