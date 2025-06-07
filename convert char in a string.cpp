#include<bits/stdc++.h>
using namespace std;
void convert(string& str){//pass by refernce so the copy is not created
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }

    }
}
int main(){
    string str;
    getline(cin,str);
    convert(str);
    cout<<str<<endl;
    return 0;
}
