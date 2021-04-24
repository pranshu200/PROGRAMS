	//INSERTION SORT

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define input(a,n){ for(int i=0;i<n;i++) cin>>a[i];}
#define output(a,n){ for(int i=0;i<n;i++) cout<<a[i]<<" ";}

void Insertion_sort(int arr[], int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    input(arr,n);
    Insertion_sort(arr,n);
    output(arr,n);
    return 0;
}

/*	INPUT
15
43 64 13 78 864 346 786 456 21 19 8 434 76 270 601

	OUTPUT
8 13 19 21 43 64 76 78 270 346 434 456 601 786 864 
*/