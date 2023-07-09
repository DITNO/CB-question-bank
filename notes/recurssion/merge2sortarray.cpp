#include<iostream>
using namespace std;

void mergesorttwoarray(int arr1[],int s, int e,int arr2[]){
    int i=s;int j=m+1;int k =s;
    int temp[1000] = 0;
    
    while(i<=mid and j<=e){
    if(arr1[i]>arr2[j]){
        temp[k++] = arr1[i++];
    }
    
    else{
        temp[k++] = arr2[j++];
    }
}
while(i<=mid){
    temp[k++] = arr1[i++];
}
while(j<=e){
    temp[k++] = arr2[j++];
}
for(int i = s;i<=e;i++){
    arr[i] = temp[i];
}
}

void mergesort(int arr[],int s,int e){
    //base case
    if(s == e){
        return;
    }

    //rec case
    int mid= (s+e)/2;
    merrgesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    mergesorttwoarray(arr,s,e);
    
}
