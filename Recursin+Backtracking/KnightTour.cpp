#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>&board){
	
	for(int i=0;i<board.size();i++){
		for(int j=0;j<board.size();j++){
			cout<<board[i][j]<<" ";
		}
	}
    cout<<endl;
}
void knightTour(vector<vector<int>>&board,int row,int col,int n,string ksf,int count){
	
	     if(row<0||row>=n||col<0||col>=n||board[row][col]!=0)
	         return;
	      else if(count== n*n){
	      	board[row][col]=count;
	      	print(board);
	      	board[row][col]=0;
	      	return;
		  }
	
	    board[row][col]=count;
	
		knightTour(board,row-2,col+1,n,ksf+to_string(count)+" ",count+1);
	
	
		knightTour(board,row-1,col+2,n,ksf+to_string(count)+" ",count+1);
	
	
		knightTour(board,row+1,col+2,n,ksf+to_string(count)+" ",count+1);
	
	
		knightTour(board,row+2,col+1,n,ksf+to_string(count)+" ",count+1);
	
	
		knightTour(board,row+2,col-1,n,ksf+to_string(count)+" ",count+1);
	
	
		knightTour(board,row+1,col-2,n,ksf+to_string(count)+" ",count+1);
	
	
		knightTour(board,row-1,col-2,n,ksf+to_string(count)+" ",count+1);
	
	
		knightTour(board,row-2,col-1,n,ksf+to_string(count)+" ",count+1);
	
	board[row][col]=0;


}

int main(){
	int n;
	cin>>n;
	vector<vector<int>>board(n,vector<int>(n,0));
	int initial_row_pos,initial_col_pos;
	cin>>initial_row_pos>>initial_col_pos;
	
	knightTour(board,initial_row_pos,initial_col_pos,n,"",1);
}
