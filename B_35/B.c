#include<stdio.h>
#include<math.h>
#include<string.h>



int main(void)
{
	char str[256],[256];
	char ktu;
	int dem = 0;
	// Nhap chuoi 
	printf("\nNhap mot chuoi ky tu:");
	gets(str);
	printf("Chuoi vua nhap la:");
	puts(str);	
	
	// Tim ki tu xuat hien nhieu nhat va in ra
	printf("Do dai chuoi: %d", strlen(str));
	for(int i = 0; i < strlen(str); i++)
	{
		ktu = str[i];
		for(int j = 0; j < strlen(str) - 1; j++)
		{
			if(ktu = str[j])
			{
				dem++;
				
			}
		}
	}
	
	return 0;
}
