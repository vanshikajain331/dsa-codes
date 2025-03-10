#include<bits/stdc++.h>
using namespace std;
//brute force
class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            int n = colors.size();
            vector<int> extended_colors = colors;
            
            // Extend array for circular behavior
            for(int i = 0; i < k - 1; i++) {
                extended_colors.push_back(colors[i]);
            }
            
            int res = 0;
            int new_size = extended_colors.size();
            
            // Check for alternating sequences of length k
            for(int i = 0; i < n; i++) {  // Start index within original array
                int j = i + 1;
                while (j < i + k) {
                    if (extended_colors[j] == extended_colors[j - 1]) {
                        break;  // Exit early if the sequence is not alternating
                    }
                    j++;
                }
                
                // If loop completed without breaking, count the valid sequence
                if (j == i + k) {
                    res++;
                }
            }
            
            return res;
        }
    };
    

class Solution {
    public:
        //sliding window
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            int n=colors.size();
            int N=n+(k-1);
            for(int i=0;i<k-1;i++){
                colors.push_back(colors[i]);//extend k-1 elements in array to handle circular array
            }
    
            int res=0;
            int i=0,j=1;//to check index j-1 for checking alternate
            while(j<N){
                if(colors[j]==colors[j-1]){
                    i=j;
                    j++;
                    continue;
                }
    
                if(j-i+1 == k){
                    res++;
                    i++;//shrink window
                }
                j++;
            }
            return res;
            
        }
    };