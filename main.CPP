#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>
int level,marks;
char k='k';
	//Class For Login, Signup;
class id
{
	private:
			char name[100];
			char passwordd[20];
			int age;
			char loginpassword[20];
	public:
			void get()
			{
				cout<<"Enter Name:";
				gets(name);
				cout<<"Enter Password:";
				gets(passwordd);
				cout<<"Enter Age:";
				cin>>age;
			}
			void getl()
			{
				cout<<"Enter Name:";
				gets(name);
				cout<<"Enter Password:";
				for(int p=0;p<20;p++)
				{
					password[p]=getch();
					if(password[p]=='\r')
					break;
					cout<<"*";
				}
			}
			void see()
			{
				puts(name);
				puts(passwordd);
				cout<<age;
			}
			char* getname
			{
				return name;
			}
			int* getpassword
			{
				return passwordd;
			}
}admin_id,guest_id,temp_id;

		//function for time
void time(int sec)
{
int i;
cout<<"\n\n\n\tRead fast !\n\n\n\t\t";
cout<<"Time Left: ";
for(i=sec;i>=0;i--)
{
	cout<<i;
	delay(1000);
	cout<<"\b";
}
}

			//Function for Login;
void login()
{
login_id.getl();
file.open();
if(!file)
{
	cout<<"Error ! Cannot Login !";
	exit(0);
}
int con=0
while(!file.eof())
{
	file.read((char*)&temp,sizeof(temp));
	if(strcmpi(login_id.getname(),temp_id.getname())==0)
	{
		if(strcmpi(login_id.getpassword(),temp_id.getpasswordd())==0)
		{
			 con=1;
		}
	}
}
if(con==1)
{
	cout<<"Login Done";
}
else if(con==0)
{
	char yes;
	cout<<"Login Not Possible,\n\tDO you Want To Signup(Y/N):";
	cin>>yes;
	if(strcmpi(yes,'y'))
	{
		clrscr();
		signup();
	}
}
else
	exit(0);
}
		//Function for Signup
void signup()
{
file.open();
if(!file)
{
	cout<<"Error ! Cannot SignUp !";
	exit(0);
}
ol:
signup_up.get();
file.read((char*)&temp_id,size0f(temp_id));
if(strcmpi(signup_id.getname(),temp_id.getname())==0)
{
	file.write((char*)&sign_up,sizeof(sign_up));
	cout<<"Thank you for Signing Up";
}
else
{
	cout<<"Name Already Exists, Signup Not Possible\n\t Try Again.";
	goto ol;
}
file.close()
}

		//Function to Check for login or Signup
void start(int response)
{
if(response==1)
	login();
else if(response==2)
	signup();
else
	cout<<"Enter a Correct choice";
}
// Function to compare the Correct ans with the ans given by user//
int compare(int a,int b)
{
if(a==b)
{
	  marks=marks+10;
	  level++;
	  cout<<"\nCongratulations you are correct";
	  cout<<"\nYou enter to level "<<level;
	  cout<<"\nYour score "<<marks;
}
else
{
	cout<<"You are wrong\nYou lose !!!";
}
return 0;
}

		//Function for level 1
int quesa(int x)
{
clrscr();
int ans1;
if(x>50)
{
	cout<<"\n\n\n\tYour 1st Question is :";
	cout<<"\n\tWho is the Prime Minister Of India?";
	cout<<"\n\t1.Pranab Mukherjee.";
	cout<<"\n\t2.Anandiben Patel.";
	cout<<"\n\t3.Amit Shah.";
	cout<<"\n\t4.Narendra Modi.";
	time(9);
	clrscr();
	cout<<"\n\t Enter your Answer:";
	cin>>ans1;
	compare(4,ans1);
	cout<<"\nThe correct answer is Narendra modi";
}
else
{
	cout<<"\n\n\n\tYour 1st Question is :";
	cout<<"\n\t\tWho is the Chief Minister Of Gujarat?";
	cout<<"\n\t1.Pranab Mukherjee.";
	cout<<"\n\t2.Amit Shah.";
	cout<<"\n\t3.Narendra Modi.";
	cout<<"\n\t4.Anandiben Patel.";
	time(9);
	clrscr();
	cout<<"\n\tEnter your Answer:";
	cin>>ans1;
	compare(4,ans1);
	cout<<"\nThe correct answer is Anandiben Patel.";
}
return 1;
}
			//Function for level 2;
