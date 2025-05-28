#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    vector<int> temp;
    set<int> st;
    for(int i=0;i<nums1.size();i++){
        st.insert(nums1[i]);
    }  
    for(int i=0;i<nums2.size();i++){
        st.insert(nums2[i]);
    } 

    for(int x:st){
        temp.push_back(x);
    } 
    return temp;    
}

//OPTIMAL T.C.
vector<int> uNion(vector<int> arr1,vector<int> arr2,int n,int m){
    int i=0,j=0;//pointers
    vector<int> Union;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(Union.size()==0 || Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(Union.size()==0 || Union.back()!=arr[j]){
                Union.push_back(arr2[j]);
            }
            j++;
        }
        while(i<n)//if any element left in arr1
        {
            if(Union.back()!=arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m){//if any elmt found in arr2
            if(Union.back()!=arr2[j]){
                Union.push_back(arr2[j]);
            }
            j++;
        }
        return Union;
    }   
}

//INTERSECTION of two sorted arrays
//for every element in n2 check the if the corresponding elemnt in n2 is equal and is already not taken/not comitted-0
vector<int> intersection(vector<int> a,vector<int> b,int n,int m){
    //visited arry to keep tracked of elements already used or not
    vector<int> ans;
    int vis[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[i]=1;
                break;
            }
            if(b[j]>a[i]) break;
        }
    }
    return ans;
}
//tc-O(n*m),SC-O(n+m) 

//Optimal approach:TWO POINTER
vector<int> arrintersection(vector<int> a,vector<int> b,int n,int m){
    int i=0,j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            //if both are equal,store in ans
            ans.push_back(a[i]);
        }
    }
    return ans;
}



int main(){
    vector<int> nums1={1,1,2,3,4,5};
    vector<int> nums2={2,3,4,4,5,6};
    return 0;
}