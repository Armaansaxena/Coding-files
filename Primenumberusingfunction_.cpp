#include<iostream>
using namespace std;
int check_prime(int n){

    bool is_prime=true;
    if(n==0||n==1){
        is_prime=false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            is_prime=false;
            break;
        }
    }
    return is_prime;
}
int main(){
    int x;
    cout<<"Enter a positive integer";
    cin>>x;
    if(check_prime(x))
    {
        cout<<x<<" is a prime number";
    }
    else{
        cout<<x<<" is not a prime number";
    }
    return 0;
}
