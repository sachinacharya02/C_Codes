/*
 * Maximum repeating element in array
 */
#include <stdio.h>

int main()
{
	int a[5] = {1,2,2,5,4}, count = 0, max_rept_elmt = 0, maxcount=0;

	for(int i=0; i<5; i++)
	{
		for(int j=i+1; j<5; j++)
		{       
		       	count = 1;
			if(a[j] == a[i])
			{
				count++;
				if(count > maxcount)
				{
					maxcount = count;
					max_rept_elmt=a[j];
				}
			}
		}
	}
	printf("Maximuum repeatating element in array is%d",max_rept_elmt);
}

