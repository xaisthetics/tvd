#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int entry(void);
int main()
{
int cflag=0;
int wflag=0;
system("cls");
int ansv[3];
int anso[3];
int keyv[3]={2,1,4};
int keyo[3]={3,1,2};
int x=0;
int z;
while(x!=3)
{ //beginning of do while
system("color 3");
printf("\t\t\tWelcome to the Trivia game");
printf("\n\n\n\t\t\t\tMENU");
printf("\n\n\t1.\t\tTHE VAMPIRE DIAIRES");
printf("\n\n\t2.\t\tTHE ORIGINALS");
printf("\n\n\t3.\t\tQUIT");
printf("\n\nEnter your selection:");
scanf("%d",&x);
if(x<0||x>3)
{
printf("Invalid Response");
}
else
{
if (x==1)
	{//beginning of if 1
	entry();
	system("cls");
	int i;
	for (i=0;i<3;i++)
		{//beginning of for 1
			switch(i+1)
				{//beginning of switch 1
					case 1:
						printf("\n1.\tWHO IS THE FIRST LOVE OF ELENA?\n");
						printf("\n1.\tDamon Salvatore");
						printf("\n2.\tMatt Donovan");
						printf("\n3.\tStefan Salvatore");
						printf("\n4.\tElijah Mikaelson");
						printf("\nEnter Your Selection:");
						scanf("%d",&z);
						ansv[i]=z;
						system("cls");
						printf("Loading your next question");
						sleep(1);
						system("cls");
						break;

					case 2:
						printf("\n2.\tWHO IS THE WORLDS OLDEST VAMPIRE?\n");
						printf("\n1.\tMikael");
						printf("\n2.\tKlaus Mikaelson");
						printf("\n3.\tElijah Mikaelson");
						printf("\n4.\tFinn Mikaelson");
						printf("\nEnter Your Selection:");
						scanf("%d",&z);
						ansv[i]=z;
						system("cls");
						printf("Loading your next question");
						sleep(1);
						system("cls");
						break;
	
					case 3:
						printf("\n3.\tWHO IS THE MOST POWERFUL WITCH?");
						printf("\n1.\tEmily Bennett");
						printf("\n2.\tBonnie Bennett");
						printf("\n3.\tEsther Mikaelson");
						printf("\n4.\tQetsiyah");
						printf("\nEnter Your Selection:");
						scanf("%d",&z);
						ansv[i]=z;
						system("cls");
						break;
					}//ending of switch 1
			printf("\nThe %d Answer Is:",i+1);
				if (ansv[i]==keyv[i])
					{
						sleep(2);
						system("color a");
						printf("CORRECT\n");
						sleep(2);
						system("cls");
						system("color 3");
						cflag+=1;
					}
				else
					{
						sleep(2);
						system("color 4");
						printf("WRONG\n");
						sleep(2);
						system("cls");
						system("color 3");
						wflag+=1;
					}	
		}//ending of for 1
//printf("TOTAL NUMBER OF QUESTIONS ASKED: %d\nNO OF CORRECT ANSWERS: %d\nNO OF WRONG ANSWERS: %d",(cflag+wflag),cflag,wflag);
sleep(2);
system("cls");

}//ending for if 1
if (x==2)
{
	entry();
	system("cls");
	int i;
	for (i=0;i<3;i++)
	{
		switch(i+1)
		{
		case 1:
		printf("\n1.\tWHO TOOK OVER NEW ORLEANS AFTER KLAUS?");
		printf("\n1.\tCami O Connell");
		printf("\n2.\tDavina Claire");
		printf("\n3.\tMarcel Gerard");
		printf("\n4.\tVincent Griffith");
		printf("\nEnter Your Selection:");
		scanf("%d",&z);
		anso[i]=z;
		system("cls");
		printf("Loading your next question");
		sleep(1);
		system("cls");
		break;

		case 2:
		printf("\n2.\tWHO IS THE REGENT OF THE NINE COVENS?");
		printf("\n1.\tVINCENT GRIFFITH");
		printf("\n2.\tINADU");
		printf("\n3.\tDAVINA CLAIRE");
		printf("\n4.\tVAN NGUYEN");
		printf("\nEnter Your Selection:");
		scanf("%d",&z);
		anso[i]=z;
		system("cls");
		printf("Loading your next question");
		sleep(1);
		system("cls");
		break;
	
		case 3:
		printf("\n3.\tWHICH IS THE ONE WEAPON WHICH CAN TORTURE THE ORIGINALS OTHER THAN THE WHITE OAK?");
		printf("\n1.\tAscendian");
		printf("\n2.\tPapa Tunde's Blade");
		printf("\n3.\tWolfsBane");
		printf("\n4.\tVervain");
		printf("\nEnter Your Selection:");
		scanf("%d",&z);
		anso[i]=z;
		system("cls");
		printf("Loading your next question");
		sleep(2);
		break;
		}
		printf("\nThe %d Answer Is:\n",i+1);
				if (anso[i]==keyo[i])
					{
						sleep(2);
						system("color a");
						printf("CORRECT\n");
						sleep(2);
						system("cls");
						system("color 3");
						cflag+=1;
					}
				else
					{
						sleep(2);
						system("color 4");
						printf("WRONG\n");
						sleep(2);
						system("cls");
						system("color 3");
						wflag+=1;
					}
	}
printf("TOTAL NUMBER OF QUESTIONS ASKED: %d\nNO OF CORRECT ANSWERS: %d\nNO OF WRONG ANSWERS: %d",(cflag+wflag),cflag,wflag);
sleep(2);
system("cls");
}
if (x==3)
{
break;
}
}
}
}
int entry(void)
{
	system("cls");
	printf("READY TO ENTER THE QUIZ IN THREE SECONDS");
	int i;
	for (i=1;i<4;i++)
	{
		printf("\n%d",i);
		sleep(1);
		
	}
}