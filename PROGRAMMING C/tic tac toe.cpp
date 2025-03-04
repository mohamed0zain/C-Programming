#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};

void gameName()
{
	printf("\n\t\t\tTic Tac Toe Game:  \n ");
}

void show()
{
	printf("\n\n\t\t\t---|---|---\n");
	printf("\t\t\t %c | %C | %c \n",a[0],a[1],a[2]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
	printf("\t\t\t---|---|---\n");
}

void inputSymbol()
{
	printf("\nplayer 1 symbol	:X:");
	printf("\nplayer 2 symbol	:O:");
}

void start()
{
	char pa;
	printf("\nwho will start the game: player 1 or player 2\n");
	scanf("%c",&pa);
}

void play()
{
	char p,s;
	printf("Enter the position and symbol for the player:\n");
	fflush(stdin);
	scanf("%c",&p);
	fflush(stdin);
	scanf("%c",&s);
	check(p,s);
}

void check(char P, char S)
{
	int i;
	for (i=0;i<=8;i++)
	{
		if(a[i]==P)
			a[i]=S;
	}
}

int end()
{
	if((a[0]=='X'&&a[1]=='X'&&a[2]=='X') || (a[0]=='X'&&a[3]=='X'&&a[6]=='X') || (a[0]=='X'&&a[4]=='X'&&a[8]=='X')
		||(a[1]=='X'&&a[4]=='X'&&a[7]=='X')||(a[2]=='X'&&a[5]=='X'&&a[8]=='X')||(a[3]=='X'&&a[4]=='X'&&a[5]=='X')
		||(a[2]=='X'&&a[4]=='X'&&a[6]=='X')||(a[6]=='X'&&a[7]=='X'&&a[8]=='X'))
		return(100);
	else if((a[0]=='O'&&a[1]=='O'&&a[2]=='O') || (a[0]=='O'&&a[3]=='O'&&a[6]=='O') || (a[0]=='O'&&a[4]=='O'&&a[8]=='O')
			||(a[1]=='O'&&a[4]=='O'&&a[7]=='O')||(a[2]=='O'&&a[5]=='O'&&a[8]=='O')||(a[3]=='O'&&a[4]=='O'&&a[5]=='O')||
			(a[2]=='O'&&a[4]=='O'&&a[6]=='O')||	(a[6]=='O'&&a[7]=='O'&&a[8]=='O'))
			return(200);
	else if((a[0]=='X' || a[0]=='O') && (a[1]=='X' || a[1]=='O') && (a[2]=='X' || a[2]=='O') &&
			(a[3]=='X' || a[3]=='O') && (a[4]=='X' || a[4]=='O') && (a[5]=='X' || a[5]=='O') &&
			(a[6]=='X' || a[6]=='O') && (a[7]=='X' || a[7]=='O') && (a[8]=='X' || a[8]=='O'))
		return(300);
}

int main()
{
	int k;
	gameName();
	start();
	play();
	
	label: system("cls");
	show();
	play();
	k=end();
	system("cls");
	show();
	if(k==100)
		printf("\nplayer 1 won:");
	else if(k==200)
		printf("\nplayer 2 won:");
	else if(k==300)
		printf("\nThe match is tie");
	else
		goto label;
	
	getch();			
}
