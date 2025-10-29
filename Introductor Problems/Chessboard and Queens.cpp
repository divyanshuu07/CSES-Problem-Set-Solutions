#include<bits/stdc++.h>
using namespace std;

int cnt=0;

bool isSafe(int row,int col,vector<vector<char>> &arr){
    //horizontal check
    for(int j=0;j<8;j++){
        if(arr[row][j]=='Q') return false;
    }

    //vertical check
    for(int i=0;i<8;i++){
        if(arr[i][col]=='Q') return false;
    }

    //left diagonal check
    for(int i=row,j=col;i>=0 && j>=0; i--,j--){
        if(arr[i][j]=='Q') return false;
    }

    //right diagonal check
    for(int i=row,j=col;i>=0 && j<8;i--,j++){
        if(arr[i][j]=='Q') return false;
    }

    return true;
}
void solve(vector<vector<char>> &arr, int row){
    if(row==8){
        cnt+=1;
        return;
    }

    for(int j=0;j<8;j++){
        if(isSafe(row,j,arr) && arr[row][j]=='.'){
            arr[row][j]='Q';
            solve(arr,row+1);
            arr[row][j]='.';
        }
    }
}
int main(){

    vector<vector<char>> arr(8,vector<char> (8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
        }
    }

    solve(arr,0);
    cout<<cnt<<endl;
    return 0;
}