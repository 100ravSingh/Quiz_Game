#include<iostream>
#include<map>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tab  "\t"
#define MAX 5

int answersheet(int y,int x)
{
   int answer[20];
   answer[0] = 2;
   answer[1] = 3;
   answer[2] = 4;
   answer[3] = 2;
   answer[4] = 1;
   answer[5] = 4;
   answer[6] = 1;
   answer[7] = 3;
   answer[8] = 4;
   answer[9] = 2;
   answer[10] = 2;
   answer[11] = 1;
   answer[12] = 4;
   answer[13] = 3;
   answer[14] = 3;
   answer[15] = 3;
   answer[16] = 4;
   answer[17] = 2;
   answer[18] = 3;
   answer[19] = 4;

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
      case 8:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following defines the assigned ordering among the characters used by the computer?"<<endl<<tab<<tab<<" 1)  Accumulation "<<endl<<tab<<tab<<" 2) Sorting "<<endl<<tab<<tab<<" 3) Collating Sequence "<<endl<<tab<<tab<<" 4) Unicode"<<endl;
           break;
      case 9:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following storage is a system where a robotic arm will connect or disconnect off-line mass storage media according to the computer operating system demands?"<<endl<<tab<<tab<<" 1)  Magnetic "<<endl<<tab<<tab<<" 2) Secondary "<<endl<<tab<<tab<<" 3) Tertiary "<<endl<<tab<<tab<<" 4) Virtual"<<endl;
           break;
      case 10:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following devices provides the communication between a computer and the outer world?"<<endl<<tab<<tab<<" 1)  Compact "<<endl<<tab<<tab<<" 2) I/O "<<endl<<tab<<tab<<" 3) Drivers "<<endl<<tab<<tab<<" 4) Storage"<<endl;
           break;
      case 11:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is the device used for converting maps, pictures, and drawings into digital form for storage in computers?"<<endl<<tab<<tab<<" 1)  Image Scanner "<<endl<<tab<<tab<<" 2) Digitizer "<<endl<<tab<<tab<<" 3) MICR "<<endl<<tab<<tab<<" 4) Scanner"<<endl;
           break;
      case 12:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following can access the server?"<<endl<<tab<<tab<<" 1)  Web Client "<<endl<<tab<<tab<<" 2) User "<<endl<<tab<<tab<<" 3) Web Server "<<endl<<tab<<tab<<" 4) Web Browser"<<endl;
           break;
      case 13:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is known as the language made up of binary-coded instructions?"<<endl<<tab<<tab<<" 1)  High Level "<<endl<<tab<<tab<<" 2) Basic "<<endl<<tab<<tab<<" 3) C "<<endl<<tab<<tab<<" 4) Machine"<<endl;
           break;
      case 14:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is created when a user opens an account in the computer system?"<<endl<<tab<<tab<<" 1)  SFD "<<endl<<tab<<tab<<" 2) MFD "<<endl<<tab<<tab<<" 3) Subdirectory "<<endl<<tab<<tab<<" 4) RFD"<<endl;
           break;
      case 15:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is a technique that marked the beginning of computer communications?"<<endl<<tab<<tab<<" 1)  User Environment "<<endl<<tab<<tab<<" 2) Batch Environment "<<endl<<tab<<tab<<" 3) Time Sharing "<<endl<<tab<<tab<<" 4) Message Passing"<<endl;
           break;
      case 16:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following service allows a user to log in to another computer somewhere on the Internet?"<<endl<<tab<<tab<<" 1)  E-mail "<<endl<<tab<<tab<<" 2) Usenet "<<endl<<tab<<tab<<" 3) Telnet "<<endl<<tab<<tab<<" 4) FTP"<<endl;
           break;
      case 17:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is not a type of computer on the basis of operation?"<<endl<<tab<<tab<<" 1)  Digital "<<endl<<tab<<tab<<" 2) Analog "<<endl<<tab<<tab<<" 3) Hybrid "<<endl<<tab<<tab<<" 4) Remote"<<endl;
           break;
      case 18:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following invention gave birth to the much cheaper microcomputers?"<<endl<<tab<<tab<<" 1)  PDAs "<<endl<<tab<<tab<<" 2) Microprocessors "<<endl<<tab<<tab<<" 3) Microcomputers "<<endl<<tab<<tab<<" 4) Mainframes"<<endl;
           break;
      case 19:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following computers are lower than mainframe computers in terms of speed and storage capacity?"<<endl<<tab<<tab<<" 1)  Mainframes "<<endl<<tab<<tab<<" 2) Hybrid "<<endl<<tab<<tab<<" 3) Mini "<<endl<<tab<<tab<<" 4) Super"<<endl;
           break;
      case 20:
           cout<<endl<<tab<<"Q"<<i+1<<". Which of the following is the first neural network computer?"<<endl<<tab<<tab<<" 1)  AN "<<endl<<tab<<tab<<" 2) AM "<<endl<<tab<<tab<<" 3) RFD "<<endl<<tab<<tab<<" 4) SNARC"<<endl;
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



