#include<stdio.h>
#include<stdlib.h>
#include "HIGHLIGHT.h"
void main()
{
  int i,bill_no;
  float p;
  float dal,rice,roti,sweet,snacks,veg;
  char name[100];
  system("color 30");
  col_back(12,14);
  gotoxy(35,2);
  printf("......WELCOME......");
  gotoxy(30,6);
  col_back(14,9);
  printf("HOTEL BILL PRINT SYSTEM");
  gotoxy(25,20);
  col_back(14,18);
  printf("Enter any key.....");
  _getch();
  system("cls");
  col_back(14,18);
  printf("Enter the name of customer:-");
  gets(name);
  printf("\nEnter bill number:- ");
  scanf("%d",&bill_no);
  printf("\nDAL:- ");
  scanf("%f",&dal);
  printf("\nRICE:- ");
  scanf("%f",&rice);
  printf("\nROTI:- ");
  scanf("%f",&roti);
  printf("\nVEG:- ");
  scanf("%f",&veg);
  printf("\nSWEET:- ");
  scanf("%f",&sweet);
  printf("\nSNACKS:- ");
  scanf("%f",&snacks);
  gotoxy(25,20);
  col_back(14,18);
  printf("Enter any key.....");
  _getch();
  system("cls");
  system("color 80");
  gotoxy(15,2);
  printf("BILL:-");
  gotoxy(8,3);
  printf("---------------------------------------------------------");
  gotoxy(8,7);
  printf("---------------------------------------------------------");
  gotoxy(8,3);
  for(i=3;i<25;i++)
  {
    gotoxy(8,i);
    printf("|\n");
  }
   gotoxy(30,3);
  for(i=3;i<25;i++)
  {
    gotoxy(65,i);
    printf("|\n");
  }
  gotoxy(8,24);
  printf("----------------------------------------------------------");

  /****************************************************/
  col_back(14,12);
  gotoxy(24,4);
  printf("XYZ hotel");
  col_back(15,8);
  gotoxy(10,6);
  printf("Name:- ");
  puts(name);
  gotoxy(50,6);
  printf("Bill No:-");
  gotoxy(59,6);
  printf("%d",bill_no);
  gotoxy(13,8);
  printf("Subjects");
  col_back(16,8);
  for(i=8;i<25;i++)
  {
    gotoxy(23,i);
    printf("|\n");
  }
  col_back(16,8);
  for(i=8;i<25;i++)
  {
    gotoxy(35,i);
    printf("|\n");
  }
  col_back(16,8);
  for(i=8;i<25;i++)
  {
    gotoxy(47,i);
    printf("|\n");
  }

   col_back(15,8);
   gotoxy(27,8);
   printf("rate");
   col_back(15,8);
   gotoxy(39,8);
   printf("quantity");
   col_back(15,8);
   gotoxy(59,8);
   printf("Date");
   gotoxy(53,9);
   printf("12/12/2017");
   gotoxy(10,12);
   printf("1} DAL");
    gotoxy(10,14);
   printf("2} RICE");
    gotoxy(10,16);
   printf("3} ROTI");
    gotoxy(10,18);
   printf("4} VEG");
    gotoxy(10,20);
   printf("5} SWEET");
    gotoxy(10,22);
   printf("6} SNACKS");

   gotoxy(28,12);
   printf("60");
   gotoxy(28,14);
   printf("80");
   gotoxy(28,16);
   printf("8");
   gotoxy(28,18);
   printf("120");
   gotoxy(28,20);
   printf("40");
   gotoxy(28,22);
   printf("20");

   gotoxy(39,12);
   printf("%.0f",dal);
   gotoxy(39,14);
   printf("%.0f",rice);
   gotoxy(39,16);
   printf("%.0f",roti);
   gotoxy(39,18);
   printf("%.0f",veg);
   gotoxy(39,20);
   printf("%.0f",sweet);
   gotoxy(39,22);
   printf("%.0f",snacks);
   p=(60*dal)+(80*rice)+(8*roti)+(120*veg)+(40*sweet)+(20*snacks);
   gotoxy(51,12);
   printf("total amount");
   gotoxy(51,13);
   printf("%.2f",p);



  _getch();
  _getch();



}
