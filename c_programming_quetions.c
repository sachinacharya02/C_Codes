 #include <stdio.h>
/*
 * Maximum repeating element in an element
 */
void max_rept_elemnt(int a[],int size)
{
	int count =0;
	int maxcount =0;
	int max_rep_element=0;
	for (int i = 0; i<size; i++)
	{
		count = 1;
		for (int j=i+1;j<size;j++)
		{
			
			if(a[j] == a[i])
			{
				count++;
				if(count>maxcount)
				{
					max_rep_element=a[j];
				}
			}
		}
	}
	printf("The most repeating element in c is %d\n",max_rep_element);
}
/*
 *Addition of 2x2 matrix
 */
void add_matrix(int a[][],int b[][])
{
	int c[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;i<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;i<2;j++)
		{
			printf("addition of 2x2 matrix\n array elemrnt c[%d][%d]=%d \n"i,j,c[i][j]);
		}
	}
}
/*
 *To set and unset the given number
 */
int get_set_unset_number(int num)
{
	printf("Toggle of 17th and 18th number %d\n", (num ^= (3<<17)));
}


int main()
{
	/*
	 *Maximum repeating element
	 */
	int n;
	printf("Enter the number of element\n");
	scanf("%d",&n);
	printf("Enter the array elemen\n");
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the %d element  = \n",i+1);
		scanf("%d",&a[i]);
	}
	int size = sizeof(a)/sizeof(a[0]);
	max_rept_elemnt(a,size);

	/*
	 * Addition of 2x2 matrix
	 */
	int add_a[2][2], add_b[2][2];
	printf("Enter the element for the first arry");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter the first array element a[%d][%d]=  ",i,j);
			scanf("%d",&add_a[i][j]);
		}
	}

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter the second array element b[%d][%d]=  ",i,j);
			scanf("%d",&add_b[i][j]);
		}
	}
	add_matrix(add_a,add_b);
	/*
	 *Addition of 2x3 matrix
	 */

	/*
	 * Addition of 3x3 matrix
	 */


	/*
	 * Multiplication of 2x2 matrix
	 */

	
	/*
	 *Multiplication of 2x3 matrix
	 */

	/*
	 *Multiplication of 3x3 matrix
	 */

	/*
	 *set/unset 17 and 18 bit of given number
	 */
	int num = 50;
        
        get_set_unset_number(num);



}
