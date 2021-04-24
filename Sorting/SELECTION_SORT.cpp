//SELECTION SORT 

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

void Selection_sort(int arr[],int n)
{   
    int temp,index;
    for(int i=0;i<n-1;i++)
    {
        temp=arr[i];
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<temp)
            {   temp=arr[j];
                index=j;
            }
        }
        swap(&arr[i],&arr[index]);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    Selection_sort(arr,n);
    output(arr,n);
    return 0;
}

/*	INPUT
10
123 656 54 765 344 514 765 34 765 234

	OUTPUT
34 54 123 234 344 514 656 765 765 765 
*/
