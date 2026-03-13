#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    cout<<"Celsius = "<<(x-32)*5/9;
    return 0;
}