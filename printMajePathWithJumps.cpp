#include<iostream>
using namespace std;


    void printMazePaths(int sr, int sc, int dr, int dc, string psf) {
        // write your code here
        
        if(sr==dr && sc==dc)
        {
            cout<<psf<<endl;
            return;
        }
//        cout<<"abc";
        for(int i=1;i<=dr-sr;i++){
            printMazePaths(sr+i, sc, dr,  dc,  psf+"h"+to_string(i));
        }
        for(int i=1;i<=dc-sc;i++){
            printMazePaths(sr, sc+i, dr,  dc,  psf+"v"+to_string(i));
        }
        for(int i=1;i<=dr-sr&&i<=dc-sc;i++){
            printMazePaths(sr+i, sc+i, dr,  dc,  psf+"d"+to_string(i));
        }
       
        
        
    }

int main() {
        int n ;
        int m ;cin>>n>>m;
        printMazePaths(1, 1, n , m , "");
    }
