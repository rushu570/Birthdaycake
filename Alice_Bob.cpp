#include<iostream>
using namespace std;
int main(){
	int a[3],b[3];
	
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	
	for(int j=0;j<3;j++){
		cin>>b[j];
	}
	int score[2];
	score[0]=0;
	score[1]=0;
	for(int k=0;k<3;k++){
		if(a[k]==b[k]){
			score[0]=score[0];
			score[1]=score[1];
		}
		else if(a[k]<b[k]){
			score[1]+=1;
		}
		else if(a[k]>b[k]){
			score[0]+=1;
		}
			
	}
	cout<<score[0]<<" "<<score[1];
}