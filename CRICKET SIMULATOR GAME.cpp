#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h> 
#include<time.h>

using namespace std;

class player{
public: char name[25];
	    int age;
   	    char role[15];
   	    int runs;
   	    int hs;
   	    int wks;
 	    void player_disp();
        void player_disp2();             
};

void player::player_disp()
{
cout<<"Name : "<<name<<"\n";
cout<<"Age : "<<age<<"\n";
cout<<"Role : "<<role<<"\n";
cout<<"Runs : "<<runs<<"\n";
cout<<"High Score : "<<hs<<"\n";
cout<<"Wickets : "<<wks<<"\n";	
}

void player::player_disp2()
{
cout<<"Name : "<<name<<"\n";
cout<<"Role : "<<role<<"\n";
}

class team{
public:
        char team_name[30];
	player team_players[6];
        char team_owner[40];
        char team_jerseycolor[15];
        char team_coach[25];
        char team_captain[25];
        char team_venue[40];	
        void team_disp();		
};

void team::team_disp()
{
cout<<team_name<<'\n';
cout<<"Team owner : "<<team_owner<<'\n';
cout<<"Team jersey colour : "<<team_jerseycolor<<'\n';
cout<<"Team coach : "<<team_coach<<'\n';
cout<<"Team Captain : "<<team_captain<<'\n';
cout<<"Team venue : "<<team_venue<<'\n';
cout<<"\nTeam Players : \n\n";
for(int i=0;i<6;i++)
{		
cout<<"Player No. "<<i+1<<"\n";
team_players[i].player_disp2();
}

cout<<"----------------------------------------------------"<<"\n\n";
}
player k[31];
team A,B,C,D,E,X,Y,F[5];
int x,y,a,b,flag1=0,flag2=5,score[6];

class ball{
public:
	player bowler;   
	player batsman;
	int run;
}z[5];

void teaminp()
{
	player k[31],a[6],b[6],c[6],d[6],e[6];

{
ifstream f;
f.open("Players.txt",ios::binary);

f.read((char*)&k,sizeof(k));

for(int i=0;i<31;i++)
{
 if(i<6)
 {
 	a[i]=k[i];
 }	
 else if(i<12)
 {
 	b[i-6]=k[i]; 	
 }
 else if(i<18)
 {
 	c[i-12]=k[i]; 	
 }
 else if(i<24)
 {
 	d[i-18]=k[i]; 	
 }
 else if(i<30)
 {
 	e[i-24]=k[i]; 	
 }
}
}

team A,B,C,D,E;

{
strcpy(A.team_name,"Chennai Royals");
for(int x=0;x<6;x++)
{
A.team_players[x]=a[x];
}
strcpy(A.team_owner,"Abc Cricket Company Ltd.");
strcpy(A.team_jerseycolor,"Red");
strcpy(A.team_coach,"Don Bradman");
strcpy(A.team_captain,"M.S.Dhoni");
strcpy(A.team_venue,"M.A.Chidambram Stadium Chennai");

strcpy(B.team_name,"Mumbai Daredevils");
for(int x=0;x<6;x++)
{
B.team_players[x]=b[x];
}
strcpy(B.team_owner,"Def Cricket Company Ltd.");
strcpy(B.team_jerseycolor,"Blue");
strcpy(B.team_coach,"Sachin Tendulkar");
strcpy(B.team_captain,"Steven Smith");
strcpy(B.team_venue,"Rajiv Gandhi International Stadium Mumbai");

strcpy(C.team_name,"Rajasthan Rockers");
for(int x=0;x<6;x++)
{
C.team_players[x]=c[x];
}
strcpy(C.team_owner,"Ghi Cricket Company Ltd.");
strcpy(C.team_jerseycolor,"Orange");
strcpy(C.team_coach,"Kumar Sangankara");
strcpy(C.team_captain,"Quinton de Kock");
strcpy(C.team_venue,"Chatrapathi Shivaji Stadium Jaipur");

strcpy(D.team_name,"Ultimate Hyderabad");
for(int x=0;x<6;x++)
{
D.team_players[x]=d[x];
}
strcpy(D.team_owner,"Jkl Cricket Company Ltd.");
strcpy(D.team_jerseycolor,"Yellow");
strcpy(D.team_coach,"Brian Laura");
strcpy(D.team_captain,"Kane Williamson");
strcpy(D.team_venue,"N.T.Rama Rao Stadium Hyderabad");

strcpy(E.team_name,"Godlike Gujarat");
for(int x=0;x<6;x++)
{
E.team_players[x]=e[x];
}
strcpy(E.team_owner,"Mno Cricket Company Ltd.");
strcpy(E.team_jerseycolor,"Green");
strcpy(E.team_coach,"Micheal Hussey");
strcpy(E.team_captain,"Brendon Mccullum");
strcpy(E.team_venue,"Narendra Modi Stadium Gandhinagar");
}

ofstream f1;
f1.open("Teams.txt",ios::binary);
f1.write((char*)&A, sizeof(A));//writing into file
f1.write((char*)&B, sizeof(B));
f1.write((char*)&C, sizeof(C));
f1.write((char*)&D, sizeof(D));
f1.write((char*)&E, sizeof(E));
f1.close();
}

