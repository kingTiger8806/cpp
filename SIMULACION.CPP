/*
	Simulador de una red de computadoras.
*/
#include <stdio.h>
#include <conio.h>
#include <dos.h>
void cuadro(int ,int );
void rectangulo(int ,int );
void main (void)
{
clrscr();
int a,b,c,x,y;
/*****************************computadoras ************************/
	gotoxy(21,3);printf("   xp");
   gotoxy(21,4);printf("  win");
   cuadro(20,2);
   cuadro(33,2);
   cuadro(46,2);
	cuadro(33,13);
	cuadro(46,13);
   rectangulo(18,6);
   rectangulo(31,6);
   rectangulo(44,6);
	rectangulo(31,17);
	rectangulo(44,17);
/*****************************circuito************************/
gotoxy(22,10); printf("�");
gotoxy(36,10); printf("�");
gotoxy(49,10); printf("�");
gotoxy(36,21); printf("�");
gotoxy(49,21); printf("�");
gotoxy(22,9); printf("�");
gotoxy(36,9); printf("�");
gotoxy(49,9); printf("�");
gotoxy(36,20); printf("�");
gotoxy(49,20); printf("�");
gotoxy(61,10); printf("�");
gotoxy(61,21); printf("�");
do {
for (a=1; a<=51; a++)
	{
		gotoxy(9+a,10); printf("�");
	}
for (a=1; a<=10; a++)
	{
		gotoxy(61,10+a); printf("�");
	}
for (a=1; a<=33; a++)
	{
	  gotoxy(61-a,21); printf("�");
	}

gotoxy(22,10); printf("�");
gotoxy(36,10); printf("�");
gotoxy(49,10); printf("�");
gotoxy(36,21); printf("�");
gotoxy(49,21); printf("�");
gotoxy(22,9); printf("�");
gotoxy(36,9); printf("�");
gotoxy(49,9); printf("�");
gotoxy(36,20); printf("�");
gotoxy(49,20); printf("�");
gotoxy(61,10); printf("�");
gotoxy(61,21); printf("�");

/******************************inicio del circuito**********************/
gotoxy(61,10); printf("�");
gotoxy(61,21); printf("�");
gotoxy(49,9); printf("�");
gotoxy(49,10); printf("�");
gotoxy(49,20); printf("�");
gotoxy(49,21); printf("�");
gotoxy(36,20); printf("�");
gotoxy(36,21); printf("�");
for (a=1; a<=11; a++)
	{
		gotoxy(49+a,10); printf("�");
	}
for (a=1; a<=10; a++)
	{
		gotoxy(61,10+a); printf("�");
	}
for (a=1; a<=11; a++)
	{
	  gotoxy(61-a,21); printf("�");
	}
for (a=1; a<=52; a++)
	{
	  gotoxy(9+a,10); printf("�");
	  delay(50);
	  gotoxy(9+a,10); printf("�");
	  gotoxy(61,10); printf("�");
	  if (a==52)
	  {
		 for (b=1; b<=11; b++)
			{
			gotoxy(61,10+b); printf("�");
			delay(50);
			gotoxy(61,10+b); printf("�");
			gotoxy(61,21); printf("�");
			if (b==11)
				{
				  for (c=1; c<=33; c++)
					 {
						gotoxy(61-c,21); printf("�");
						delay(50);
						gotoxy(61-c,21); printf("�");
						gotoxy(49,21); printf("�");

					 }
				}
		  }
	  }
	  gotoxy(22,10); printf("�");
	  gotoxy(36,10); printf("�");
	  gotoxy(49,10); printf("�");
	  gotoxy(49,21); printf("�");
	  gotoxy(36,21); printf("�");

	}

	 gotoxy(22,10); printf("�");
	 gotoxy(36,10); printf("�");
	 gotoxy(49,10); printf("�");
	 for (c=1; c<=33; c++)
	 {
	 gotoxy(27+c,21); printf("�");
	 delay(50);
	 gotoxy(27+c,21); printf("�");
	 gotoxy(36,21); printf("�");
	 gotoxy(49,21); printf("�");
	 if (c==33)
		{
		 for (b=1; b<=11; b++)
			{
			gotoxy(61,21-b); printf("�");
			delay(50);
			gotoxy(61,21-b); printf("�");
			gotoxy(61,21); printf("�");
			if (b==11)
			{
			for (a=1; a<=51; a++)
				  {
				  gotoxy(22,10); printf("�");
				  gotoxy(36,10); printf("�");
				  gotoxy(49,10); printf("�");
				  gotoxy(61-a,10); printf("�");
				  delay(50);
				  gotoxy(61-a,10); printf("�");
				  gotoxy(61,10); printf("�");

			}
	 }

			}
		}
	 }
/***************************primera maquina****************************/

gotoxy(22,10); printf("�");
gotoxy(22,9); printf("�");
for (a=1; a<=12; a++)
	{
		 gotoxy(9+a,10); printf("�");
		 }
for (a=1; a<=13; a++)
	 {
	  gotoxy(22,10); printf("�");
	  gotoxy(9+a,10); printf("�");
	  delay(50);
	  if (a==2)
		 {

			 printf("�");
		 }
	  gotoxy(9+a,10); printf("�");
	  gotoxy(22,10); printf("�");

	 }
for (a=1; a<=2; a++)
	 {
	  gotoxy(22,11-a); printf("�");
	  delay(50);
	  gotoxy(22,11-a); printf("�");
	  gotoxy(22,10); printf("�");
	 }

for (a=1; a<=2; a++)
	  {
		 gotoxy(22,8+a); printf("�");
		 gotoxy(22,10); printf("�");
	  }
	for (a=1; a<=12; a++)
	  {
		 gotoxy(9+a,10); printf("�");
	  }
	for (a=1; a<=2; a++)
	  {
		 gotoxy(22,8+a);printf("�");
		 delay(50);
		 gotoxy(22,8+a); printf("�");
		 gotoxy(22,10); printf("�");
	  }
	for (a=1; a<=12; a++)
	  {
		 gotoxy(22-a,10);printf("�");
		 delay(50);
		 gotoxy(22-a,10); printf("�");
		 gotoxy(22,10); printf("�");
	  }
/***************************seguanda maquina*******************************/

gotoxy(36,10); printf("�");
gotoxy(36,9); printf("�");

for (a=1; a<=13; a++)
	{
		 gotoxy(22+a,10); printf("�");
	}
for (a=1; a<=13; a++)
	 {
	  gotoxy(22,10); printf("�");
	  gotoxy(9+a,10); printf("�");
	  delay(50);
	  if (a==2)
		 {
		  printf("�");
		 }
	  gotoxy(9+a,10); printf("�");
	  gotoxy(22,10); printf("�");

	 }
for (a=1; a<=14; a++)
	 {
	  gotoxy(22+a,10); printf("�");
	  delay(50);
	  if (a==2)
		 {
			 printf("�");
		 }
	  gotoxy(22+a,10); printf("�");
	  gotoxy(36,10); printf("�");
	 }
for (a=1; a<=2; a++)
	 {
	  gotoxy(36,11-a); printf("�");
	  delay(50);
	  gotoxy(36,11-a); printf("�");
	  gotoxy(36,10); printf("�");
	 }
	for (a=1; a<=2; a++)
	  {
		 gotoxy(36,8+a); printf("�");
		 gotoxy(36,10); printf("�");
	  }
	for (a=1; a<=2; a++)
	  {
		 gotoxy(36,8+a);printf("�");
		 delay(50);
		 gotoxy(36,8+a); printf("�");
		 gotoxy(36,10); printf("�");
	  }
	for (a=1; a<=13; a++)
	  {
		 gotoxy(36-a,10);printf("�");
		 delay(50);
		 gotoxy(36-a,10); printf("�");
		 gotoxy(36,10); printf("�");
	  }
	for (a=1; a<=12; a++)
	  {
		 gotoxy(22-a,10);printf("�");
		 delay(50);
		 gotoxy(22-a,10); printf("�");
		 gotoxy(22,10); printf("�");
	  }
/**************************tercera maquina******************************/

gotoxy(49,10); printf("�");
gotoxy(49,9); printf("�");
for (a=1; a<=13; a++)
	{
		 gotoxy(35+a,10); printf("�");
	}
for (a=1; a<=13; a++)
	 {
	  gotoxy(36,10); printf("�");
	  gotoxy(9+a,10); printf("�");
	  delay(50);
	  if (a==2)
		 {
		  printf("�");
		 }
	  gotoxy(9+a,10); printf("�");
	  gotoxy(36,10); printf("�");

	 }
for (a=1; a<=14; a++)
	 {
	  gotoxy(22+a,10); printf("�");
	  delay(50);
	  if (a==2)
		 {
			 printf("�");
		 }
	  gotoxy(22+a,10); printf("�");
	  gotoxy(22,10); printf("�");
	 }
for (a=1; a<=14; a++)
	 {
	  gotoxy(35+a,10); printf("�");
	  delay(50);
	  if (a==2)
		 {
			 printf("�");
		 }
	  gotoxy(35+a,10); printf("�");
	  gotoxy(36,10); printf("�");
	 }
for (a=1; a<=2; a++)
	 {
	  gotoxy(49,11-a); printf("�");
	  delay(50);
	  gotoxy(49,11-a); printf("�");
	  gotoxy(49,10); printf("�");
	 }
	for (a=1; a<=2; a++)
	  {
		 gotoxy(49,8+a); printf("�");
		 gotoxy(49,10); printf("�");
	  }
	for (a=1; a<=2; a++)
	  {
		 gotoxy(49,8+a);printf("�");
		 delay(50);
		 gotoxy(49,8+a); printf("�");
		 gotoxy(49,10); printf("�");
	  }

	for (a=1; a<=13; a++)
	  {
		 gotoxy(49-a,10);printf("�");
		 delay(50);
		 gotoxy(49-a,10); printf("�");
		 gotoxy(49,10); printf("�");
	  }
	for (a=1; a<=13; a++)
	  {
		 gotoxy(36-a,10);printf("�");
		 delay(50);
		 gotoxy(36-a,10); printf("�");
		 gotoxy(36,10); printf("�");
	  }
	for (a=1; a<=12; a++)
	  {
		 gotoxy(22-a,10);printf("�");
		 delay(50);
		 gotoxy(22-a,10); printf("�");
		 gotoxy(22,10); printf("�");
	  }
/********************************cuarta maquina***********************/

gotoxy(61,10); printf("�");
gotoxy(61,21); printf("�");
gotoxy(49,9); printf("�");
gotoxy(49,10); printf("�");
gotoxy(49,20); printf("�");
gotoxy(49,21); printf("�");
for (a=1; a<=11; a++)
	{
		gotoxy(49+a,10); printf("�");
	}
for (a=1; a<=10; a++)
	{
		gotoxy(61,10+a); printf("�");
	}
for (a=1; a<=11; a++)
	{
	  gotoxy(61-a,21); printf("�");
	}
for (a=1; a<=52; a++)
	{
	  gotoxy(9+a,10); printf("�");
	  delay(50);
	  gotoxy(9+a,10); printf("�");
	  gotoxy(61,10); printf("�");
	  if (a==52)
	  {
		 for (b=1; b<=11; b++)
			{
			gotoxy(61,10+b); printf("�");
			delay(50);
			gotoxy(61,10+b); printf("�");
			gotoxy(61,21); printf("�");
			if (b==11)
				{
				  for (c=1; c<=12; c++)
					 {
						gotoxy(61-c,21); printf("�");
						delay(100);
						gotoxy(61-c,21); printf("�");
						gotoxy(49,21); printf("�");

					 }
				}
		  }
	  }
	  gotoxy(22,10); printf("�");
	  gotoxy(36,10); printf("�");
	  gotoxy(49,10); printf("�");

	}

	for (a=1; a<=1; a++)
	 {
	  gotoxy(49,21-a); printf("�");
	  delay(50);
	  gotoxy(49,21-a); printf("�");
	  gotoxy(49,21); printf("�");
	 }

	for (a=1; a<=2; a++)
	  {
		 gotoxy(49,19+a);printf("�");
		 delay(100);
		 gotoxy(49,19+a); printf("�");
		 gotoxy(49,21); printf("�");
	  }
	 gotoxy(22,10); printf("�");
	 gotoxy(36,10); printf("�");
	 gotoxy(49,10); printf("�");
	 for (c=1; c<=12; c++)
	 {
	 gotoxy(49+c,21); printf("�");
	 delay(50);
	 gotoxy(49+c,21); printf("�");
	 gotoxy(49,21); printf("�");
	 if (c==12)
		{
		 for (b=1; b<=11; b++)
			{
			gotoxy(61,21-b); printf("�");
			delay(50);
			gotoxy(61,21-b); printf("�");
			gotoxy(61,21); printf("�");
			if (b==11)
			{
			for (a=1; a<=51; a++)
				  {
				  gotoxy(22,10); printf("�");
				  gotoxy(36,10); printf("�");
				  gotoxy(49,10); printf("�");
				  gotoxy(61-a,10); printf("�");
				  delay(50);
				  gotoxy(61-a,10); printf("�");
				  gotoxy(61,10); printf("�");

			}
	 }

			}
		}
	 }
/*****************************quinta maquina*******************************/
gotoxy(61,10); printf("�");
gotoxy(61,21); printf("�");
gotoxy(49,9); printf("�");
gotoxy(49,10); printf("�");
gotoxy(49,20); printf("�");
gotoxy(49,21); printf("�");
gotoxy(36,20); printf("�");
gotoxy(36,21); printf("�");
for (a=1; a<=11; a++)
	{
		gotoxy(49+a,10); printf("�");
	}
for (a=1; a<=10; a++)
	{
		gotoxy(61,10+a); printf("�");
	}
for (a=1; a<=11; a++)
	{
	  gotoxy(61-a,21); printf("�");
	}
for (a=1; a<=52; a++)
	{
	  gotoxy(9+a,10); printf("�");
	  delay(50);
	  gotoxy(9+a,10); printf("�");
	  gotoxy(61,10); printf("�");
	  if (a==52)
	  {
		 for (b=1; b<=11; b++)
			{
			gotoxy(61,10+b); printf("�");
			delay(50);
			gotoxy(61,10+b); printf("�");
			gotoxy(61,21); printf("�");
			if (b==11)
				{
				  for (c=1; c<=25; c++)
					 {
						gotoxy(61-c,21); printf("�");
						delay(50);
						gotoxy(61-c,21); printf("�");
						gotoxy(49,21); printf("�");

					 }
				}
		  }
	  }
	  gotoxy(22,10); printf("�");
	  gotoxy(36,10); printf("�");
	  gotoxy(49,10); printf("�");
	  gotoxy(49,21); printf("�");
	  gotoxy(36,21); printf("�");

	}

	for (a=1; a<2; a++)
	 {
	  gotoxy(36,21-a); printf("�");
	  delay(50);
	  gotoxy(36,21-a); printf("�");
	  gotoxy(36,21); printf("�");
	 }

	for (a=1; a<=2; a++)
	  {
		 gotoxy(36,19+a);printf("�");
		 delay(100);
		 gotoxy(36,19+a); printf("�");
		 gotoxy(36,21); printf("�");
	  }
	 gotoxy(22,10); printf("�");
	 gotoxy(36,10); printf("�");
	 gotoxy(49,10); printf("�");
	 for (c=1; c<=24; c++)
	 {
	 gotoxy(36+c,21); printf("�");
	 delay(50);
	 gotoxy(36+c,21); printf("�");
	 gotoxy(36,21); printf("�");
	 gotoxy(49,21); printf("�");
	 if (c==24)
		{
		 for (b=1; b<=11; b++)
			{
			gotoxy(61,21-b); printf("�");
			delay(50);
			gotoxy(61,21-b); printf("�");
			gotoxy(61,21); printf("�");
			if (b==11)
			{
			for (a=1; a<=51; a++)
				  {
				  gotoxy(22,10); printf("�");
				  gotoxy(36,10); printf("�");
				  gotoxy(49,10); printf("�");
				  gotoxy(61-a,10); printf("�");
				  delay(50);
				  gotoxy(61-a,10); printf("�");
				  gotoxy(61,10); printf("�");

			}
	 }

			}
		}
	 }
/******************************cierre  del circuito**********************/
gotoxy(61,10); printf("�");
gotoxy(61,21); printf("�");
gotoxy(49,9); printf("�");
gotoxy(49,10); printf("�");
gotoxy(49,20); printf("�");
gotoxy(49,21); printf("�");
gotoxy(36,20); printf("�");
gotoxy(36,21); printf("�");
for (a=1; a<=11; a++)
	{
		gotoxy(49+a,10); printf("�");
	}
for (a=1; a<=10; a++)
	{
		gotoxy(61,10+a); printf("�");
	}
for (a=1; a<=11; a++)
	{
	  gotoxy(61-a,21); printf("�");
	}
for (a=1; a<=52; a++)
	{
	  gotoxy(9+a,10); printf("�");
	  delay(50);
	  gotoxy(9+a,10); printf("�");
	  gotoxy(61,10); printf("�");
	  if (a==52)
	  {
		 for (b=1; b<=11; b++)
			{
			gotoxy(61,10+b); printf("�");
			delay(50);
			gotoxy(61,10+b); printf("�");
			gotoxy(61,21); printf("�");
			if (b==11)
				{
				  for (c=1; c<=33; c++)
					 {
						gotoxy(61-c,21); printf("�");
						delay(50);
						gotoxy(61-c,21); printf("�");
						gotoxy(49,21); printf("�");

					 }
				}
		  }
	  }
	  gotoxy(22,10); printf("�");
	  gotoxy(36,10); printf("�");
	  gotoxy(49,10); printf("�");
	  gotoxy(49,21); printf("�");
	  gotoxy(36,21); printf("�");

	}

	 gotoxy(22,10); printf("�");
	 gotoxy(36,10); printf("�");
	 gotoxy(49,10); printf("�");
	 for (c=1; c<=33; c++)
	 {
	 gotoxy(27+c,21); printf("�");
	 delay(50);
	 gotoxy(27+c,21); printf("�");
	 gotoxy(36,21); printf("�");
	 gotoxy(49,21); printf("�");
	 if (c==33)
		{
		 for (b=1; b<=11; b++)
			{
			gotoxy(61,21-b); printf("�");
			delay(50);
			gotoxy(61,21-b); printf("�");
			gotoxy(61,21); printf("�");
			if (b==11)
			{
			for (a=1; a<=51; a++)
				  {
				  gotoxy(22,10); printf("�");
				  gotoxy(36,10); printf("�");
				  gotoxy(49,10); printf("�");
				  gotoxy(61-a,10); printf("�");
				  delay(50);
				  gotoxy(61-a,10); printf("�");
				  gotoxy(61,10); printf("�");

			}
	 }

			}
		}
	 }
	 } while(!kbhit());
	getch();
}
void cuadro(int x,int y)
	{
	gotoxy(x,y); printf("�");
	gotoxy(x,y+3); printf("�");
	gotoxy(x+6,y); printf("�");
	gotoxy(x+6,y+3); printf("�");

	 int a;

	for (a=x+1; a<x+6;a++)
	{
		gotoxy(a,y); printf("�");
		gotoxy(a,y+3); printf("�");
	}

	for (a=y+1; a<y+3;a++)
	{
		gotoxy(x,  a); printf("�");
		gotoxy(x+6,a); printf("�");
	}

	gotoxy(x+1,y+1);printf("   xp");
	gotoxy(x+1,y+2);printf("  win");


	  }
void rectangulo(int x,int y)
	{
	gotoxy(x,y); printf("�");
	gotoxy(x,y+2); printf("�");
	gotoxy(x+10,y); printf("�");
	gotoxy(x+10,y+2); printf("�");

	 int a;

	for (a=x+1; a<x+10;a++)
	{
		gotoxy(a,y); printf("�");
		gotoxy(a,y+2); printf("�");
	}

	for (a=y+1; a<y+2;a++)
	{
		gotoxy(x,  a); printf("�");
		gotoxy(x+10,a); printf("�");
	}
	gotoxy(x+8,y+1);printf("�");
	gotoxy(x+9,y+1);printf("o");
	gotoxy(x+1,y+1);printf("[���]");
	gotoxy(x+6,y+1);printf("[]");

	}
