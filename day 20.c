#include<stdio.h>

main(){
	
	int d,e,f;
	
	for(e=5; e>=1; e--){
			
			for(f=5; f>e; f--){

			
				printf("  ");
}

			for(d=1; d<=e; d++){
			
				printf("%i ",d%2);
			
			}	
			
			printf("\n");	
		
	}	
	
}