void playerinp()
{
	player A[6],B[6],C[6],D[6],E[6];
{//Player stats input
strcpy(A[0].name,"Rohit Sharma");
A[0].age=32;
strcpy(A[0].role,"Batsman");
A[0].runs=4898;
A[0].hs=109;
A[0].wks=15;

strcpy(A[1].name,"Virat Kohli");
A[1].age=30;
strcpy(A[1].role,"Batsman");
A[1].runs=5412;
A[1].hs=113;
A[1].wks=4;


strcpy(A[2].name,"M.S.Dhoni");
A[2].age=38;
strcpy(A[2].role,"Wicket keeper");
A[2].runs=4432;
A[2].hs=84;
A[2].wks=0;

strcpy(A[3].name,"Hardhik Pandya");
A[3].age=25;
strcpy(A[3].role,"All-rounder");
A[3].runs=1068;
A[3].hs=91;
A[3].wks=42;

strcpy(A[4].name,"Jasprit Bumrah");
A[4].age=25;
strcpy(A[4].role,"Bowler");
A[4].runs=35;
A[4].hs=16;
A[4].wks=82;


strcpy(A[5].name,"Mohammed Shami");
A[5].age=28;
strcpy(A[5].role,"Bowler");
A[5].runs=54;
A[5].hs=21;
A[5].wks=40;


strcpy(B[0].name,"Steven Smith");
B[0].age=30;
strcpy(B[0].role,"Batsman");
B[0].runs=2022;
B[0].hs=101;
B[0].wks=0;

strcpy(B[1].name,"Shikhar Dhawan");
B[1].age=33;
strcpy(B[1].role,"Batsman");
B[1].runs=4578;
B[1].hs=97;
B[1].wks=4;

strcpy(B[2].name,"Rishab Pant");
B[2].age=21;
strcpy(B[2].role,"Wicket keeper");
B[2].runs=1736;
B[2].hs=128;
B[2].wks=0;

strcpy(B[3].name,"Andre Russell");
B[3].age=31;
strcpy(B[3].role,"All-rounder");
B[3].runs=1400;
B[3].hs=88;
B[3].wks=55;

strcpy(B[4].name,"Tim Southee");
B[4].age=30;
strcpy(B[4].role,"Bowler");
B[4].runs=115;
B[4].hs=36;
B[4].wks=28;

strcpy(B[5].name,"Ravichandran Ashwin");
B[5].age=32;
strcpy(B[5].role,"Bowler");
B[5].runs=375;
B[5].hs=45;  
B[5].wks=125;


strcpy(C[0].name,"Martin Guptill");
C[0].age=32;
strcpy(C[0].role,"Batsman");
C[0].runs=270;
C[0].hs=50;
C[0].wks=0;

strcpy(C[1].name,"Chris Lynn");
C[1].age=29;
strcpy(C[1].role,"Batsman");
C[1].runs=1280;
C[1].hs=93;
C[1].wks=0;

strcpy(C[2].name,"Quinton de Kock");
C[2].age=26;
strcpy(C[2].role,"Wicket keeper");
C[2].runs=1456;
C[2].hs=108;
C[2].wks=0;

strcpy(C[3].name,"Moeen Ali");
C[3].age=32;
strcpy(C[3].role,"All-rounder");
C[3].runs=297;
C[3].hs=66;
C[3].wks=9;

strcpy(C[4].name,"Deepak Chahar");
C[4].age=27;
strcpy(C[4].role,"Bowler");
C[4].runs=71;
C[4].hs=39;
C[4].wks=33;

strcpy(C[5].name,"Trent Boult");
C[5].age=30;
strcpy(C[5].role,"Bowler");
C[5].runs=12;
C[5].hs=6;  
C[5].wks=38;


strcpy(D[0].name,"Chris Gayle");
D[0].age=39;
strcpy(D[0].role,"Batsman");
D[0].runs=4484;
D[0].hs=175;
D[0].wks=18;

strcpy(D[1].name,"Kane Williamson");
D[1].age=29;
strcpy(D[1].role,"Batsman");
D[1].runs=1302;
D[1].hs=89;
D[1].wks=0;

strcpy(D[2].name,"Jos Buttler");
D[2].age=28;
strcpy(D[2].role,"Wicket keeper");
D[2].runs=1386;
D[2].hs=95;
D[2].wks=0;

strcpy(D[3].name,"Krunal Pandya");
D[3].age=28;
strcpy(D[3].role,"All-rounder");
D[3].runs=891;
D[3].hs=86;
D[3].wks=40;

strcpy(D[4].name,"Kagiso Rabada");
D[4].age=24;
strcpy(D[4].role,"Bowler");
D[4].runs=69;
D[4].hs=44;
D[4].wks=31;

strcpy(D[5].name,"Rashid Khan");
D[5].age=20;
strcpy(D[5].role,"Bowler");
D[5].runs=104;
D[5].hs=34;  
D[5].wks=55;


strcpy(E[0].name,"Aaron Finch");
E[0].age=32;
strcpy(E[0].role,"Batsman");
E[0].runs=1737;
E[0].hs=88;
E[0].wks=1;

strcpy(E[1].name,"David Warner");
E[1].age=32;
strcpy(E[1].role,"Batsman");
E[1].runs=4706;
E[1].hs=126;
E[1].wks=0;

strcpy(E[2].name,"Brendon McCullum");
E[2].age=37;
strcpy(E[2].role,"Wicket keeper");
E[2].runs=2880;
E[2].hs=158;
E[2].wks=0;

strcpy(E[3].name,"Ben Stokes");
E[3].age=28;
strcpy(E[3].role,"All-rounder");
E[3].runs=635;
E[3].hs=103;
E[3].wks=26;

strcpy(E[4].name,"Mitchell Starc");
E[4].age=29;
strcpy(E[4].role,"Bowler");
E[4].runs=96;
E[4].hs=29;
E[4].wks=34;

strcpy(E[5].name,"Kuldeep Yadav");
E[5].age=24;
strcpy(E[5].role,"Bowler");
E[5].runs=44;
E[5].hs=16;  
E[5].wks=39;

}
for(int i=0;i<31;i++)
{
 if(i<6)
 {
 	k[i]=A[i];
 }	
 else if(i<12)
 {
 	k[i]=B[i-6]; 	
 }
 else if(i<18)
 {
 	k[i]=C[i-12]; 	
 }
 else if(i<24)
 {
 	k[i]=D[i-18]; 	
 }
 else if(i<30)
 {
 	k[i]=E[i-24]; 	
 }
}

ofstream f1;
f1.open("Players.txt",ios::binary);
f1.write((char*)&k, sizeof(k));//writing into file
f1.close();
}

void intro()
{

system("color F4");
cout<<"         *     *  *******  *        *******  *******  *     *  *******  \n";
cout<<"         *     *  *        *        *        *     *  *  *  *  *        \n";
cout<<"         *     *  *****    *        *        *     *  *     *  *****    \n";
cout<<"         *  *  *  *        *        *        *     *  *     *  *        \n";
cout<<"         *     *  *******  *******  *******  *******  *     *  *******\n\n";
Sleep(500);
cout<<"                              *******  *******                          \n";
cout<<"                                 *     *     *                          \n";
cout<<"                                 *     *     *                          \n";
cout<<"                                 *     *     *                          \n";
cout<<"                                 *     *******                        \n\n";
Sleep(500);
cout<<"         *******  *******  *******  *******  *     *  *******  *******  \n";
cout<<"         *        *     *     *     *        *   *    *           *     \n";
cout<<"         *        * * * *     *     *        * *      *****       *     \n";
cout<<"         *        *    *      *     *        *   *    *           *     \n";
cout<<"         *******  *     *  *******  *******  *     *  *******     *   \n\n";
Sleep(500);
cout<<"                      *******  *        *      *  ******                \n";
cout<<"                      *        *        *      *  *     *               \n";
cout<<"                      *        *        *      *  ******                \n";
cout<<"                      *        *        *      *  *     *               \n";
cout<<"                      *******  *******  ********  ******                \n";
Sleep(2000);
system("cls");
}

