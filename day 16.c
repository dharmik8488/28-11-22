#include<stdio.h>

main(){
	
	int d,e,f;
	
	for(e=1; e<=5; e++){
			
			for(f=1; f<e; f++){

			
				printf("  ");
}

			for(d=e; d<=5; d++){
			
				printf("%c ",'A'+d-1);
			
			}	
			
			printf("\n");	
		
	}	
	
}
