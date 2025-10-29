#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(auto &x:arr) cin>>x;
    int sum=(n*(n+1))/2;
    for(auto it:arr){
        sum-=it;
    }
    cout<<sum<<endl;
    return 0;
}