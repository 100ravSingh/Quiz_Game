#include<iostream>
#include<map>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tab  "\t"
#define MAX 3

int answersheet(int y,int x)
{
   int answer[7];
   answer[0] = 2;
   answer[1] = 3;
   answer[2] = 4;
   answer[3] = 2;
   answer[4] = 1;
   answer[5] = 4;
   answer[6] = 1;

  if (answer[y-1] == x)
  {
  	return 1;
  }
  else
  {
  	return 0;
  }
}

void quest(int i,int x)
{
   switch(x)
   {
      case 1:
            cout<<endl<<tab<<"Q"<<i+1<<". Who is the father of Computers?"<<endl<<tab<<tab<<"1) James Gosling"<<endl<<tab<<tab<<"2) Charles Babbage"<<endl<<tab<<tab<<"3) Dennis Ritchie"<<endl<<tab<<tab<<"4) Bjarne Stroustrup"<<endl;
            break;
      case 2:
            cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is the correct abbreviation of COMPUTER"<<endl<<tab<<tab<<"1) Commonly Occupied Machines Used in Technical and Educational Research"<<endl<<tab<<tab<<"2) Commonly Operated Machines Used in Technical and Environmental Research"<<endl<<tab<<tab<<"3) Commonly Oriented Machines Used in Technical and Educational Research"<<endl<<tab<<tab<<"4) Commonly Operated Machines Used in Technical and Educational Research"<<endl;
            break;
      case 3:
            cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is the correct definition of Computer?"<<endl<<tab<<tab<<"1) Computer is a machine or device that can be programmed to perform arithmetical or logic operation sequences automatically"<<endl<<tab<<tab<<"2) Computer understands only binary language which is written in the form of 0s & 1s"<<endl<<tab<<tab<<"3) Computer is a programmable electronic device that stores, retrieves, and processes the data"<<endl<<tab<<tab<<"4) All of the mentioned"<<endl;
            break;
      case 4:
            cout<<endl<<tab<<"Q"<<i+1<<". Which of the following computer language is written in binary codes only?"<<endl<<tab<<tab<<"1) pascal "<<endl<<tab<<tab<<"2) machine language "<<endl<<tab<<tab<<" 3) C "<<endl<<tab<<tab<<"4) C# "<<endl;
            break;
      case 5:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is the brain of the computer?"<<endl<<tab<<tab<<" 1) Central Processing Unit "<<endl<<tab<<tab<<" 2) Memory "<<endl<<tab<<tab<<" 3) Arithmetic and Logic unit "<<endl<<tab<<tab<<" 4) Control unit"<<endl;
           break;
      case 6:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is not a characteristic of a computer?"<<endl<<tab<<tab<<" 1)  Versatility "<<endl<<tab<<tab<<" 2) Accuracy "<<endl<<tab<<tab<<" 3) Diligence "<<endl<<tab<<tab<<" 4)  I.Q."<<endl;
           break;
      case 7:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is the smallest unit of data in a computer?"<<endl<<tab<<tab<<" 1)  Bit "<<endl<<tab<<tab<<" 2) KB "<<endl<<tab<<tab<<" 3) Nibble "<<endl<<tab<<tab<<" 4) Byte"<<endl;
           break;
      default:
            break;
   }
}


int Question(int i,int x)
{
   int response;
   int score;
   
   if (x > 0 && x <= MAX)
   {
      quest(i,x);
   	cout<<endl<<endl<<tab<<"Enter your options   : ";
   	cin>>response;
      score = answersheet(x,response);
      return score;
   }
   else
   {
   	return 0;
   }
}



