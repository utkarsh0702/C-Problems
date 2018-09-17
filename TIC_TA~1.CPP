#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>


char squ[10]={'0','1','2','3','4','5','6','7','8','9'};

//Prototype of functions
void board_design();
int win();

//driver function
void main()
{ clrscr();
  char n1[30], n2[30],player[30],mark;
  int num=1,no,x;
  cout<<"\n\n\n\t\t\t\tEnter the name of the first player:";
  gets(n1);
  cout<<"\nEnter the name of the second player:";
  gets(n2);
  clrscr();

  do{
     //board design function called
	  board_design();

	 num = ((num%2)!=0)? 1:2;   //logical operation to chance the turn
	 if(num==1){
		 strcpy(player,n1);
	 }
	 else{
		 strcpy(player,n2);
	 }

	 cout<<"Player "<<player<<", Enter the number: ";
	 cin>>no;
	 mark= (num==1)? 'X' : 'O';

	 if (no == 1 && squ[1] == '1')
	    squ[1] = mark;

		else if (no == 2 && squ[2] == '2')
			squ[2] = mark;

		else if (no == 3 && squ[3] == '3')
			squ[3] = mark;

		else if (no == 4 && squ[4] == '4')
			squ[4] = mark;

		else if (no == 5 && squ[5] == '5')
			squ[5] = mark;

		else if (no == 6 && squ[6] == '6')
			squ[6] = mark;

		else if (no == 7 && squ[7] == '7')
			squ[7] = mark;

		else if (no == 8 && squ[8] == '8')
			squ[8] = mark;

		else if (no == 9 && squ[9] == '9')
			squ[9] = mark;

		else
		{
			cout<<"Invalid move ";
			num--;
			cin.ignore();
			cin.get();
		}
     x= win();

	num++;

  }while(x!=1);

  board_design();

  cout<<"\n\t\t "<<player<<" Wins.............";
  getch();
}

//function to check the winning player
int win()
{
	if (squ[1] == squ[2] && squ[2] == squ[3])
		return 1;

	else if (squ[4] == squ[5] && squ[5] == squ[6])
		return 1;

	else if (squ[7] == squ[8] && squ[8] == squ[9])
		return 1;

	else if (squ[1] == squ[4] && squ[4] == squ[7])
		return 1;

	else if (squ[2] == squ[5] && squ[5] == squ[8])
		return 1;

	else if (squ[3] == squ[6] && squ[6] == squ[9])
		return 1;

	else if (squ[1] == squ[5] && squ[5] == squ[9])
		return 1;

	else if (squ[3] == squ[5] && squ[5] == squ[7])
		return 1;

	else
		return 0;
}

// function to design tic tak toe board
void board_design()
{
  int gd= DETECT, gm;
  int maxx,maxy;
  initgraph(&gd, &gm, "C:\\TC\\BGI");
  maxx= getmaxx();
  maxy= getmaxy();

  line((maxx/2)-50,(maxy/2)-150,(maxx/2)-50,(maxy/2));
  line((maxx/2),(maxy/2)-150,(maxx/2),(maxy/2));
  line((maxx/2)-100,(maxy/2)-50,(maxx/2)+50,(maxy/2)-50);
  line((maxx/2)-100,(maxy/2)-100,(maxx/2)+50,(maxy/2)-100);

  outtextxy((maxx/2)-75, (maxy/2)-125, (char*)squ[1]);
  outtextxy((maxx/2)-25, (maxy/2)-125, (char*)squ[2]);
  outtextxy((maxx/2)+25, (maxy/2)-125, (char*)squ[3]);
  outtextxy((maxx/2)-75, (maxy/2)-75, (char*)squ[4]);
  outtextxy((maxx/2)-25, (maxy/2)-75, (char*)squ[5]);
  outtextxy((maxx/2)+25, (maxy/2)-75, (char*)squ[6]);
  outtextxy((maxx/2)-75, (maxy/2)-25, (char*)squ[7]);
  outtextxy((maxx/2)-25, (maxy/2)-25, (char*)squ[8]);
  outtextxy((maxx/2)+25, (maxy/2)-25, (char*)squ[9]);

  closegraph();

}

