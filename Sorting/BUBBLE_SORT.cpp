	//BUBBLE SORT

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define input(a,n){ for(int i=0;i<n;i++) cin>>a[i];}
#define output(a,n){ for(int i=0;i<n;i++) cout<<a[i]<<" ";}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void Bubble_Sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    Bubble_Sort(arr,n);
    output(arr,n);
    return 0;
}

/*	INPUT
10
123 656 54 765 344 514 765 34 765 234

	OUTPUT
34 54 123 234 344 514 656 765 765 765 
*/