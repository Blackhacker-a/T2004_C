//Chuong trinh tim so lon nhat trong 3 so//

#include<stdio.h>

int main()
{
float a;
float b;
float c;
float d;
float e;

printf("Nhap so thuc a ");
scanf("%f", &a);


printf("Nhap so thuc b ");
scanf("%f", &b);


printf("Nhap so thuc c ");
scanf("%f", &c);


if (a>b) {d=a;}
else if (a<b) {d=b;}

else{d=a;}

if (d>c) {
printf("So lon nhat la %f",d);

}
else if (d<c) {
printf("So lon nhat la %f",c);

}

else{printf("Ba so bang nhau");}



return 0;

}







