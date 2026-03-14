#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
struct stu
{
    string id;
    int a;



};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    vector<stu> students(x+1);
    while(x--){
        string id;
        int index,a;
        cin>>id>>index>>a;
        students[index].id=id;
        students[index].a=a;
    }
    cin>>x;
    while(x--)
    {
        int index;
        cin>>index;
        cout<<students[index].id<<" "<<students[index].a<<endl;
    }
    return 0;
}