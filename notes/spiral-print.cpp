// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
spiral(int arr[][5],int tr,int tc){
    int sr = 0;
    int sc = 0;
    int ec = tc-1;
    int er = tr -1;
    while(sc<=ec and sr<=er){
        
    //for(firdt row)
    for(int i=sc;i<=ec;i++){
        cout<<arr[sr][i];
    }
    sr++;
    //for last col
    for(int j=sr;j<=er;j++){
        cout<<arr[i][sc];
    }
    ec--;
    //for last row
    for(int k=ec;k>=sc;k--){
        cout<<arr[er][k];
    }
    er--;
    //for first col
    if(sc<=ec){
    for(int l = er;l>=sr;l--){
        cout<<arr[l][sc];
    }
    }
    sc++;
    }
    
}

int main() {
    

    return 0;
}
