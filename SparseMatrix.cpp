#include<iostream>
using namespace std;
//@hyder_fidaa
const int MAX_SIZE;

void printArray(int *arr[][MAX_SIZE],int n,int m){
	for(int i=0; i<n; i++){
		
		for(int j=0; j<m; j++){
			
			cout<<arr[i][j] <<" ";
			
		}cout<<endl;
}
	 
}

int main() {
	
    int i, j, k, n, m;
    int spr[m][n];
    int info[n*M][3];
    int gen[5][5];

    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

//Taking input from the user

    cout <<endl<< "Enter the elements of the sparse matrix:" << endl;
    for (i = 0; i < n; i++) {
    	
        for (j = 0; j < m; j++) {
        	
            cin >> spr[i][j];
            
        }
    }
    
    cout<<endl<<"Printing the Entered spasrse matrix:"<<endl;
    
    printArray(spr, n, m);
    
    
//Logic to transform spasrse matrix into information matrix
    k = 1;
    for (i = 0; i < n; i++) {
    	
        for (j = 0; j < m; j++) {
        	
            if (spr[i][j] >= 90) {
            	
                info[k][0] = i;
                info[k][1] = j;
                info[k][2] = spr[i][j];
                k++;
                
            }
        }
    }
    
    info[0][0] = n;
    info[0][1] = m;
    info[0][2] = k - 1;

    cout <<endl<< "Number of elements to be put in the information matrix: " << k - 1 << endl;

    cout <<endl<< "Information matrix of the sparse matrix:" << endl;
   
    
    for (i = 0; i < k; i++) {
    	
        for (j = 0; j < 3; j++) {
        	
            cout << info[i][j] << "    ";
            
        }
        
        cout << endl;
    }

//sorting the information matrix

  for (i = 1; i < k - 1; i++) {
    if (info[i][2] > info[i+1][2]) {
        int temp0 = info[i][0];
        int temp1 = info[i][1];
        int temp2 = info[i][2];
        
        info[i][0] = info[i+1][0];
        info[i][1] = info[i+1][1];
        info[i][2] = info[i+1][2];
        
        info[i+1][0] = temp0;
        info[i+1][1] = temp1;
        info[i+1][2] = temp2;
        
       
    }
    
}

cout<<endl<<"sorted information matrix is "<<endl;
for (i = 0; i < k; i++) {
    	
        for (j = 0; j < 3; j++) {
        	
            cout << info[i][j] << "    ";
            
        }
        
        cout << endl;
    }


    //Logic for Transforming the information Matrix back into a sparse matrix
    for (i = 0; i < n; i++) {
    	
        for (j = 0; j < m; j++) {
        	
            gen[i][j] = 0;
            
        }
    }

//important step
    for (i = 1; i < k; i++) {
    	
        gen[info[i][0]][info[i][1]] = info[i][2];
        
    }

    cout << "Sparse matrix of the information matrix:" << endl;
    for (i = 0; i < n; i++) {
    	
        for (j = 0; j < m; j++) {
        	
            cout << gen[i][j] << "    ";
            
        }
        
        cout << endl;
        
    }

    return 0;
}