int teamselect()
{
int c,d;
team A,B,C,D,E;
ifstream f1("Teams.txt",ios::binary);
f1.read((char*)&A, sizeof(A));//writing into file
f1.read((char*)&B, sizeof(B));
f1.read((char*)&C, sizeof(C));
f1.read((char*)&D, sizeof(D));
f1.read((char*)&E, sizeof(E));
f1.close();
st2:
system("cls");
cout<<"Select your team from the following :-\n";
cout<<"1. "<<A.team_name<<'\n';
cout<<"2. "<<B.team_name<<'\n';
cout<<"3. "<<C.team_name<<'\n';
cout<<"4. "<<D.team_name<<'\n';
cout<<"5. "<<E.team_name<<"\n\n";
cin>>c;
if(c==1)
{
A.team_disp();
cout<<"Press any key to continue...";
getch();
st3:
system("cls");
cout<<"Select your opponent team from the following :-\n";
cout<<"1. "<<B.team_name<<'\n';
cout<<"2. "<<C.team_name<<'\n';
cout<<"3. "<<D.team_name<<'\n';
cout<<"4. "<<E.team_name<<"\n\n";
cin>>c;
if(c==1)
{
	B.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 12;
}
else if(c==2)
{
	C.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 13;
}
else if(c==3)
{
	D.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 14;
}
else if(c==4)
{
	E.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 15;
}
else
{
	cout<<"\n\n			Wrong choice, please retry!";
	cout<<"\n\n			Press any key to continue...";	        
	getch();  
	goto st3;
	
}

}
else if(c==2)
{
B.team_disp();
cout<<"Press any key to continue...";
getch();
st4:
system("cls");
cout<<"Select your opponent team from the following :-\n";
cout<<"1. "<<A.team_name<<'\n';
cout<<"2. "<<C.team_name<<'\n';
cout<<"3. "<<D.team_name<<'\n';
cout<<"4. "<<E.team_name<<"\n\n";
cin>>c;
if(c==1)
{
	A.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 21;
}
else if(c==2)
{
	C.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 23;
}
else if(c==3)
{
	D.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 24;
}
else if(c==4)
{
	E.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 25;
}
else
{
	cout<<"\n\n			Wrong choice, please retry!";
	cout<<"\n\n			Press any key to continue...";	        
	getch();  
	goto st4;
}
}
else if(c==3)
{
C.team_disp();
cout<<"Press any key to continue...";
getch();
st5:
system("cls");
cout<<"Select your opponent team from the following :-\n";
cout<<"1. "<<A.team_name<<'\n';
cout<<"2. "<<B.team_name<<'\n';
cout<<"3. "<<D.team_name<<'\n';
cout<<"4. "<<E.team_name<<"\n\n";
cin>>c;
if(c==1)
{
	A.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 31;
}
else if(c==2)
{
	B.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 32;
}
else if(c==3)
{
	D.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 34;
}
else if(c==4)
{
	E.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 35;
}
else
{
	cout<<"\n\n			Wrong choice, please retry!";
	cout<<"\n\n			Press any key to continue...";	        
	getch();  
	goto st5;
}
}
else if(c==4)
{
D.team_disp();
cout<<"Press any key to continue...";
getch();
st6:
system("cls");
cout<<"Select your opponent team from the following :-\n";
cout<<"1. "<<A.team_name<<'\n';
cout<<"2. "<<B.team_name<<'\n';
cout<<"3. "<<C.team_name<<'\n';
cout<<"4. "<<E.team_name<<"\n\n";
cin>>c;
if(c==1)
{
	A.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 41;
}
else if(c==2)
{
	B.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 42;
}
else if(c==3)
{
	C.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 43;
}
else if(c==4)
{
	E.team_disp();
	cout<<"Press any key to continue...";
	getch();
    return 45;
}
else
{
	cout<<"\n\n			Wrong choice, please retry!";
	cout<<"\n\n			Press any key to continue...";	        
	getch();  
	goto st6;
}
}
else if(c==5)
{
E.team_disp();
cout<<"Press any key to continue...";
getch();
st7:
system("cls");
cout<<"Select your opponent team from the following :-\n";
cout<<"1. "<<A.team_name<<'\n';
cout<<"2. "<<B.team_name<<'\n';
cout<<"3. "<<C.team_name<<'\n';
cout<<"4. "<<D.team_name<<"\n\n";
cin>>c;
if(c==1)
{
	A.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 51;
}
else if(c==2)
{
	B.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 52;
}
else if(c==3)
{
	C.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 53;
}
else if(c==4)
{
	D.team_disp();
	cout<<"Press any key to continue...";
	getch();
	return 54;
}
else
{
	cout<<"\n\n			Wrong choice, please retry!";
	cout<<"\n\n			Press any key to continue...";	        
	getch();  
	goto st7;
}
}
else
{
    cout<<"\n\n			Wrong choice, please retry!";
    cout<<"\n\n			Press any key to continue...";	        
    getch();  
    goto st2;	
}
cout<<"\n\nPress any key to continue...";
getch();	
}

int toss()
{
	int c;
	char t,s;

system("cls");
cout<<"Choose Heads(H) or Tails(T)\n";
cin>>t;
t=toupper(t);
srand(time(NULL)); 
c=rand();
if(c%2)
{
 s='H';
}
else
{
 s='T';
}
if(t==s)
{
	cout<<"You Won the Toss!\n\n";
	cout<<"Choose Bat first(A) or Bowl first(B) :\n";
	cin>>t;
	t=toupper(t);
	if(t=='A')
	{
		return 1;
	}
	else if (t=='B')
	{
		return 2;
	}
}
else
{
	cout<<"You lost the Toss!\n\n";
	Sleep(1000);
	srand(time(NULL)); 
    c=rand();
	if(c%3)
	{
		cout<<"Opponent chose bat first";
		getch();
		return 2;
	}
	else
	{
		cout<<"Opponent chose bowl first";
		getch();
		return 1;
	}
}
}

