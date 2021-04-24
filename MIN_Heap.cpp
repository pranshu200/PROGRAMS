// MIN HEAP
#include<iostream>
using namespace std;
#define input(arr, n)  for(int i=0;i<n;i++) cin>>arr[i];
#define output(any)  for(auto i:any)  cout << i<<" ";

void heapify(int *arr,int n,int i)
{
    int smallest = i;  //root
    int l = 2 * i + 1;  //left child
    int r = 2 * i + 2;  //right child
    
    if (l < n && arr[l] < arr[smallest])
        smallest = l;
    
    if (r < n && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

void build_heap(int *arr,int n)
{
    for(int i=n/2;i>=0;i--)
        heapify(arr,n,i);
}

int main()
{   
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    build_heap(arr,n);
    cout<<"Min Heap:\n";
    output(arr);
    return 0;
}

/*  INPUT 
15
43 64 13 78 864 346 786 456 21 19 8 434 76 270 601
    OUTPUT 
Min Heap:
8 19 13 21 43 76 270 456 78 64 864 434 346 786 601 
*/