#include<bits/stdc++.h>
using namespace std;
int main(){
int rows,cols;
cin>>rows>>cols;
for(int i=1;i<=rows;i++){
	if(i%4==2){
		for(int j=1;j<cols;j++)cout<<".";
		cout<<"#";
	}
	else if(i%4==0){
		cout<<"#";
		for(int j=2;j<=cols;j++)cout<<".";
	}
	else{
		for(int j=1;j<=cols;j++)cout<<"#";
	}
	cout<<endl;
}
}
