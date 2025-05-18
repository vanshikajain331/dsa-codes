#include<bits/stdc++.h>
using namespace std;
//Brute force:for every no 0 to n check if it exists in arry->o(n)^2
int missing(vector<int> arr,int n){
    for(int i=0;i<=n;i++){
        bool flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){//if element found come out of loop and search for next elmnt
                flag=1;
                break;
            }
        }
        //if elemnt nout found->that is missing no
        if(flag==0){
            return i;
        }
    }
}




int main(){
    vector<int> arr={1,3,2,0,5,7,8,4};
    int n=arr.size();
    int ans=missing(arr,n);
    cout<<ans<<endl;

}