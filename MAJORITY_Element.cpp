//	To find Majority element in an array
#include <iostream>
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define input(arr, n)  for(int i=0;i<n;i++) cin>>arr[i];
#define output(any)  for(auto i:any)  cout << i<<" "<<" ";

int partition(int *arr,int l, int r)
{
    int n = r-l+1;
    srand(time(0));
    int x = (rand()%n) +l;
    swap(arr[x],arr[r]);
    int pivot = arr[r],i=l-1,j=l;

    while(j<r)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}


int find(int *arr,int l,int r,int k)
{
    if(l<=r)
    {
        int p = partition(arr,l,r);
        if(p == k)
            return arr[p];
        else if(p < k)
            return find(arr,p+1,r,k);
        else
            return find(arr,l,p-1,k);
    }
    return -1;
}



int majority(int arr[],int n)
{
    return find(arr,0,n-1,n/2);

}

int main() 
{   
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    int result = majority(arr,n);
    cout<<"Majority = "<<result<<"\n";
	return 0;
}



/*  INPUT 
12
4 5 5 6 7 7 8 3 5 5 3 1
    OUTPUT
Majority = 5
*/