int quesb(int re)
{
clrscr();
int ans2;
if(re>150)
{
	cout<<"\n\n\n\t\tYour 2nd Question is :";
	cout<<"\n\n\t\tWho is the CEO of Pepsi Co.?";
	cout<<"\n\t1.Sunder Pichai.";
	cout<<"\n\t2.Indira Nui.";
	cout<<"\n\t3.Chanda Kocchar.";
	cout<<"\n\t4.Ratan Tata.";
	time(9);
	clrscr();
	cout<<"\n\t Enter your Answer:";
	cin>>ans2;
	compare(2,ans2);
	cout<<"\nThe correct answer is Indira Nui";
}
else
{
	cout<<"\n\n\n\t\tYour 2nd Question is :";
	cout<<"\n\n\n\t\tWho is the CEO of Google Co.?";
	cout<<"\n\t1.Sunder Pichai.";
	cout<<"\n\t2.Indira Nui.";
	cout<<"\n\t3.Chanda Kocchar.";
	cout<<"\n\t4.Ratan Tata.";
	time(9);
	clrscr();
	cout<<"\n\t Enter your Answer:";
	cin>>ans2;
	compare(1,ans2);
	cout<<"\nThe correct answer is Sunder Pichai ";
}
return 1;
}
			//Function for level 3
int quesc(int y)
{
clrscr();
int ans1;
if(y>150)
{
	cout<<"\n\n\n\tYour 3rd Question is :";
	cout<<"\n\tWho the Ceo of Microsoft?";
	cout<<"\n\t1.Bill Gates.";
	cout<<"\n\t2.Satya Nadela.";
	cout<<"\n\t3.Bill Clinton.";
	cout<<"\n\t4.Mark Zukerburg.";
	time(9);
	clrscr();
	cout<<"\n\t Enter your Answer:";
	cin>>ans1;
	compare(2,ans1);
	cout<<"\nThe correct answer is Satya Nadela";
}
else
{
	cout<<"\n\n\n\tYour 3rd Question is :";
	cout<<"\n\t\tWhat is the Currency of Bangladesh?";
	cout<<"\n\t1.Dhaka.";
	cout<<"\n\t2.Taka.";
	cout<<"\n\t3.Manat.";
	cout<<"\n\t4,Peso.";
	time(9);
	clrscr();
	cout<<"\n\tEnter your Answer:";
	cin>>ans1;
	compare(2,ans1);
	cout<<"\nThe correct answer is Taka .";
}
return 1;
}
			//Function for level 4
int quesd(int q)
{
clrscr();
int ans1;
if(q>150)
{
	cout<<"\n\n\n\tYour 4th Question is :";
	cout<<"\n\tHow Many Squares Can Be formed by the following square?";
	cout<<"\n\t __________";
	cout<<"\n\t |__|__|__|";
	cout<<"\n\t |__|__|__|";
	cout<<"\n\t |__|__|__|";
	cout<<"\n\t1.Is it 6.";
	cout<<"\n\t2.Is it 10.";
	cout<<"\n\t3.is it 13.";
	cout<<"\n\t4.Is it 14.";
	time(9);
	clrscr();
	cout<<"\n\t Enter your Answer:";
	cin>>ans1;
	compare(4,ans1);
cout<<"\nThe correct answer is 14";
}
else
{
	cout<<"\n\n\n\tYour 4th Question is :";
	cout<<"\n\t\tHow many Hashtags are there ?";
	cout<<"\n\t # # # #";
	cout<<"\n\t  # # # #";
	cout<<"\n\t   # # # #";
	cout<<"\n\n\t1.10.";
	cout<<"\n\t2.09.";
	cout<<"\n\t3.11.";
	cout<<"\n\t4.12.";
	time(9);
	clrscr();
	cout<<"\n\tEnter your Answer:";
	cin>>ans1;
	compare(12,ans1);
	cout<<"\nThe correct answer is 12.";
}
return 1;
}
			//Hangman code
