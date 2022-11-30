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
	for(e=2; e<=5; e++){
			
			for(d=1; d<=e; d++){
			
				printf("%i ",d);
			
			}
				
			for(f=5; f>e; f--){

			
				printf("    ");
}

			for(d=e; d>0; d--){
			
				printf("%i ",d);
			
			}	
			
			printf("\n");	
		
	}	
	
}

