#include<bits/stdc++.h>
using namespace std;

    // 0 means unassigned cells
    int grid[9][9] = { { 3, 0, 6, 5, 0, 0, 4, 0, 0 },
                       { 5, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 0, 0, 0, 8, 0 },
                       { 0, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 0, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 0, 2, 0, 6, 3, 0, 0 } };
 
    
bool visited[10];
bool isSafe(int row,int col,int val){
	for(int i=0;i<9;i++){
		if(grid[i][col]==val or grid[row][i]==val)
		return false;
	}
	int maxrow=row-row%3;
	int maxcol=col-col%3;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		    if(grid[i+row][maxcol+j]==val)
		    return false;
	   }
     return true;
    }
}
bool solve(int row,int col){
if(row==8 and col==8)
return true;
if(col==8){
	col=0;
	row++;
}
if(grid[row][col]>0){
	return solve(row,col+1);
}
for(int i=1;i<=9;i++){
	if(isSafe(row,col,i)){
	  grid[row][col]=i;
	  if(solve(row,col+1))
	  return true;
	  }
	  grid[row][col]=0;
}
return false;
}
int main()
{
    
 
    if (solve( 0, 0))
        cout<<"yes we did it!";
    else
        cout << "no solution  exists " << endl;
 
    return 0;
}
