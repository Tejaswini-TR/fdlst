#include<stdio.h>
main()
{
	int n;
	printf("select number between 1 to 5: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("food item 1-DOSA\n price -rs.150 ");
			break;
		case 2:
			printf("Food item 2- roti\n price -rs.129");
			break;
		case 3:
			printf("food item 3- PIZZA\n price -rs.239");
			break;
		case 4:
			printf("food item 4- ice cream \n price -rs.99");
			break;
		case 5:
			printf("food item 5-SANDWITCH \n price -rs.149");
			break;
		default:
		printf("don't wanna eat?,then go just sleep");	
			
	}
	return 0;
}
