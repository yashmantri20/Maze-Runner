#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,mov=0;
	char arr[500];
	int x=75,y=425,c,k;
	initgraph(&gd,&gm,"c:\\turbo3\bgi");
	clrscr();
	//CIRCLE
	circle(100,200,15);

	while(1)
	{
	if(kbhit())
	{
		c=getch();
			if(c==77)
			{
				x+=5;
				mov++;
			}
			if(c==75)
			{
				x-=5;
				mov++;
			}
			if(c==72)
			{
				y-=5;
				mov++;
			}
			if(c==80)
			{
				y+=5;
				mov++;
			}
			if(c==27)
			{
			 break;
			}
		      cleardevice();
		      circle(x,y,15);
		      line(50,50,50,450);
		      line(50,50,450,50);
		      line(50,450,450,450);
		      line(450,50,450,400);
		      line(100,400,100,100);
		      line(100,100,400,100);
		      line(150,150,450,150);
		      line(100,200,400,200);
		      line(100,250,300,250);
		      line(150,450,150,300);
		      line(200,250,200,400);
		      line(250,450,250,300);
		      line(300,300,400,300);
		      line(300,250,300,400);
		      line(350,250,450,250);
		      line(400,350,450,350);
		      line(350,450,350,350);
		      line(400,450,400,400);
		      arc(550,125,180,0,50);
		      arc(550,100,0,180,50);
		      outtextxy(532,85,"MOVES");
		      sprintf(arr,"%d",mov);
		      outtextxy(545,120,arr);
		      if(x==100&&y<=400)

			{
			if(x==100&&y>=100)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}

		       if(x==50&&y<=450)

			{
			if(x==50&&y>=50)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x==150&&y<=450)

			{
			if(x==150&&y>=300)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x==200&&y<=400)

			{
			if(x==200&&y>=250)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x==250&&y<=450)

			{
			if(x==250&&y>=300)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x==300&&y<=400)

			{
			if(x==300&&y>=250)
			{
			       outtextxy(520,250,"GAME OVER");
			       delay(50);
			       for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
			       x=75;
				y=425;
				mov=-1;
			}
			}
			if(x==350&&y<=450)

			{
			if(x==350&&y>=350)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x==400&&y<=450)

			{
			if(x==400&&y>=400)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x==450&&y<=400)

			{
			if(x==450&&y>=50)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x>=50&&y==50)

			{
			if(x<=450&&y==50)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x>=100&&y==100)

			{
			if(x<=400&&y>=100)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x>=150&&y==150)

			{
			if(x<=450&&y>=150)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x>=100&&y==200)

			{
			if(x<=400&&y==200)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x>=100&&y==250)

			{
			if(x<=300&&y==250)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x>=350&&y==250)

			{
			if(x<=450&&y==250)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x>=300&&y==300)

			{
			if(x<=400&&y==300)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x>=400&&y==350)

			{
			if(x<=450&&y==350)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				x=75;
				y=425;
				mov=-1;
			}
			}
			if(x>=50&&y==450)

			{
			if(x<=450&&y==450)
			{
				outtextxy(520,250,"GAME OVER");
				delay(50);
				x=75;
				for(k=0;k<800;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();
				y=425;
				mov=-1;
			}
			}
			if(x==450&&y<=450)

			{
			if(x==450&&y>=400)
			{
				outtextxy(520,250,"YOU WON");
				delay(1000);

				for(k=150;k<550;k++)
				{
				sound(k);
				delay(10);
				}
				nosound();


				x=75;
				y=425;
				mov=-1;
			}
			}
	}
	}

	closegraph();

}
