#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    int n = s.length();

    for (int i = 0; i < n; i++) {
        bool isUnique = true; // ✅ reset for each character

        for (int j = 0; j < n; j++) {
            if (i != j && s[i] == s[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            return i;
        }
    }

    return -1; // If no unique character is found
}
//tc-o(n2),sc-o(1)

//optimal approach
class Solution {
    public:
        int firstUniqChar(string s) {
            int arr[26]={0};
            int n=s.length();
    
            for(int i=0;i<n;i++){//update the freq of this char in ar
                char ch=s[i];
                arr[ch-'a']++;
            }
    
            for(int i=0;i<n;i++){
                char ch=s[i];//check the freq of index of arr
                if(arr[ch-'a']==1){
                    return i;
                }
            }
            return -1;
        }
    };

int main() {
    string s = "loveleetcode";
    cout << firstUniqChar(s);
    return 0;
}
