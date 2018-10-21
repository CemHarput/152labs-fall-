#include <stdio.h>
#include <stdlib.h>
typedef struct {
	double avg_score;
	double avg_rebound;


}avg_score;
typedef struct {
	char name[20];
	int age;
	double len;
	avg_score points;
}info_t;
void read(FILE*inp, info_t arr[])
{
	int i = 0;
	int temp;
	
	while (fscanf(inp, "%s %d %lf %lf %lf", arr[i].name, &arr[i].age, &arr[i].len, &arr[i].points.avg_score, &arr[i].points.avg_rebound) !=EOF)
	{
		i++;
		
		
	}

	for (int j = 0; j < i; j++)
	{
		printf("%s %d %.2f %.2f %.2f\n", arr[i].name, arr[i].age, arr[i].len, arr[i].points.avg_score, arr[i].points.avg_rebound);
	}


}
void display(info_t *arr)
{

}



int main()
{
	FILE*inp;
	info_t arr[25];


	inp = fopen("players.txt", "r");
	if (inp==NULL)
	{
		printf("ERROR");
	}
	else
	{
		read(inp, arr);
	}

	system("PAUSE");

}
