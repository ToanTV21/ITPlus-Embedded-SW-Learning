#include<stdio.h>
#include<string.h>
#define skt 1000
int main() {
            char str[skt];
            printf("Nhap chuoi bat ky: ");
            gets(str);
            printf("Chuoi da nhap: ");
            puts(str);
            int a[skt],m=0;
            int n=strlen(str)-1;
            int i,j;
            for(i=0; i<strlen(str); i++) {
                        int d=0;
                        for(j=0; j<strlen(str); j++) {
                                  j=0;
                                    while(j<strlen(str)) {
                                                if(str[i]==str[j]) {
                                                            d++;
                                                }
                                                j++;
                                    }
                        }
                        a[m]=d;
                        m++;
            }
            int k;
            int maxx=a[0];
            int maxi=0;
            for(k=0; k<m; k++) {
                        if(a[k]>maxx) {
                                    maxx=a[k];
                                    maxi=k+1;
                        }
            }
            int l,g;
            char s1[1];     
            for(l=0; l<m; l++) {
                        for(g=0; g<strlen(str); g++) {
                                    if(maxi==g) {
                                                s1[0]=str[g-1];
                                    }
                        }
            }
            printf("chu %s vi tri thu %d trong chuoi xuat hien nhieu nhat, %d lan.",s1,maxi+1,maxx);
//            printf("Vi tri xuat hien cua chuoi %d",);
}
