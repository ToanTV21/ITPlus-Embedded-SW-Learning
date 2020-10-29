#include<stdio.h>
#include<math.h>

int main(void)
{
	int a[10];
	int i,dem = 0, tich = 1;
	float tbn,b;
	
	// Nhap vao 10 so nguyen duong
	printf("Nhap vao 10 so nguyen duong a,b,c: ");
	for(i = 0; i < 10; i++)
	{
		printf("\nNhap so thu %d: ",i+1);
		scanf("%d", &a[i]);
	}
	printf("10 so nguyen duong vua nhap la: ");
	for(i = 0; i < 10; i++)
	{
		printf("\nSo thu %d: %d",i+1, a[i]);
	}
	
	
	//Tinh trung binh nhan
	for(i = 0; i < 10; i++)
	{
		if(a[i] % 2 == 0 && a[i] % 3 == 0)
		{
			printf("\nSo chia het cho 2&3: %d", a[i]);
			tich *= a[i];
			dem++;
		};
	}
	printf("co %d so chia het cho 2&3.", dem);
	printf("\nTich = %d", tich);
	if(dem == 0)
	{
		printf("\nTrong day 10 so, khong co so nao chia het cho 2&3.");
	}
	else
	{
		b = 1.0/dem;
		tbn = pow(tich,b);
		printf("\nTBN = %f", tbn);	
	}
	return 0;
}