void hangman(int y)
{
switch(y+1)
{
case 1:
gotoxy(32,7);
textbackground(BLACK);
textcolor(GREEN);
cprintf("***********");
gotoxy(32,8);
cprintf("   |     * ");
gotoxy(32,9);
cprintf("   -     * ");
gotoxy(32,10);
cprintf(" |   |   * ");
gotoxy(32,11);
cprintf("   -     * ");
gotoxy(32,12);
cprintf("   |     * ");
gotoxy(32,13);
cprintf(" -----   * ");
gotoxy(32,14);
cprintf("   |     * ");
gotoxy(32,15);
cprintf("   |     * ");
gotoxy(32,16);
cprintf("  | |    * ");
gotoxy(32,17);
cprintf(" |   |   * ");
	break;
case 2:
gotoxy(32,7);
textbackground(BLACK);
textcolor(CYAN);
cprintf("***********");
gotoxy(32,8);
cprintf("   |     * ");
gotoxy(32,9);
cprintf("   -     * ");
gotoxy(32,10);
cprintf(" |   |   * ");
gotoxy(32,11);
cprintf("   -     * ");
gotoxy(32,12);
cprintf("   |     * ");
gotoxy(32,13);
cprintf(" ---     * ");
gotoxy(32,14);
cprintf("   |     * ");
gotoxy(32,15);
cprintf("   |     * ");
gotoxy(32,16);
cprintf("  | |    * ");
gotoxy(32,17);
cprintf(" |   |   * ");
	break;
case 3:
gotoxy(32,7);
textbackground(BLACK);
textcolor(BROWN);
cprintf("***********");
gotoxy(32,8);
cprintf("   |     * ");
gotoxy(32,9);
cprintf("   -     * ");
gotoxy(32,10);
cprintf(" |   |   * ");
gotoxy(32,11);
cprintf("   -     * ");
gotoxy(32,12);
cprintf("   |     * ");
gotoxy(32,13);
cprintf("   -     * ");
gotoxy(32,14);
cprintf("   |     * ");
gotoxy(32,15);
cprintf("   |     * ");
gotoxy(32,16);
cprintf("  | |    * ");
gotoxy(32,17);
cprintf(" |   |   * ");
	break;
case 4:
gotoxy(32,7);
textbackground(BLACK);
textcolor(LIGHTBLUE);
cprintf("***********");
gotoxy(32,8);
cprintf("   |     * ");
gotoxy(32,9);
cprintf("   -     * ");
gotoxy(32,10);
cprintf(" |   |   * ");
gotoxy(32,11);
cprintf("   -     * ");
gotoxy(32,12);
cprintf("   |     * ");
gotoxy(32,13);
cprintf("   -     * ");
gotoxy(32,14);
cprintf("   |     * ");
gotoxy(32,15);
cprintf("   |     * ");
gotoxy(32,16);
cprintf("  |      * ");
gotoxy(32,17);
cprintf(" |       * ");
	break;
case 5:
gotoxy(32,7);
textbackground(BLACK);
textcolor(YELLOW);
cprintf("***********");
gotoxy(32,8);
cprintf("   |     * ");
gotoxy(32,9);
cprintf("   -     * ");
gotoxy(32,10);
cprintf(" |   |   * ");
gotoxy(32,11);
cprintf("   -     * ");
gotoxy(32,12);
cprintf("   |     * ");
gotoxy(32,13);
cprintf("   -     * ");
gotoxy(32,14);
cprintf("   |     * ");
gotoxy(32,15);
cprintf("   |     * ");
gotoxy(32,16);
cprintf("         * ");
gotoxy(32,17);
cprintf("         * ");
	break;
case 6:
gotoxy(32,7);
textbackground(BLACK);
textcolor(RED);
cprintf("***********");
gotoxy(32,8);
cprintf("   |     * ");
gotoxy(32,9);
cprintf("   -     * ");
gotoxy(32,10);
cprintf(" |   |   * ");
gotoxy(32,11);
cprintf("   -     * ");
gotoxy(32,12);
cprintf("         * ");
gotoxy(32,13);
cprintf("         * ");
gotoxy(32,14);
cprintf("         * ");
gotoxy(32,15);
cprintf("         * ");
gotoxy(32,16);
cprintf("         * ");
gotoxy(32,17);
cprintf("         * ");
	break;
case 7:
textbackground(BLACK);
textcolor(MAGENTA);
gotoxy(32,7);
cprintf("***********");
gotoxy(32,8);
cprintf("   |     * ");
gotoxy(32,9);
cprintf("         * ");
gotoxy(32,10);
cprintf("         * ");
gotoxy(32,11);
cprintf("         * ");
gotoxy(32,12);
cprintf("         * ");
gotoxy(32,13);
cprintf("         * ");
gotoxy(32,14);
cprintf("         * ");
gotoxy(32,15);
cprintf("         * ");
gotoxy(32,16);
cprintf("         * ");
gotoxy(32,17);
cprintf("         * ");
gotoxy(35,24);
textbackground(BLACK);
textcolor(RED);
cprintf("Game Over!!!");
gotoxy(35,25);
cprintf("You Lose");
getch();
exit(0);
	break;
}
}
			//Function for Hangman level
