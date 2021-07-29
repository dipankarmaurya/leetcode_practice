#include<bits/stdc++.h>
using namespace std;

   bool isSafeToPlaced(vector<vector<int>>board,int row,int col){
   	    
   	   for(int i=row-1;i>=0;i--){
   	   	   if(board[i][col]==1)
   	     	return false;
		}
		for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
			if(board[i][j]==1){
				return false;
			}
		}
		for(int i=row-1,j=col+1;i>=0&&j<board.size();i--,j++){
			if(board[i][j]==1){
				return false;
			}
		}
	return true;	  
		  
   }

void placedQueen(vector<vector<int>>&board,int row,string qsf){
	
	if(row==board.size()){
		cout<<qsf<<"."<<endl;
		return;
	}
	for(int col=0;col<board.size();col++){
		if(isSafeToPlaced(board,row,col)){		
		board[row][col]=1;
		placedQueen(board,row+1,qsf+to_string(row)+"-"+to_string(col)+", ");
		board[row][col]=0;	
		}
	}	
}

int main(){
	int n;
	cin>>n;
	vector<vector<int>>board(n,vector<int>(n,0));
	
	placedQueen(board,0,"");
	
}
