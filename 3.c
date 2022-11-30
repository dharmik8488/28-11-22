#include<stdio.h>

main(){
	
	int d,e,f;
	
	for(e=5; e>=1; e--){
					
			for(d=1; d<=e; d++){
			
				printf("%i ",d);
			
			}	
			
			for(f=e; f<5; f++){

			
				printf("    ");
}

			for(d=e; d>=1; d--){
			
				printf("%i ",d);
			
			}	
			
			printf("\n");	
		
	}
}
