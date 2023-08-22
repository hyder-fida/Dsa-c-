#include<iostream>
using namespace std;

int main(){
	int n,m,k,i,j;
	int spr[5][5];
	int info[25][3];
	int gen[5][5];
	
	cout<<"Enter the rows of sparse matrix:"<<endl; 
	cin>>n;
	cout<<"Enter the cols of sparse matrix:"<<endl; 
	cin>>m;
	
	cout<<"Enter the elements of sparse matrix:"<<endl;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		cin	>> spr[i][j]; 
		}
	}
	
	cout<<"elements of sparse matrix are:"<<endl;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		  cout << spr[i][j]<<" "; 
		}cout<<endl;
	}
	
	//logic to convert sparse matrix into information matrix
	 k=1;
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		  if(spr[i][j] >= 50){
		  	info[k][0] = i;
		  	info[k][1] = j;
		  	info[k][2] = spr[i][j];
		  	k++;
		  	
		  }
		}
	}
	
	        info[0][0] = n;
		  	info[0][1] = m;
		  	info[0][2] = k-1;
		  	
		//printing information matrix
	cout<<endl<<"Information matrix of sparse matrix is:"<<endl;
		for(i=0; i<k; i++){
			for(j=0; j<3; j++){
				cout<<info[i][j]<<"   ";
			}cout<<endl;
		}
		
		
		//converting back the information matrix into spasre matrix
		
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
				gen[i][j] = 0;
			}
		}
		
		//most important step of copying values from information matrix back to sparse matrix
		
		for(i=0; i<k; i++){
			gen[info[i][0]][info[i][1]] = info[i][2];
		}
		
	cout<<endl<<"Matrix generated from information matrix:"<<endl;
		for(i=0; i<n; i++){
			for(j=0; j<m; j++){
			cout<<gen[i][j]<<" ";
			}cout<<endl;
		}
		
		return 0;
}




