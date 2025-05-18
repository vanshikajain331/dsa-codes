#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    //checking from 2 to n-1 if there any third divisor prent except the 2 no itself and 1
    for(int k=2;k<n;k++){
        if(n%k==0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    // Print all prime numbers up to n
    for (int i = 2; i <=n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}




    //to check n is prime
    /*int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    */
    //optimise-->check upto root n
  