void playersinfo()
{
int m,l;
ifstream f;
f.open("Players.txt",ios::binary);
f.read((char*)&k, sizeof(k));
	cout<<"	+==================================================+\n";
	cout<<"	|       PLAYERS          |   AGE  |      ROLE      |\n";
    cout<<"	+==================================================+\n";
    for(int i=0;i<30;i++)
    {
    m=strlen(k[i].name);
    l=strlen(k[i].role);
    if(i+1>9)
    {
    cout<<"     "<<i+1<<" |"<<k[i].name;
	}
	else
	{
    cout<<"      "<<i+1<<" |"<<k[i].name; 
    }
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|   "<<k[i].age<<"   ";
	cout<<"| "<<k[i].role;	
    for(int m=0;m<(15-l);m++)
    {
    cout<<' ';
	}
	cout<<"|\n";
    }
	cout<<"	+==================================================+\n";
}

void teamstats()
{
ifstream f1("Teams.txt",ios::binary);
f1.read((char*)&A, sizeof(A));//writing into file
f1.read((char*)&B, sizeof(B));
f1.read((char*)&C, sizeof(C));
f1.read((char*)&D, sizeof(D));
f1.read((char*)&E, sizeof(E));
f1.close();

cout<<"         Team Stats\n------------------------------\n\n";

A.team_disp();
Sleep(1000);
B.team_disp();
Sleep(1000);
C.team_disp();
Sleep(1000);
D.team_disp();
Sleep(1000);
E.team_disp();
	
}

int Agame()
{
system("cls");
int A[9]={0,1,2,3,4,6,7,8,9};
char ch;
for(int i=0;i<9;i++)
{

   if(A[i]==9)
	{
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCatch";
	}
	else if(A[i]==8)
	{
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tBowled";
	}
	else if(A[i]==7)
	{
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLBW";
	}
	else
   {
   cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"<<A[i];
   }

   Sleep(30);
   system("cls");
   
   if(kbhit())
   {
    if(A[i]==9)
	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCatch";
    getch();
    return A[i];
    break;
    }
	 else if(A[i]==8)
  	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tBowled";
    getch();
    return A[i];
    break;
	 }
	 else if(A[i]==7)
	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLBW";
    getch();
    return A[i];
    break;
	 }
	 else
    {
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"<<A[i]<<"  ";
    getch();
    return A[i];
    break;
    }
   }
   if(i==8)
   {
    i=0;
   }
}
getch();
system("cls");
}

int menu()
{
st1:
system("cls");
int j;
cout<<"\t       *        * ********   *      *  *       *\n";
cout<<"\t       * *    * * *          * *    *  *       *\n";
cout<<"\t       *  *  *  * ********   *   *  *  *       *\n";
cout<<"\t       *   **   * *          *    * *  *       *\n";
cout<<"\t       *        * ********   *      *    * * *  \n";
cout<<"\n\t\t1.Play\n";
cout<<"\n\t\t2.Settings\n";
cout<<"\n\t\t3.Exit\n";
cin>>j;
switch (j)
{
	case 1: return  1;
	        break;
	case 2: return  2;
	        break;
    case 3: return  3;
	        break;   
	default:cout<<"\n\n			Wrong choice, please retry!";
	        cout<<"\n\n			Press any key to continue...";	        
	        getch();  
	        goto st1;
	        break;
}
}

