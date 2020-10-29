#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

 
struct SinhVien{
    char ten[30];
    float dT, dL, dH;
    float dtb = 0;
};
typedef SinhVien SV;
void nhap(SV &sv);
void nhapN(SV a[], int n);
void xuat(SV sv);
void xuatN(SV a[], int n);
void tinhDTB(SV &sv);
void sapxep(SV a[], int n);
void xeploai(SV a);


int main(){
    int key;
    char fileName[] = "DSSV.txt";
    int n;
    bool daNhap = false;
    do{
        printf("\nNhap so luong SV: "); scanf("%d", &n);
    }while(n <= 0);
    SV a[n];
    while(true){
        system("cls");
        printf("******************************************\n");
        printf("**    CHUONG TRINH NHAP SINH VIEN    **\n");
        printf("**      1. Nhap du lieu                 **\n");
        printf("**      2. In danh sach sinh vien       **\n");
        printf("**      3. In ra danh sach duoi 3.5           **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("\nBan da chon nhap DS sinh vien!");
                nhapN(a, n);
                printf("\nBan da nhap thanh cong!");
                daNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
                if(daNhap){
                    printf("\nBan da chon xuat DS sinh vien!");
                    xuatN(a, n);
                }else{
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
               if()
                break;
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
        }
    }
}
void tinhDTB(SV &sv){
    sv.dtb = (sv.dH + sv.dL + sv.dT)/3;    
}
void nhap(SV &sv){
    printf("\nNhap ten: "); fflush(stdin); gets(sv.ten);
    printf("\nNhap diem 3 mon: "); scanf("%f%f%f", &sv.dT, &sv.dL, &sv.dH);
    tinhDTB(sv);
}
void nhapN(SV a[], int n){
    printf("\n____________________________________\n");
    for(int i = 0; i< n; ++i){
        printf("\nNhap SV thu %d:", i+1);
        nhap(a[i]);
    }
    printf("\n____________________________________\n");
}
void xuat(SV sv){
    printf("\nHo ten SV: %s", sv.ten);
    printf("\nDiem Toan - Ly - Hoa: %.2f - %.2f - %.2f", sv.dT, sv.dL, sv.dH);
    printf("\nDiem TB: %.2f", sv.dtb);
}
void xuatN(SV a[], int n){
    printf("\n____________________________________\n");
    for(int i = 0;i < n;++i){
        printf("\nThong tin SV thu %d:", i+1);
        xuat(a[i]);
    }
    printf("\n____________________________________\n");
}
void xeploai(SV sv){
    if(sv.dtb >= 8) printf("Gioi");
    else if(sv.dtb >= 6.5) printf("Kha");
    else if(sv.dtb >= 4) printf("Trung binh");
    else printf("Yeu");
}
