#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x;
    cin>>x;
    int len=x.size();
    if(x[0]=='-'){
        cout<<"fu";

    }
    for(int i=0;i<len;i++)
    {
        if(x[i]=='0')
        cout<<"ling";
        else if(x[i]=='1')
        cout<<"yi";
        else if(x[i]=='2')
        cout<<"er";
        else if(x[i]=='3')
        cout<<"san";
        else if(x[i]=='4')
        cout<<"si";
        else if(x[i]=='5')
        cout<<"wu";
        else if(x[i]=='6')
        cout<<"liu";
        else if(x[i]=='7')
        cout<<"qi";
        else if(x[i]=='8')
        cout<<"ba";
        else if(x[i]=='9')
        cout<<"jiu";
        if(i!=len-1)cout<<" ";
    }
        

    return 0;
}