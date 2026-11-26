#include<stdio.h>

void welcome();
void printSquare(int side, char ch);
int main(){
	
	welcome();
	int side;
	char ch;
	printf("Enter side: ");
	scanf("%d", &side);
	printf("Enter character: ");
	scanf(" %c", &ch);
	printSquare(side,ch);
	welcome();
}

void welcome(void){
	
	printf("==============================\n");
	printf("    Pattern Printer v1.0\n");
	printf("==============================\n");
}

void printSquare(int side, char ch){
	
	
	for (int x = 1; x <= side; x++)
	{
		for (int y = 1; y <= side; y++)
		{
			printf(" %c",ch);
		}
		printf("\n");
	}
}
