#include<iostream>
#include<cmath> 

using namespace std;

void partition(int left, int right);
void merge(int left, int right);
int numbers[10] ; 
int *arr2; 

int main()
{
    int N;
    cin >> N ;
    int tmp = N ; 
    int count = 0;
    while(tmp > 0)
    {
        numbers[count++] = tmp %10 ; 
        tmp /= 10 ;
    }   
    
    arr2 = new int[count]; 

    partition(0, count-1);
    
    tmp=0;  

    for( int i=0; i<count ; i++)
    {
        tmp += numbers[i]*pow(10,count-i-1) ; 
    }   
    cout<< tmp;
    return 0; 
}

void partition ( int left, int right)
{
    if (left < right)
    {
        int mid = ( left + right )/2 ;
        partition(left, mid);
        partition(mid+1, right); 
        merge(left, right);
    }
}

void merge(int left, int right)
{
    int mid = (left + right) /2 ;
    int i = left ; 
    int j = mid + 1; 
    int k = left ; 

    while (i<= mid && j<=right) 
    {
        if(numbers[i] >= numbers[j]) arr2[k++] = numbers[i++];
        else arr2[k++] = numbers[j++] ; 
    }

    int tmp = i>mid ? j : i ;
    while(k<=right) arr2[k++] = numbers[tmp++];

	for (int i=left;i<=right;i++) numbers[i] = arr2[i];
}

