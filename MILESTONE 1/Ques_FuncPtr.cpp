// Function Pointer and Callback
// Use of QSORT function of STDLIB [qsort(int *,size_t,size_t,int *(void *a,void *b))]

#include<iostream>
#include<math.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    int A = *((int *)a);   // Typecasting void * to int * and Fetching Value
    int B = *((int *)b);
    return abs(A)-abs(B);
}
int main(){
    int arr[6]={-5,-6,10,1,-2,8};
    qsort(arr,6,sizeof(int),compare);
    for(int i=0;i<6;i++) std::cout<<" "<<arr[i] ;
    return 0;
}