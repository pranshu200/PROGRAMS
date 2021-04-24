//QUICK SORT

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define input(a,n){ for(int i=0;i<n;i++) cin>>a[i];}
#define output(a,n){ for(int i=0;i<n;i++) cout<<a[i]<<" ";}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int Partition(int arr[],int lb,int ub)
{
    int pivot = arr[ub];
    int i = (lb - 1);
    for (int j = lb; j <= ub - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[ub]);
    return (i + 1);
}

void QuickSrt(int arr[],int lb, int ub)
{
    int i,n;
    n=ub-lb+1;
    if(lb<ub)
    {
        int loc=Partition(arr,lb,ub);
        QuickSrt(arr,lb,loc-1);
        QuickSrt(arr,loc+1,ub);
    } 
}

int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    QuickSrt(arr,0,n-1);
    output(arr,n);
    return 0;
}

/*	INPUT

15
43 64 13 78 864 346 786 456 21 19 8 434 76 270 601

	OUTPUT
8 13 19 21 43 64 76 78 270 346 434 456 601 786 864
*/