void lvl1()
{
int e=0;
int f=0;
int g=0;
char d[20];
gotoxy(35,19);
char word1[11][20]={"Bhutan","India","SouthAfrica","USA","China","Nepal","Denmark","Kuwait","Iraq","UK","Liberia"};
int n=random(10);
textbackground(BLACK);
textcolor(WHITE);
int b=strlen(word1[n]);			//for length of word
gotoxy(35,20);
for(int i=0;i<b;i++)
	cprintf("* ");
char a;
int c=0;
int u;
gotoxy(25,21);
textbackground(BLACK);
textcolor(CYAN);
cprintf("General Hint: It is a country name");
do
{
if(k=='Y'||k=='y')
{
switch(n+1)
{
case 1: gotoxy(25,21);
		cprintf("Hint:Country with second highest mountain");
		break;
case 2: gotoxy(25,21);
		cprintf("Hint:Current second largest smartphone market");
		break;
case 3: gotoxy(25,21);
		cprintf("Hint:Birth place of Nelson Mandella");
		break;
case 4: gotoxy(25,21);
		cprintf("Hint:Country where Times square is present");
		break;
case 5: gotoxy(25,21);
		cprintf("Hint:Country where Pandas population is most");
		break;
case 6: gotoxy(25,21);
		cprintf("Hint:Country who got its 2nd democracy in 2005");
		break;
case 7: gotoxy(25,21);
		cprintf("Hint:Currently the most corruption free country");
		break;
case 8: gotoxy(25,21);
		cprintf("Hint:Country with price of oil cheaper than water");
		break;
case 9: gotoxy(25,21);
		cprintf("Hint:Country where Al Asad was born");
		break;
case 10: gotoxy(25,21);
		cprintf("Hint:Country where Kohinoor is");
		break;
case 11: gotoxy(25,21);
		cprintf("Hint:Ebola was widespread is this country");
		break;
}
}
u=1;
f++;
gotoxy(29,22);
textbackground(BLACK);
textcolor(CYAN);
cprintf("Enter the guessed letter :   \b\b\b");
cin>>a;
d[c]=a;
for(int h=0;h<c;h++)
{
if(d[h]==a)
	u=0;
}
if(u!=0)
{
for(int j=0;j<b;j++)
{
if((word1[n][j]==a)||(word1[n][j]==tolower(a))||(word1[n][j]==toupper(a)))
	{
	gotoxy(35+(2*j),20);
	cout<<a;
	f--;
	e++;
	}
}
hangman(f);
}
else
{
	gotoxy(33,24);
	cprintf("Already entered");
	delay(400);
	gotoxy(33,24);
	cprintf("                  ");
	f--;
}
c++;
if(g==0&&e!=b&&f>1)
{
	gotoxy(29,23);
	cprintf("Do you need a hint(Y or N):  \b\b");
	cin>>k;
	cout<<"\b\b";
	if(k=='y' ||k=='Y')
	{
		gotoxy(29,23);
		cout<<"                                ";
		g++;
	}
}
}while(e!=b);
}
			//Main Function
