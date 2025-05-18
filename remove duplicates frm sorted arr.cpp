#include<bits/stdc++.h>
using namespace std;
//two pointer approach
int removeDuplicates(int arr[],int n){
    int i=0;
    for(int j=i+1;j<n;j++){
        if(arr[j] != arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

//brute-using hash set t(c)-nlogn+n
/*1.insert elmnts of array in a set
2store size pf set and put elemnts ofset in array till size of set k
and return it*/

int main(){
    int arr[]={1,1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=removeDuplicates(arr,n);
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}