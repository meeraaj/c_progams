#include<stdio.h>
#include<math.h>

int main()
{
int num, i, j, z, m;
for (num = 1; num < 5000; num++)
{
	for (i = 1; i < num; i++)
	{
		if (num < i*i*i)
			break;
	for (j = i + 1; j < num; j++)
		{
			if (num < j*j*j)
				break;
	for (z = i + 1; z < num; z++)
			{
				if (z*z*z > i*i*i + j*j*j)
				break;
		for (m = z + 1; m < num; m++)
				{
			if (num < z*z*z + m*m*m)
						break;
		if ((num == i*i*i + j*j*j) && (num == z*z*z + m*m*m))
	{
		printf("\n%d^3 + %d^3 = %d^3 + %d^3 = num : %d",i, j, z, m, num);
			break;
					}
				}
			}
		}
	}
}
return 0;
}