#include<iostream>
using namespace std;
//3.Optimised->Dutch national flag algo: use single paas by placing 0s at left and 2s to righ settling 1s in middle naturally
void sortColors(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++,mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[] = {0, 1, 0, 1, 1, 2, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortColors(arr,n);
    

    //1.Brute: Using sorting->o(nlogn)

    //2.Better using cnt method:2 pass
    // int cntzero = 0, cntone = 0, cnttwo = 0;

    // // Count occurrences of 0s, 1s, and 2s
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == 0) cntzero++;
    //     else if(arr[i] == 1) cntone++;
    //     else if(arr[i] == 2) cnttwo++;
    // }

    // // Overwrite array in sorted order
    // int index = 0;
    // while(cntzero > 0){
    //     arr[index] = 0;
    //     index++, cntzero--;
    // }
    // while(cntone > 0){
    //     arr[index] = 1; 
    //     index++, cntone--;
    // }
    // while(cnttwo > 0){
    //     arr[index] = 2;  
    //     index++, cnttwo--;
    // }

    // Print sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
