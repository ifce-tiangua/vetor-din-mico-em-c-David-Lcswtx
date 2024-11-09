#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *v, a;
	int i;
	
	scanf("%d", &a);
	
	v = malloc(a * sizeof(int));
	
	if(a <= 0){
		printf("[vazio]\n");
	}else{
	
	for(i = 0; i < a; i++){
		scanf("%d", &v[i]);
	}
		
	for(i =  0; i < a; i++){
		
		if(i == 0){
			printf("[");
		}
		
		printf("%d", v[i]);
		
		if(i < a - 1){
			printf(",");
		}
	
		if(i == a){
			printf("]");
		}
	}
	printf("]\n");
	
}
	
	free(v);
	
	return 0;
}
