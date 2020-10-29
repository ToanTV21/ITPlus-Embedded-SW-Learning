#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main(void)
{
	int i,ran_arr[100];
	
	// Nhap 100 so nguyen
	for(i = 0; i < MAX; i++)
	{
		ran_arr[i] = rand();
		printf("\na[%d]  = %d", i, ran_arr[i]);
	}
	
	// Tim boi cua 3 va ghi voa file
	FILE  *boi3_ptr;
	boi3_ptr = fopen("boi_cua_3.txt", "w+");
	if(boi3_ptr == NULL)
	{
		printf("Co loi!");
		exit(1);
	}
	else
	{
		for(i = 0; i < MAX; i++);
		{
			if(ran_arr[i] % 3 ==0)
			{
				fprintf(ran_arr,"%d", ran_arr[i]);
			}
		}
	}
	fclose(boi3_ptr);
	
	
	return 0;
}
