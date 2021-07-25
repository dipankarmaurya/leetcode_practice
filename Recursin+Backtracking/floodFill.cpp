#include<iostream>

#include<vector>

using namespace std;

void floodfill(vector<vector<int>>&arr,int i,int j,int n,int m,string osf ,vector<vector<bool>>&visited) {
if(arr[i][j]==1||visited[i][j]==true){
    return ;
}
if(i==n&&j==m){
    cout<<osf<<endl;
    return;
}     

     visited[i][j]=true;
       if(i-1>=0)
       floodfill(arr,i-1,j,n,m,osf+"t",visited);
       if(j-1>=0)
       floodfill(arr,i,j-1,n,m,osf+"l",visited);
       if(i+1<=n)
       floodfill(arr,i+1,j,n,m,osf+"d",visited);
       if(j+1<=m)
       floodfill(arr,i,j+1,n,m,osf+"r",visited);
   visited[i][j]=false;

}

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < int >> arr(n, vector < int > (m));
     vector < vector < bool>> visited(n, vector < bool > (m,false));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    floodfill(arr,0,0,n-1,m-1,"",visited);
}
