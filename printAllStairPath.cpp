//print all stair path if one can jump 1,2,3 at a time

#include <iostream>
using namespace std;

void printStairPaths(int n ,string psf){
   if(n<0)
   return;
   if(n==0){
   	cout<<psf<<" "<<n<<endl;
   	return;
   }
   printStairPaths(n-1,psf+"1->");
   printStairPaths(n-2,psf+"2->");
   printStairPaths(n-3,psf+"3->");
}

int main(){
    int n;
    cin >> n;
    printStairPaths(n,"");
}
