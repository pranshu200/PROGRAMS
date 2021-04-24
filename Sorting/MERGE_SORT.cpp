//MERGE SORT

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define input(a,n){ for(int i=0;i<n;i++) cin>>a[i];}
#define output(a,n){ for(int i=0;i<n;i++) cout<<a[i]<<" ";}

void merge(int *arr,int l,int m,int r)
{
    int n1=m-l+1,n2=r-m;
    int L[n1],R[n2],i=0,j=0,k=l;
    while(i<n1)
            L[i++] = arr[k++];
    while(j<n2)
            R[j++] = arr[k++];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {   
        if(L[i]<R[j])
                arr[k++] = L[i++];
        else
                arr[k++] = R[j++];
    }
    while(i<n1)
        arr[k++] = L[i++];
    while(j<n2)
        arr[k++] = R[j++];
}

void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m = (l+r)/2;  // l + (r-l)/2
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);  
    mergesort(arr,0,n-1);
    output(arr,n);
    return 0;
}

/*	INPUT
8
23 65 21 76 46 89 45 32
	
	OUTPUT
21 23 32 45 46 65 76 89 
*/