void main()
{
clrscr();
fstream file;
file("D:/bhargav/log.txt",ios::in|ios::out|ios::binary);
textbackground(BLACK);
textcolor(BROWN);
int choice;
cout<<"\n\n\n \t\t\t        Hillwoods School";
cout<<"\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"\t%%      %%      ";
cout<<"\n\t%%      %% %%%%%%% %%      %%%%%% %%%%%% %%%%%%%%%% %%%%%%%";
cout<<"\n\t%%      %% %%      %%      %%     %%  %% %%  %%  %% %%       ";
cout<<"\n\t%%  %%  %% %%%%%   %%      %%     %%  %% %%  %%  %% %%%%%      ";
cout<<"\n\t%%  %%  %% %%      %%      %%     %%  %% %%      %% %%           ";
cout<<"\n\t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%% %%%%%% %%      %% %%%%%%%     ";
cout<<"\n\n\t\t\t        $$$$$$$$  $$$$$        ";
cout<<"\n\t\t\t           $$     $   $      ";
cout<<"\n\t\t\t           $$     $$$$$    ";
cout<<"\n\n\n\t\t\t The world of CBook_\"Connecting people\"";
delay(1000);
cout<<"\n\n\tPress Any Key to continue";
getch();
clrscr();
textbackground(BLACK);
textcolor(CYAN);
cout<<"\n\n\tPress Any key to Continue";
getch();
int reply;
cout<<"\n\n\t\tPress 1.   To Login:";
cout<<"\n\t\t\tOr\n\t\t Press 2.   To Signup:";
cin>>reply;
clrscr();
start(reply);
clrscr();
textbackground(BLACK);
textcolor(BROWN);
cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
cout<<"\nWhat do you want to do from our services:";
delay(1000);
do
{
	cout<<"\n--------------------------------------------------------------";
	cout<<"\n\n\nPress 1. For Participating in Quiz";
	cout<<"\n2. For Playing Hangman";
	cout<<"\n3. To exit:";
	cout<<"\n\n\n--------------------------------------------------------------";
	cout<<"\nEnter your Choice:"<<endl;
	delay(1000);
	cin>>choice;
	switch(choice)
	{
		case 1:	clrscr();
			cout<<"\nPress any key to start quiz";
			getch();
			clrscr();
			level=1;
			textbackground(BLACK);
			textcolor(YELLOW);
			cout<<"\n\n\n";
			cout<<"\n\t\t\t##           @@@@      ";
			cout<<"\n\t\t\t##          @@ @@    ";
			cout<<"\n\t\t\t##             @@  ";
			cout<<"\n\t\t\t##             @@  ";
			cout<<"\n\t\t\t#####  %%      @@  ";
			cout<<"\n\t\t\t#####  %%    @@@@@@      ";
			int ran;
			delay(3000);
			ran=random(500);
			quesa(ran);
			if(level==2)
			{
				cout<<"\nEnter Any Key to Enter Level 2";
				getch();
				clrscr();
				textbackground(BLACK);
				textcolor(LIGHTBLUE);
				cout<<"\n\n\n";
				cout<<"\n\t\t\t##           @@@@@@      ";
				cout<<"\n\t\t\t##          @@   @@ ";
				cout<<"\n\t\t\t##              @@  ";
				cout<<"\n\t\t\t##             @@  ";
				cout<<"\n\t\t\t#####  %%     @@  ";
				cout<<"\n\t\t\t#####  %%    @@@@@@      ";
				delay(3000);
				ran=random(300);
				quesb(ran);
			}
			if(level==3)
			{
				cout<<"\nEnter Any Key to Enter Level 3";
				getch();
				clrscr();
				textbackground(BLACK);
				textcolor(RED);
				cout<<"\n\n\n";
				cout<<"\n\t\t\t##           @@@@@@      ";
				cout<<"\n\t\t\t##               @@ ";
				cout<<"\n\t\t\t##            @@@@@  ";
				cout<<"\n\t\t\t##            @@@@@  ";
				cout<<"\n\t\t\t#####  %%        @@  ";
				cout<<"\n\t\t\t#####  %%    @@@@@@      ";
				delay(3000);
				ran=random(300);
				quesc(ran);
			}
			if(level==4)
			{
				cout<<"\nEnter Any Key to Enter Level 4";
				getch();
				clrscr();
				textbackground(WHITE);
				textcolor(MAGENTA+BLINK);
				cout<<"\n\n\n";
				cout<<"\n\t\t\t##           ##  ";
				cout<<"\n\t\t\t##          ##  ";
				cout<<"\n\t\t\t##         ##  ##";
				cout<<"\n\t\t\t##        ####### ";
				cout<<"\n\t\t\t#####  %%      ##  ";
				cout<<"\n\t\t\t#####  %%      ##  ";
				delay(3000);
				ran=random(300);
				quesd(ran);
			}
			else
			{
				cout<<"\nGame over";
			}
			marks=0;
			level=1;
			break;
		case 2:     clrscr();
			int a,b,c,d,e,f,g=0,h,i,j;
			gotoxy(37,0);
			cprintf("Welcome to Hangman..");
			void hangman(int );
			void lvl1();
			hangman(g);
			lvl1();
			gotoxy(29,23);
			cprintf("Congragulations!!! You win!      ");
			gotoxy(29,24);
			cprintf("You nailed it!");
			gotoxy(25,25);
			if(k=='n'||k=='N'||k=='k')
				 cprintf("Without an Hint?! You are one hell of Genius");
			break;
	}
}while (choice!=3);
}


/*
			//Function for Password
void pass(int c)
{
int r=0;
cout<<"\n\tEnter Password";
for(int p=0;p<20;p++)
{
	password[p]=getch();
	if(password[p]=='\r')
		break;
	cout<<"*";
}
if(r==3)
{
	cout<<"\n\tYou Entered Wrong Password";
	cout<<"\n\tTry Next time";
	delay(2000);
	exit(0);
}
if(c==1)
{
	if(strcmp(loginpass,password)+13==0)
	{	cout<<"\n\tLogin successful !";
		delay(1000);
	}
	else
	{
		cout<<"\n\t!! Wrong Password !!!";
		r++;
		goto r;
	}
}
}
*/