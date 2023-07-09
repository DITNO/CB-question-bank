#include<iostream>
using namespace std;

mergesort(int arr1[],int n1,int arr2[]){
    int i=0;int j=0;int k =0;
    int temp[1000] = 0;
    
    while(i<n1 and j<n2){
    if(arr1[i]>arr2[j]){
        temp[k++] = arr1[i++];
    }
    
    else{
        temp[k++] = arr2[j++];
    }
}
while(i<n1){
    temp[k++] = arr1[i++];
}
while(j<n2){
    temp[k++] = arr2[j++];
}
for(int i = 0;i<k;i++){
    cout<<temp[i]<<" ";
}
}
