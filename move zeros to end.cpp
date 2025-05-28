#include<bits/stdc++.h>
using namespace std;
//brute using tc-o(n) & sc->0(n)
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n=nums.size();
            vector<int> temp;
            //store non zero elements in temp vector
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    temp.push_back(nums[i]);
                }
            }
            //put non zero elmnts of temp back in arr to move 0s to end
            int tsize=temp.size();
            for(int i=0;i<temp.size();i++){
                nums[i]=temp[i];
            }
            //fill the remaining index with zeros
            for(int i=tsize;i<n;i++){
                nums[i]=0;
            }    
        }
    };

//optimal
int main(){
    return 0;
}