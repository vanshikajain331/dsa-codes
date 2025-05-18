#include<bits/stdc++.h>
using namespace std;
void rotateLeft(vector<int>& arr,int n,int d){
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}



int main(){
    //left rotae array by k places
    vector<int> arr={1,2,3,4,5,6,7};
    int n=arr.size();
    // int temp=arr[0];
    // for(int i=1;i<n;i++){
    //     arr[i-1]=arr[i];
    // }
    // arr[n-1]=temp;


    //left rotate array by d places->BRUTE
    int d=3;
    d=d%n; //hadle the case of multiple rotations,if d=9->d=d%n....9=(7+2),d=9%7=2
    vector<int> temp;
    //to access a index in vector we have to resevre the size of use ouch back
    //method with giving the size
    //1.store first d elemnts in temp,0 to 3th index
    /*for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
        //temp[i]=arr[i];
    }
    //2,shift remaining elmnts to front
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    //copy elmnts from end using index method,4th to 6th idx
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
    //or
    // int j=0;
    // for(int i=n-d;i<n;i++){
    //     arr[i]=temp[j];
    //     j++;
    // }
    */

    //OPTIMAL APPROACH->Using REVERSAL ALGO

   //printing the arr 
    rotateLeft(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}