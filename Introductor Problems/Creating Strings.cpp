#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<string> arr;
    sort(s.begin(),s.end());

    do{
        arr.push_back(s);
    }while(next_permutation(s.begin(),s.end()));

    cout<<arr.size()<<endl;
    for(auto it:arr){
        cout<<it<<endl;
    }
    return 0;
}