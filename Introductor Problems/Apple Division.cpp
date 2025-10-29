#include <bits/stdc++.h>
using namespace std;
 
long long mini=LLONG_MAX;
vector<long long> arr;
long long total=0;
 
void solve(int ind,long long sum){
    if(ind==arr.size()){
        mini=min(mini,(abs(sum-(total-sum))));
        return;
    }
    solve(ind+1,sum+arr[ind]);
    solve(ind+1,sum);
 
}
int main(){
    int n;
    cin>>n;
    arr.resize(n);
    for(auto &x:arr) cin>>x;
 
    total=accumulate(arr.begin(),arr.end(),0LL);
 
    solve(0,0);
    cout<<mini;
    return 0;
}
