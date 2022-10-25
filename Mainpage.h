#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<string>
#include<time.h>
#include "Game.h"
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tab  "\t"
#define MAX 3

/* Header Section */


class quizzon
{
public:
     int candidate_id;
     char name[30];
     int age;
     int score;
/******************************************* TimeStamp Section *************************/	
	time_t now = time(0); 
	tm *ltm = localtime(&now);
	int year = 1900 + ltm->tm_year;
	int month = 1 + ltm->tm_mon;
	int day = ltm->tm_mday;
	int hour = ltm->tm_hour; 
	int min = ltm->tm_min;
	int sec = ltm->tm_sec;
/******************************************* TimeStamp Section *************************/	

 public:
 	void home_page();
 	void start_game();
 	void gameplay();
 	void recordbook();
 	int binary_search(int arr[],int x,int sizes,int targets);
};

void quizzon::home_page()
{
	int choice;
	while(choice != 4)
	{
		cout<<endl<<endl<<tab<<"***************************Top of the Screen***********************************";
		cout<<endl<<endl<<tab<<"1. START GAME ";
		cout<<endl<<endl<<tab<<"2. RECORD SECTION ";
		cout<<endl<<endl<<tab<<"3. RULE BOOK ";
		cout<<endl<<endl<<tab<<"4. EXIT ";
		cout<<endl<<endl<<tab<<" OPTION:  ";
		cin>>choice;
		switch(choice)
		{
			case 1: start_game(); 
			break;
			case 2: recordbook();
			break;
			case 3: //rulebook();
			break;
			case 4: break;
			default:
				cout<<endl<<endl<<tab<<"Wrong Choice!!!";
				cout<<endl<<endl<<tab;	
				getch();		
		}
	}
}

void quizzon::start_game()
{
	cout<<endl<<endl<<tab<<"***************************Top of the Screen***********************************";
	cout<<endl<<endl<<tab<<" NAME:  ";
	cin>>name;
     cout<<endl<<endl<<tab<<" AGE:  ";
     cin>>age;
     srand(time(0));
     candidate_id = 1 + rand();
     cout<<endl<<endl<<tab<<" NAME: "<<name<<tab<<"AGE: "<<age<<tab<<"UNIQUE_ID: "<<candidate_id<<endl;
 
     int choice;
      while(choice != 2)
      {
      	cout<<endl<<endl<<tab<<" WANT TO PLAY QUIZ?  ";
      	cout<<endl<<endl<<tab<<" 1. YES  ";
      	cout<<endl<<endl<<tab<<" 2. NO   ";
      	cout<<endl<<endl<<tab<<tab;
      	cin>>choice;
      switch(choice)
      {
      	case 1: gameplay();
      	   break;
      	case 2: home_page();
      	   break;
      	default:
      	     cout<<endl<<endl<<tab<<"Wrong Choice!!!";
		     cout<<endl<<endl<<tab;
		     getch();	
      }
   } 
}

int quizzon::binary_search(int arr[],int x,int r,int l)
{
	while(x <= r) 
	{
		int m = x + (r - x)/2;
		if (arr[m] == l)
			return m;
		if (arr[m] < l)
			x = m + x;
		else
			r = m - x;
	}
	return -1;
}

void quizzon::gameplay()
{
	score = 0;
	char break_law = 'N';
	int check_question;
	int Question_index[MAX];
	fstream fout;
	fout.open("reportcard.csv", ios::out | ios::app);
	cout<<endl<<endl<<tab<<"***************************Top of the Screen***********************************";
	cout<<endl<<endl<<tab<<" NAME: "<<name<<tab<<"AGE: "<<age<<tab<<"UNIQUE_ID: "<<candidate_id<<tab<<tab<<"SCORE : "<<score<<endl;
	for(int i = 0;i<MAX;i++)
	{
		if (break_law = 'N' or 'n' or ' ')
		{
			srand(time(0));
               int 	question = 1 + rand() % 3;
               check_question = binary_search(Question_index,0,MAX-1,question);
               if (check_question = -1)
               {
               Question_index[i] = question;
               score = score + Question(i,question);
               cout<<endl<<endl<<tab<<"Do You Want to Quit? if yes press Y or y else press Enter :    ";
               cin>>break_law;
               }
               else
             	    continue;  
          }
          if (break_law = 'Y' or 'y')
          {
          break;
          }
     }
     cout<<endl<<endl<<tab<<"***************************Top of the Screen***********************************";
     cout<<endl<<endl<<tab<<" NAME: "<<name<<tab<<"AGE: "<<age<<tab<<"UNIQUE_ID: "<<candidate_id<<tab<<"SCORE : "<<score<<endl;
     cout<<endl<<endl<<tab<<"GAME OVER";
     fout<<candidate_id<<","<<name<<","<<age<<","<<score<<"/"<<MAX<<","<<year<<"-"<<month<<"-"<<day<<","<<hour<<":"<<min<<":"<<sec<<"\n";
     getch();    
}

void quizzon::recordbook()
{
    // File pointer
    fstream fin;

    // Open an existing file
    fin.open("reportcard.csv", ios::in);
    cout<<endl<<endl<<tab<<"***************************Top of the Screen***********************************";
    vector<vector<string>> content;
    vector<string> row;
    string line, word;
 
    if(fin.is_open())
    {
    while(getline(fin, line))
    {
    row.clear();
 
    stringstream str(line);
 
    while(getline(str, word, ','))
    row.push_back(word);
    content.push_back(row);
    }
    }
    
    for(int i=0;i<content.size();i++)
    {
    cout<<tab;
    for(int j=0;j<content[i].size();j++)
    {
    cout<<content[i][j]<<" ";
    }
    cout<<"\n";
    }
    getch();

}
