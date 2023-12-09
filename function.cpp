#include<iostream>
using namespace std;
int sum(int x,int y)
{
    int result;
    result=x+y;
    return result;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
    return 0;
}