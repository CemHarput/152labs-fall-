#include <stdio.h>
#include <stdlib.h>
void duration(int dur, int *days, int *hrs, int *min)
{
	*days = dur / (24 * 60);
	*hrs = (dur % (24 * 60)) / 60;
	*min = (dur % (24 * 60)) % 60;
}
int main(void)
{
	int dur;
	int days;
	int hrs;
	int min;
	do
	{
		printf("Enter a duration:");
		scanf("%d", &dur);
	} while (dur==-1);
	duration(dur, &days, &hrs, &min);
	printf("Duration is %d days,%d hours and %d minutes\n", days, hrs, min);
	system("PAUSE");
	return 0;
}