void quickplay()
{
a=teamselect();
    
	b = a%10;
    a /= 10;
    b-=1;
    a-=1;
x=toss();
if(x==1)
{
X=F[a];
Y=F[b];
}
else if(x==2)
{
X=F[b];
Y=F[a];		
}
system("cls");
cout<<"\n\n\n\n\n\t\t\t\tGet ready to play!\n";
Sleep(500);
system("cls");
cout<<"\n\t\t\t\tRULES\n\t\t\t\t=====\n\n";
cout<<"\t1.Press any key to hit the run or bowl.\n\n";
cout<<"\t2.Hit or bowl six balls then the over will be displayed.\n\n";
cout<<"\t3.After finishing five overs innings summary will be displayed.\n\n";
cout<<"\t4.You can hit 1,2,3,4 or 6 runs in a ball.\n\n";
cout<<"\t5.You can lose a wicket by catch, bowled or lbw.\n\n";
cout<<"\t6.DO NOT PRESS THE KEYS MULTIPLE TIMES.\n\n";
cout<<"\tPress any key to continue...";
getch();

if(x==1)
{
int scrb=0,wksb=0;
int m,scr=0,pscr[6]={0},wks=0,fball[6]={0},overs[3]={0},pwks[6]={0};
system("cls");
for(int k=0;k<3;k++)                 //overs
{   
    system("cls");
	z[k].batsman=X.team_players[flag1];
	z[k].bowler=Y.team_players[flag2];
	cout<<"Over no. "<<k+1<<" :\n";
	cout<<"Batsman : "<<z[k].batsman.name<<"\n";
	cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	getch();
for(int i=0;i<6;i++)
{
z[i].run=Agame();
    if(z[i].run==9)
	 {
	Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";          
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
	 wks++;
	 pwks[flag2]++;
	 fball[flag1]++;
     }
	 else if(z[i].run==8)
  	 {
  	 Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
	 wks++;
	  pwks[flag2]++;
	 fball[flag1]++;
	 }
	 else if(z[i].run==7)
	 {
	Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
 	 wks++;
 	 pwks[flag2]++;
 	 fball[flag1]++;
	 }
	 else
	 {
	  pscr[flag1] += z[i].run;
	  scr += z[i].run;
	  fball[flag1]++;
      Sleep(1000);
     }
if(wks==6)
{
goto sz;
}
}
system("cls");
cout<<"Over no. "<<k+1<<" :\n";
for(int j=0;j<6;j++)
{
	if(z[j].run==9)
	 {
	 cout<<"Catch  ";
     }
	 else if(z[j].run==8)
  	 {
	 cout<<"Bowled  ";
	 }
	 else if(z[j].run==7)
	 {
	 cout<<"LBW  ";
	 }
	 else
	 {
     cout<<z[j].run<<"  ";
     }
}
cout<<"\nTotal score : "<<scr;
cout<<"\nWickets : "<<wks;
getch();
overs[flag2-5]++;
flag2--;
if(flag2==2)
{
	flag2=5;
}
getch();
}
sz:
system("cls");
cout<<"\t\t\t\t\tInnings summary\n\n";
cout<<"\t\t\t\t\t\tBatting\n";
cout<<"\t\t\t\t\t\t=======\n\n";
    cout<<"			+==============================================+\n";
	cout<<"			|       PLAYERS          |  BALLS  |    RUNS   |\n";
    cout<<"			+==============================================+\n";
    for(int i=0;i<6;i++)
    {
    m=strlen(X.team_players[i].name);
    cout<<"			|"<<X.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|    "<<fball[i];
	if(fball[i]>9)
	{
		cout<<"   |";
	}
	else
	{
		cout<<"    |";
	}
	cout<<"     "<<pscr[i];
	if(pscr[i]>99)
	{
		cout<<"   |\n";
	}
	else if(pscr[i]>9)
	{
		cout<<"    |\n";
	}
	else 
	{
		cout<<"     |\n";
	}
    }
	cout<<"			+==============================================+\n\n";
	cout<<"Total Score : "<<scr<<" runs for "<<wks<<" wickets.";
cout<<"\n\n\n\n";

cout<<"\t\t\t\t\t\tBowling\n";
cout<<"\t\t\t\t\t\t========\n\n";
    cout<<"			+====================================+\n";
	cout<<"			|       BOWLERS          |    WKS    |\n";
    cout<<"			+====================================+\n";
    for(int i=3;i<6;i++)
    {	
    m=strlen(Y.team_players[i].name);
    cout<<"			|"<<Y.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|     "<<pwks[i];
	
	if(pwks[i]<10)
	{
		cout<<"     |\n";
	}
	else
	{
		cout<<"    |\n";
	}
    }
	cout<<"			+====================================+\n";
cout<<"\n\n\n\n";
	
getch();
system("cls");

cout<<"\n\n\n\n\n\t\t\t\tSecond innings!\n\t\t\t\tNow, You are bowling!";
getch();
Sleep(1000);
system("cls");
cout<<"\n\n\n\n\n\t\t\t\tGet ready to play!\n";
Sleep(500);

 flag1=0;
 flag2=5;
 X=F[b];
 Y=F[a];
 for(int y=0;y<6;y++)
 {	
 pscr[y]=0;
 fball[y]=0;
 pwks[y]=0;
 if(y<4)
 {
 	 overs[y]=0;
 }
}
system("cls");
for(int k=0;k<3;k++)
{   
    system("cls");
	z[k].batsman=X.team_players[flag1];
	z[k].bowler=Y.team_players[flag2];
	cout<<"Over no. "<<k+1<<" :\n";
	cout<<"Batsman : "<<z[k].batsman.name<<"\n";
	cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	getch();
for(int i=0;i<6;i++)
{
//	getch();
z[i].run=Agame();
    if(z[i].run==9)
	 {
	Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";          
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
	 wksb++;
	 pwks[flag2]++;
	 fball[flag1]++;
     }
	 else if(z[i].run==8)
  	 {
  	 Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
	 wksb++;
	 pwks[flag2]++;
	 fball[flag1]++;
	 }
	 else if(z[i].run==7)
	 {
	Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
 	 wksb++;	
 	 pwks[flag2]++;
 	 fball[flag1]++;
	 }
	 else
	 {
	  pscr[flag1] += z[i].run;	
	  scrb += z[i].run;
	  fball[flag1]++;
	  if(wksb==6)
      {
      goto gg;
         }
	  if(scrb>=scr)
	  {
    system("cls");
    cout<<"\t\t\t\t\tYou lost!\n";
    cout<<"\t\t\t\t\tInnings summary\n\n";
    cout<<"\t\t\t\t\t\tBatting\n";
    cout<<"\t\t\t\t\t\t=======\n\n";
    cout<<"			+==============================================+\n";
	cout<<"			|       PLAYERS          |  BALLS  |    RUNS   |\n";
    cout<<"			+==============================================+\n";
    for(int i=0;i<6;i++)
    {
    m=strlen(X.team_players[i].name);
    cout<<"			|"<<X.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|    "<<fball[i];
	if(fball[i]>9)
	{
		cout<<"   |";
	}
	else
	{
		cout<<"    |";
	}
	cout<<"     "<<pscr[i];
	if(pscr[i]>99)
	{
		cout<<"   |\n";
	}
	else if(pscr[i]>9)
	{
		cout<<"    |\n";
	}
	else 
	{
		cout<<"     |\n";
	}
    }
	cout<<"			+==============================================+\n";
cout<<"\n\n\n\n";


cout<<"\t\t\t\t\t\tBowling\n";
cout<<"\t\t\t\t\t\t========\n\n";
    cout<<"			+====================================+\n";
	cout<<"			|       BOWLERS          |    WKS    |\n";
    cout<<"			+====================================+\n";
    for(int i=3;i<6;i++)
    {
    m=strlen(Y.team_players[i].name);
    cout<<"			|"<<Y.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	
	cout<<"|     "<<pwks[i];
	
	if(pwks[i]<10)
	{
		cout<<"     |\n";
	}
	else
	{
		cout<<"    |\n";
	}
    }
    cout<<"			+====================================+\n";
cout<<"\n\n\n\n";
getch();
exit(1);
	  }
else if(wks==6||k==2)
{
system("cls");
gg:
cout<<"\t\t\t\t\tYou won!\n";
cout<<"\t\t\t\t\tInnings summary\n\n";
cout<<"\t\t\t\t\t\tBatting\n";
cout<<"\t\t\t\t\t\t=======\n\n";
    cout<<"			+==============================================+\n";
	cout<<"			|       PLAYERS          |  BALLS  |    RUNS   |\n";
    cout<<"			+==============================================+\n";
    for(int i=0;i<6;i++)
    {
    m=strlen(X.team_players[i].name);
    cout<<"			|"<<X.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|    "<<fball[i];
	if(fball[i]>9)
	{
		cout<<"   |";
	}
	else
	{
		cout<<"    |";
	}
	cout<<"     "<<pscr[i];
	if(pscr[i]>99)
	{
		cout<<"   |\n";
	}
	else if(pscr[i]>9)
	{
		cout<<"    |\n";
	}
	else 
	{
		cout<<"     |\n";
	}
    }
	cout<<"			+==============================================+\n";
cout<<"\n\n\n\n";


cout<<"\t\t\t\t\t\tBowling\n";
cout<<"\t\t\t\t\t\t========\n\n";
    cout<<"			+==============================================+\n";
	cout<<"			|       BOWLERS          |  BALLS  |    WKS    |\n";
    cout<<"			+==============================================+\n";
    for(int i=3;i<6;i++)
    {
    m=strlen(Y.team_players[i].name);
    cout<<"			|"<<Y.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|    "<<overs[i]*6;
	if(overs[i]*6<10)
	{
		cout<<"    |";
	}
	else
	{
		cout<<"   |";
	}
	cout<<"     "<<pwks[i];
	
	if(pwks[i]<10)
	{
		cout<<"     |\n";
	}
	else
	{
		cout<<"    |\n";
	}
    }
	cout<<"			+==============================================+\n";
cout<<"\n\n\n\n";
getch();
exit(1);
     }


}
getch();
system("cls");

overs[flag2-5]++;
flag2--;
if(flag2==2)
{
	flag2=5;
}

}
}
}
else if(x==2)
{
int scrb=0,wksb=0;
int m,scr=0,pscr[6]={0},wks=0,fball[6]={0},overs[3]={0},pwks[6]={0};
system("cls");
for(int k=0;k<3;k++)
{   
    system("cls");
	z[k].batsman=X.team_players[flag1];
	z[k].bowler=Y.team_players[flag2];
	cout<<"Over no. "<<k+1<<" :\n";
	cout<<"Batsman : "<<z[k].batsman.name<<"\n";
	cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	getch();
for(int i=0;i<6;i++)
{
z[i].run=Agame();
    if(z[i].run==9)
	 {
	Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";          
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
	 wks++;
	 pwks[flag2]++;
	 fball[flag1]++;
     }
	 else if(z[i].run==8)
  	 {
  	 Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
	 wks++;
	  pwks[flag2]++;
	 fball[flag1]++;
	 }
	 else if(z[i].run==7)
	 {
	Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
 	 wks++;
 	 pwks[flag2]++;
 	 fball[flag1]++;
	 }
	 else
	 {
	  pscr[flag1] += z[i].run;	
	  scr += z[i].run;
	  fball[flag1]++;
      Sleep(1000);
     }
if(wks==6)
{
goto mz;
}
}
system("cls");
cout<<"Over no. "<<k+1<<" :\n";
for(int j=0;j<6;j++)
{
	if(z[j].run==9)
	 {
	 cout<<"Catch  ";
     }
	 else if(z[j].run==8)
  	 {
	 cout<<"Bowled  ";
	 }
	 else if(z[j].run==7)
	 {
	 cout<<"LBW  ";
	 }
	 else
	 {
     cout<<z[j].run<<"  ";
     }
}
cout<<"\nTotal score : "<<scr;
cout<<"\nWickets : "<<wks;
getch();
overs[flag2-5]++;
flag2--;
if(flag2==2)
{
	flag2=5;
}
getch();
}
mz:
system("cls");
cout<<"\t\t\t\t\tInnings summary\n\n";
cout<<"\t\t\t\t\t\tBatting\n";
cout<<"\t\t\t\t\t\t=======\n\n";
    cout<<"			+==============================================+\n";
	cout<<"			|       PLAYERS          |  BALLS  |    RUNS   |\n";
    cout<<"			+==============================================+\n";
    for(int i=0;i<6;i++)
    {
    m=strlen(X.team_players[i].name);
    cout<<"			|"<<X.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|    "<<fball[i];
	if(fball[i]>9)
	{
		cout<<"   |";
	}
	else
	{
		cout<<"    |";
	}
	cout<<"     "<<pscr[i];
	if(pscr[i]>99)
	{
		cout<<"   |\n";
	}
	else if(pscr[i]>9)
	{
		cout<<"    |\n";
	}
	else 
	{
		cout<<"     |\n";
	}
    }
	cout<<"			+==============================================+\n\n";
	cout<<"Total Score : "<<scr<<" runs for "<<wks<<" wickets.";
cout<<"\n\n\n\n";

cout<<"\t\t\t\t\t\tBowling\n";
cout<<"\t\t\t\t\t\t========\n\n";
    cout<<"			+====================================+\n";
	cout<<"			|       BOWLERS          |    WKS    |\n";
    cout<<"			+====================================+\n";
    for(int i=3;i<6;i++)
    {	
    m=strlen(Y.team_players[i].name);
    cout<<"			|"<<Y.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|     "<<pwks[i];
	
	if(pwks[i]<10)
	{
		cout<<"     |\n";
	}
	else
	{
		cout<<"    |\n";
	}
    }
	cout<<"			+====================================+\n";
cout<<"\n\n\n\n";
	
getch();
system("cls");

cout<<"\n\n\n\n\n\t\t\t\tSecond innings!\n\t\t\t\tNow, You are batting!";
getch();
Sleep(1000);
system("cls");
cout<<"\n\n\n\n\n\t\t\t\tGet ready to play!\n";
Sleep(500);

 flag1=0;
 flag2=5;
 X=F[b];
 Y=F[a];
 for(int y=0;y<6;y++)
 {	
 pscr[y]=0;
 fball[y]=0;
 pwks[y]=0;
 if(y<4)
 {
 	 overs[y]=0;
 }
}
system("cls");
for(int k=0;k<3;k++)
{   
    system("cls");
	z[k].batsman=X.team_players[flag1];
	z[k].bowler=Y.team_players[flag2];
	cout<<"Over no. "<<k+1<<" :\n";
	cout<<"Batsman : "<<z[k].batsman.name<<"\n";
	cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	getch();
for(int i=0;i<6;i++)
{
//	getch();
z[i].run=Agame();
    if(z[i].run==9)
	 {
	Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";          
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
	 wksb++;
	 pwks[flag2]++;
	 fball[flag1]++;
     }
	 else if(z[i].run==8)
  	 {
  	 Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
	 wksb++;
	 pwks[flag2]++;
	 fball[flag1]++;
	 }
	 else if(z[i].run==7)
	 {
	Sleep(2000);
	 flag1++;
	 cout<<"\n\nPlayer out :"<<z[k].batsman.name<<"\n";
	 Sleep(2000);
	 z[k].batsman=X.team_players[flag1];
	 system("cls");
	 cout<<"Over no. "<<k+1<<" :\n";
     cout<<"Batsman : "<<X.team_players[flag1].name<<"\n";
	 cout<<"Bowler : "<<z[k].bowler.name<<"\n";
	 getch();
 	 wksb++;	
 	 pwks[flag2]++;
 	 fball[flag1]++;
	 }
	 else
	 {
	  pscr[flag1] += z[i].run;	
	  scrb += z[i].run;
	  fball[flag1]++;
	  if(wksb==6)
      {
      goto mg;
         }
	  if(scrb>=scr)
	  {
    system("cls");
    cout<<"\t\t\t\t\tYou won!\n";
    cout<<"\t\t\t\t\tInnings summary\n\n";
    cout<<"\t\t\t\t\t\tBatting\n";
    cout<<"\t\t\t\t\t\t=======\n\n";
    cout<<"			+==============================================+\n";
	cout<<"			|       PLAYERS          |  BALLS  |    RUNS   |\n";
    cout<<"			+==============================================+\n";
    for(int i=0;i<6;i++)
    {
    m=strlen(X.team_players[i].name);
    cout<<"			|"<<X.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|    "<<fball[i];
	if(fball[i]>9)
	{
		cout<<"   |";
	}
	else
	{
		cout<<"    |";
	}
	cout<<"     "<<pscr[i];
	if(pscr[i]>99)
	{
		cout<<"   |\n";
	}
	else if(pscr[i]>9)
	{
		cout<<"    |\n";
	}
	else 
	{
		cout<<"     |\n";
	}
    }
	cout<<"			+==============================================+\n";
cout<<"\n\n\n\n";


cout<<"\t\t\t\t\t\tBowling\n";
cout<<"\t\t\t\t\t\t========\n\n";
    cout<<"			+====================================+\n";
	cout<<"			|       BOWLERS          |    WKS    |\n";
    cout<<"			+====================================+\n";
    for(int i=3;i<6;i++)
    {
    m=strlen(Y.team_players[i].name);
    cout<<"			|"<<Y.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	
	cout<<"|     "<<pwks[i];
	
	if(pwks[i]<10)
	{
		cout<<"     |\n";
	}
	else
	{
		cout<<"    |\n";
	}
    }
    cout<<"			+====================================+\n";
cout<<"\n\n\n\n";
getch();
exit(1);
	  }
else if(wks==6||k==2)
{
system("cls");
mg:
cout<<"\t\t\t\t\tYou lost!\n";
cout<<"\t\t\t\t\tInnings summary\n\n";
cout<<"\t\t\t\t\t\tBatting\n";
cout<<"\t\t\t\t\t\t=======\n\n";
    cout<<"			+==============================================+\n";
	cout<<"			|       PLAYERS          |  BALLS  |    RUNS   |\n";
    cout<<"			+==============================================+\n";
    for(int i=0;i<6;i++)
    {
    m=strlen(X.team_players[i].name);
    cout<<"			|"<<X.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|    "<<fball[i];
	if(fball[i]>9)
	{
		cout<<"   |";
	}
	else
	{
		cout<<"    |";
	}
	cout<<"     "<<pscr[i];
	if(pscr[i]>99)
	{
		cout<<"   |\n";
	}
	else if(pscr[i]>9)
	{
		cout<<"    |\n";
	}
	else 
	{
		cout<<"     |\n";
	}
    }
	cout<<"			+==============================================+\n";
cout<<"\n\n\n\n";


cout<<"\t\t\t\t\t\tBowling\n";
cout<<"\t\t\t\t\t\t========\n\n";
    cout<<"			+==============================================+\n";
	cout<<"			|       BOWLERS          |  BALLS  |    WKS    |\n";
    cout<<"			+==============================================+\n";
    for(int i=3;i<6;i++)
    {
    m=strlen(Y.team_players[i].name);
    cout<<"			|"<<Y.team_players[i].name;
    for(int j=0;j<(24-m);j++)
    {
    cout<<' ';
	}
	cout<<"|    "<<overs[i]*6;
	if(overs[i]*6<10)
	{
		cout<<"    |";
	}
	else
	{
		cout<<"   |";
	}
	cout<<"     "<<pwks[i];
	
	if(pwks[i]<10)
	{
		cout<<"     |\n";
	}
	else
	{
		cout<<"    |\n";
	}
    }
	cout<<"			+==============================================+\n";
cout<<"\n\n\n\n";
getch();
exit(1);
     }


}
getch();
system("cls");

overs[flag2-5]++;
flag2--;
if(flag2==2)
{
	flag2=5;
}

}
}
}
}

