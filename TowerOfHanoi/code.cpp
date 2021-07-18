#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char tower1 ,char tower2,char tower3){

if(n==0)
return;
towerOfHanoi(n-1,tower1,tower3,tower2);// placing n-1 disk on tower three with the help of two
cout<<" disk "<<n<< "move from "<<tower1<<"->"<<tower2<<endl;//moving nth disk from tower1 to tower2
towerOfHanoi(n-1,tower3,tower2,tower1);// placing n-1 disk from tower3 to tower2 with help of tower1


}

int main(){

int numberOfTower;
char tower1,tower2,tower3;

cin>> numberOfTower;
cin>>tower1>>tower2>>tower3;

towerOfHanoi(numberOfTower, tower1,tower2,tower3);

}