//	Median of an unsorted array using Randomized Quick Sort.

#include<iostream>
using namespace std;
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
int RandomQuickSort(int arr[],int l,int h,int k)
{
    if(l<h){
        randomization(arr,l,h);
        int pivot=partition(arr,l,h);
        if(pivot==k ){
            return arr[k];
        }
        else if(pivot<k){
            RandomQuickSort(arr,pivot+1,h,k);
        }
        else{
            RandomQuickSort(arr,l,pivot-1,k);
        }
    }
}
void DisplayArr(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    if(n%2!=0){
        cout<<RandomQuickSort(arr,0,n-1,n/2);
    }
    else{
        cout<<((RandomQuickSort(arr,0,n-1,n/2)+RandomQuickSort(arr,0,n-1,(n+1)/2))/2.0);
    }

    //DisplayArr(arr,n);
    return 0;
}

/*	INPUT
15
43 64 13 78 864 346 786 456 21 19 8 434 76 270 601

	OUTPUT
78
*/