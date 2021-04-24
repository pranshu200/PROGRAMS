// Kth max Element in an array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define input(a,n){ for(int i=0;i<n;i++) cin>>a[i];}
#define output(a,n){ for(int i=0;i<n;i++) cout<<a[i]<<" ";}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int l,int h)
{
    int pivot=arr[h],i=l-1,j;
    for(j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[j]);
    return i+1;
}
void randomization(int arr[],int l,int h)
{
    int n=h-l+1;
    int temp=rand()%n;
    swap(&arr[l+temp],&arr[h]);
}
int Kmax(int arr[],int l,int h,int k)
{
    if(l<h){
        randomization(arr,l,h);
        int pivot=partition(arr,l,h);
        if(pivot==k ){
            return arr[k];
        }
        else if(pivot<k){
            Kmax(arr,pivot+1,h,k);
        }
        else{
            Kmax(arr,l,pivot-1,k);
        }
    }
}

int main()
{
    int n,i,k;
    cin>>n;
    int arr[n];
    input(arr,n);
    cin>>k;
    cout<<Kmax(arr,0,n-1,(n-k));
    return 0;
}

/*  INPUT 
15
43 64 13 78 864 346 786 456 21 19 8 434 76 270 601
4
    OUTPUT 
456
*/