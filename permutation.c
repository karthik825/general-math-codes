 #include<stdio.h> 
    
     void PERMUTATION(int); 
     
    int lev=-1,n,val[100],a[100]; 
     
    void main() 
    { 
        int i,j; 
         
        printf("Enter the number:"); 
        scanf("%d",&n); 
        
        for(i=0;i<n;i++) 
        { 
    	    val[i]=0; 
    	    j=i+1; 
    	    a[j]=j;
        } 
        PERMUTATION(0); 
        
    } 
    void PERMUTATION(int k) 
    { 
        int i; 
        val[k]=++lev; 
        if(lev==n) 
        { 
    	for(i=0;i<n;i++) 
    	printf("%d",a[val[i]]); 
    	printf("        "); 
        } 
        for(i=0;i<n;i++) 
        if(val[i]==0) 
        PERMUTATION(i); 
        lev--; 
        val[k]=0; 
    } 

