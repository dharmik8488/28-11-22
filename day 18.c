#include<stdio.h>

main(){
	
	int d,e,f;
	
	for(e=1; e<=5; e++){
			
			for(f=5; f>e; f--){

			
				printf("  ");
}

			for(d=1; d<=e; d++){
			
				printf("%i ",e%2);
			
			}	
			
			printf("\n");	
		
	}	
	
}
