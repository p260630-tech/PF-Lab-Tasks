#include<stdio.h>
#define size 6

int main(){
	
	int runs[size];
	int total, best, high;
	float rate;
	high = 0;
    total = 0;
	
	
	for (int i = 0; i<size; i++){
		
		printf("Runs in over %d: ", i+1);
		scanf("%d",&runs[i]);
		
		
		total = total + runs[i];
		if (high < runs[i]){
			high = runs[i];
			best = i+1;
		}
	}
	rate = (float)total /size; 
	printf("\nTotal runs: %d", total);
	printf("\nRun rate: %.2f per over", rate);
	printf("\nBest over: Over %d with %d runs", best, high);
	
	if (total < 60)
	{
		printf("\nNeeded %d more runs to reach 60", 60-total);
	}
	else{
		printf (" \nTarget Reached");
	}
			
	return 0;
}