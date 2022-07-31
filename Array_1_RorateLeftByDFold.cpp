// Online C++ compiler to run C++ program online
#include <iostream>

void printarr(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        std::cout << "i: " <<  i << " (arr+i): " << *(arr+i) << std::endl;
    }
}

void swap(int *a, int *b)
{
    int temp = *a; //5
    *a=*b; //i=6
    *b=temp; //j=5
    std::cout << "a: " <<  *a << ", b: " << *b << std::endl;
}

int * rotateArrByLeftdsize(int * arr,int n,int d)
{
   int i=0;
   int j=0;
   
   while(i<n-d)
   {
       swap((arr+i),(arr+i+d));
       i++;
   }
    return arr;
}

int main() {
    int d=2,n;
    int *p;
    int arr[] = {6,1,5,8,2,4};
    p = rotateArrByLeftdsize(arr,6,2);//582461
    printarr(p, 6);
    return 0;
}