#include<stdio.h>

//@hyder_fidaa
int main() {
	
    int i, j, k, n, m;
    int spr[5][5];
    int info[25][3];
    int gen[5][5];
    
    printf("hugs n kisses")

    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("Enter the number of cols:\n");
    scanf("%d",&m);

//Taking input from the user

    printf("Enter the elements of the sparse matrix:\n" );
    for (i = 0; i < n; i++) {
    	
        for (j = 0; j < m; j++) {
        	
           scanf("%d",&spr[i][j]);
            
        }
    }
    
    printf("Printing the Entered spasrse matrix:\n");
    
    for (i = 0; i < n; i++) {
    	
        for (j = 0; j < m; j++) {
        	
        	printf("%d ",spr[i][j]);
        	
           
            
        }printf("\n");
    }
    
    
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

    printf("Number of elements to be put in the information matrix are %d \n",k-1);

   printf("Information matrix of the sparse matrix:\n");
   
    
    for (i = 0; i < k; i++) {
    	
        for (j = 0; j < 3; j++) {
        	
            printf("%d ",info[i][j]);
           
            
        }
        
        printf("\n");
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

    printf("Sparse matrix of the information matrix:\n");
    for (i = 0; i < n; i++) {
    	
        for (j = 0; j < m; j++) {
        	
            printf("%d ",gen[i][j]);
            
        }
        
       printf("\n");
        
    }

    return 0;
}

