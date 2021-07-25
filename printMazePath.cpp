#include <iostream>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf){
    if(sc>dc||sr>dr)
    {
    	return;
	}
    if(sc==dc&& sr==dr){
      cout<<psf<<endl;
        return;
    }

    printMazePaths(sr+1,sc,dr,dc,psf+"h");
    printMazePaths(sr,sc+1,dr,dc,psf+"v");
   
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}