void options()
{
	int c,d;
ifstream f;
f.open("Players.txt",ios::binary);
f.read((char*)&k, sizeof(k));
playersinfo();	
cout<<"\nChoose:\n1.Add new player\n2.Modify existing player\n3.Modify team details\n4.Restore to default\n4.Exit\n";
cin>>c;
if(c==1)
{
	cout<<"Before adding a new player, select a player to be removed (Same role and same team) ";
	cin>>c;
	cout<<"Enter the details of the new player :\n";
	cout<<"Name : ";
	cin>>k[c-1].name;
	cout<<"Age : ";
    cin>>k[c-1].age;
    cout<<"Role : ";
    cout<<k[c-1].role;
    cout<<"\nRuns : ";
    cin>>k[c-1].runs;
    cout<<"High score : ";
    cin>>k[c-1].hs;
    cout<<"Wickets : ";
    cin>>k[c-1].wks;
    
}
else if(c==2)
{
	cout<<"Select a player to be modified  ";
	cin>>c;
	cout<<"\nWhat you want to modify :\n";
	cout<<"1. Name : ";
	cout<<k[c-1].name;
	cout<<"\n2. Age : ";
    cout<<k[c-1].age;
    cout<<"\n   Role : ";
    cout<<k[c-1].role;
    cout<<"\n3. Runs : ";
    cout<<k[c-1].runs;
    cout<<"\n4. High score : ";
    cout<<k[c-1].hs;
    cout<<"\n5. Wickets : ";
    cout<<k[c-1].wks<<"\n";
    cin>>d;
    cout<<"\n\n";
    switch (d)
    {
    	case 1:cout<<"Name : ";
	           cin>>k[c-1].name;
	           break;
	    case 2:cout<<"Age : ";
               cin>>k[c-1].age;
               break;
	    case 3:cout<<"\nRuns : ";
               cin>>k[c-1].runs;
               break;
	    case 4:cout<<"High score : ";
               cin>>k[c-1].hs;
               break;
	    case 5:cout<<"Wickets : ";
               cin>>k[c-1].wks;
               break;	
	    	   		   			                 
	}
    
}
else if(c==3)
{
	system("cls");
	teamstats();
	cout<<"Select a team to be modified  ";
	cin>>c;
if(c==1)
{
	cout<<"\nWhat you want to modify :\n";
	cout<<"1. Team name : ";
	cout<<A.team_name;
	cout<<"\n2. Team owner : ";
    cout<<A.team_owner;
    cout<<"\n3.  Team jerseycolor : ";
    cout<<A.team_jerseycolor;
    cout<<"\n3. Coach : ";
    cout<<A.team_coach;
    cout<<"\n4. Venue : ";
    cout<<A.team_venue;
    cin>>d;
    cout<<"\n\n";
    switch (d)
    {
    	case 1:cout<<"1. Team name : ";
	           cin>>A.team_name;
	           break;
	    case 2:cout<<"\n2. Team owner : ";
               cin>>A.team_owner;
               break;
	    case 3:cout<<"\n3.  Team jerseycolor : ";
               cin>>A.team_jerseycolor;
               break;
	    case 4:cout<<"\n3. Coach : ";
               cin>>A.team_coach;
               break;
	    case 5:cout<<"\n4. Venue : ";
               cin>>A.team_venue;
               break;	
	    	   		   			                 
	}
	getch();
}
else if(c==2)
{
	cout<<"\nWhat you want to modify :\n";
	cout<<"1. Team name : ";
	cout<<B.team_name;
	cout<<"\n2. Team owner : ";
    cout<<B.team_owner;
    cout<<"\n3.  Team jerseycolor : ";
    cout<<B.team_jerseycolor;
    cout<<"\n3. Coach : ";
    cout<<B.team_coach;
    cout<<"\n4. Venue : ";
    cout<<B.team_venue;
    cin>>d;
    cout<<"\n\n";
    switch (d)
    {
    	case 1:cout<<"1. Team name : ";
	           cin>>B.team_name;
	           break;
	    case 2:cout<<"\n2. Team owner : ";
               cin>>B.team_owner;
               break;
	    case 3:cout<<"\n3.  Team jerseycolor : ";
               cin>>B.team_jerseycolor;
               break;
	    case 4:cout<<"\n3. Coach : ";
               cin>>B.team_coach;
               break;
	    case 5:cout<<"\n4. Venue : ";
               cin>>B.team_venue;
               break;	
	    	   		   			                 
	}
	getch();
}
else if(c==3)
{
	cout<<"\nWhat you want to modify :\n";
	cout<<"1. Team name : ";
	cout<<C.team_name;
	cout<<"\n2. Team owner : ";
    cout<<C.team_owner;
    cout<<"\n3.  Team jerseycolor : ";
    cout<<C.team_jerseycolor;
    cout<<"\n3. Coach : ";
    cout<<C.team_coach;
    cout<<"\n4. Venue : ";
    cout<<C.team_venue;
    cin>>d;
    cout<<"\n\n";
    switch (d)
    {
    	case 1:cout<<"1. Team name : ";
	           cin>>C.team_name;
	           break;
	    case 2:cout<<"\n2. Team owner : ";
               cin>>C.team_owner;
               break;
	    case 3:cout<<"\n3.  Team jerseycolor : ";
               cin>>C.team_jerseycolor;
               break;
	    case 4:cout<<"\n3. Coach : ";
               cin>>C.team_coach;
               break;
	    case 5:cout<<"\n4. Venue : ";
               cin>>C.team_venue;
               break;	
	    	   		   			                 
	}
	getch();
}
else if(c==4)
{
	cout<<"\nWhat you want to modify :\n";
	cout<<"1. Team name : ";
	cout<<D.team_name;
	cout<<"\n2. Team owner : ";
    cout<<D.team_owner;
    cout<<"\n3.  Team jerseycolor : ";
    cout<<D.team_jerseycolor;
    cout<<"\n3. Coach : ";
    cout<<D.team_coach;
    cout<<"\n4. Venue : ";
    cout<<D.team_venue;
    cin>>d;
    cout<<"\n\n";
    switch (d)
    {
    	case 1:cout<<"1. Team name : ";
	           cin>>D.team_name;
	           break;
	    case 2:cout<<"\n2. Team owner : ";
               cin>>D.team_owner;
               break;
	    case 3:cout<<"\n3.  Team jerseycolor : ";
               cin>>D.team_jerseycolor;
               break;
	    case 4:cout<<"\n3. Coach : ";
               cin>>D.team_coach;
               break;
	    case 5:cout<<"\n4. Venue : ";
               cin>>D.team_venue;
               break;	
	    	   		   			                 
	}
	getch();
}
else if(c==5)
{
	cout<<"\nWhat you want to modify :\n";
	cout<<"1. Team name : ";
	cout<<E.team_name;
	cout<<"\n2. Team owner : ";
    cout<<E.team_owner;
    cout<<"\n3.  Team jerseycolor : ";
    cout<<E.team_jerseycolor;
    cout<<"\n3. Coach : ";
    cout<<E.team_coach;
    cout<<"\n4. Venue : ";
    cout<<E.team_venue;
    cin>>d;
    cout<<"\n\n";
    switch (d)
    {
    	case 1:cout<<"1. Team name : ";
	           cin>>E.team_name;
	           break;
	    case 2:cout<<"\n2. Team owner : ";
               cin>>E.team_owner;
               break;
	    case 3:cout<<"\n3.  Team jerseycolor : ";
               cin>>E.team_jerseycolor;
               break;
	    case 4:cout<<"\n3. Coach : ";
               cin>>E.team_coach;
               break;
	    case 5:cout<<"\n4. Venue : ";
               cin>>E.team_venue;
               break;	
	    	   		   			                 
	}
	getch();
}
}
else if(c==4)
{
playerinp();
teaminp();	
}
else
{
exit(0);
}
ofstream f1;
f1.open("Players.txt",ios::binary);
f1.write((char*)&k, sizeof(k));//writing into file
f1.close();
system("cls");
getch();
}

int main()
{
playerinp();
teaminp();	
srand(time(NULL));
ifstream f1("Teams.txt",ios::binary);
f1.read((char*)&F[0], sizeof(F[0]));//writing into file
f1.read((char*)&F[1], sizeof(F[1]));
f1.read((char*)&F[2], sizeof(F[2]));
f1.read((char*)&F[3], sizeof(F[3]));
f1.read((char*)&F[4], sizeof(F[4])); 
f1.close();
intro();
y=menu();
system("cls");
if(y==1)                           //For Quick Play.
{
	quickplay();
}
else if(y==2)
{
	options();	
}
else if(y==3)                      //For Exit.
{
	exit(1);
}
}
