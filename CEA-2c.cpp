#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"\t\t\t\t\t\t\tCEA-2"<<endl;
	cout<<"\t\t\t\t\t\tWELCOME TO TEACHER PORTAL"<<endl;
	
	string StudentNames[42];  
	float RollNumbers[42],tqavg[42],taavg[42],tmavg[42],tfavg[42],avgp[42],totalp[42];
	float Q1[42],Q2[42],Q3[42],Q4[42],Q5[42],Q6[42],Qt[42];
	float A1[42],A2[42],A3[42],At[42], M[42], F[42], P[42] ;
    string fgrade[42];
	
	fstream fin;
	fin.open("NCA.csv",ios::in);
	string temp;
	getline (fin,temp);
//	cout<<temp<<"\n";
//	cout<<temp1<<"\n";
	
	getline (fin,temp);          //getline used for save a space in string
    int i=0;
    string line;
    while(getline(fin,line))     //using while loop
  { 
    istringstream iss (line);
      getline (iss,StudentNames[i],',');
      iss>>RollNumbers[i];
    //this space is for quiz logic  
    //this space is for assignment logic   
	  getline (iss,temp,',');
      iss>>Q1[i];
	  getline (iss,temp,',');
      iss>>Q2[i];
	  getline (iss,temp,',');
      iss>>Q3[i];
	  getline (iss,temp,',');
      iss>>Q4[i];
	  getline (iss,temp,',');
      iss>>Q5[i];
	  getline (iss,temp,',');
      iss>>Q6[i];
	  getline (iss,temp,',');
      iss>>A1[i];
	  getline (iss,temp,',');
      iss>>A2[i];
	  getline (iss,temp,',');
      iss>>A3[i]; 
      getline (iss,temp,',');
      iss>>M[i];
      getline (iss,temp,',');
      iss>>F[i];
      getline (iss,temp,',');
      iss>>P[i];
      i++;
  } fin.close();
//  for(int i=0;i<42;i++)
//   {    //using for loop to the excel sheet on console
//  	cout<<setw(30)<<left<<StudentNames[i]<<" "<<setw(9)<<left<<RollNumbers[i]<<" "
//	  <<setw(2)<<left<<Q1[i]<<" "<<setw(2)<<left<<Q2[i]<<" "<<setw(2)<<left<<Q3[i]<<" "
//	  <<setw(2)<<left<<Q4[i]<<" "<<setw(2)<<left<<Q5[i]<<" "<<setw(4)<<left<<Q6[i]<<" "
//	  <<setw(2)<<left<<A1[i]<<" "<<setw(2)<<left<<A2[i]<<" "<<setw(5)<<left<<A3[i]<<" "<<setw(4)<<left<<M[i]<<" "
//	  <<setw(4)<<left<<F[i]<<" "<<setw(4)<<left<<P[i]<<endl;
//   }
  
  
  float q, a, mt, ft, p;
  float tw;
   do 
   {
        cout<<"\n\nENTER WEIGHTAGE OF QUIZZES:"<<endl;
        cin>>q;
        cout<<"ENTER WEIGHTAGE OF ASSIGNMENTS:"<<endl;
        cin>>a;
        cout<<"ENTER WEIGHTAGE OF MID-TERM:"<<endl;
        cin>>mt;
        cout<<"ENTER WEIGHTAGE OF FINAL-TERM:"<<endl;
        cin>>ft;
        cout<<"ENTER WEIGHTAGE OF PROJECT:"<<endl;
        cin>>p;
        tw=q+a+mt+ft+p;
        if(tw!=100) 
		{
            cout<<"\nKINDLY, ENTER WEIGHTAGE THAT'S EQUAL TO 100%"<<endl;
        } else 
		{
            cout<<"\nOKAY, YOUR 100% WEIGHTAGE IS DONE "<<endl;
        }
    } while(tw!=100);
    cout<<endl;
    //calculate total quizz and assignments
    for(int i=0;i<42;i++)
	{
    Qt[i]=Q1[i]+Q2[i]+Q3[i]+Q4[i]+Q5[i]+Q6[i];
    }
    for(int i=0;i<42;i++)
	{
    At[i]=A1[i]+A2[i]+A3[i];
    }
    int x;
    cout<<"\t\t\t\t\t\t\t\tCHOOSE ANY OPTION"<<endl;
    cout<<"1- DISPLAY CLASS RESULT ON CONSOLE"<<endl;
    cout<<"2- GENERATE CLASS RESULT IN A NEW CSV FILE"<<endl;
    cout<<"3- SEARCH RESULT OF AN INDIVIDUAL STUDENT BY ROLL NUMBER ON CONSOLE"<<endl;
    cout<<"4- EXIT"<<endl;
    cin>>x;
//    cout<<setw(25)<<left<<"STUDENT NAMES"<<" "<<setw(13)<<left<<"ROLL NUMBERS"<<" "
//	<<setw(8)<<left<<"QUIZZEZ"<<" "<<setw(13)<<left<<"ASSIGNMENTS"<<" "
//	<<setw(9)<<left<<"MID-TERM"<<" "<<setw(11)<<left<<"FINAL-TERM"<<" "
//	<<setw(13)<<left<<"PROJECT MARKS"<<endl;
//   for(int i=0;i<42;i++)
//	{    //using for loop to the excel sheet on console
//  cout<<setw(25)<<left<<StudentNames[i]<<" "<<setw(13)<<left<<RollNumbers[i]<<" "
//	  <<setw(8)<<left<<Qt[i]<<" "<<setw(13)<<left<<At[i]<<" "<<setw(9)<<left<<M[i]<<" "
//	  <<setw(11)<<left<<F[i]<<" "<<setw(13)<<left<<P[i]<<endl;
//    }
   //calculate the total percentage 
    
     if(x==3)
	 {
     	double rlno;
     	cout<<"ENTER ROLLNO OF ANY STUDENT WHICH RESULT YOU WANT:"<<endl;
     	cin>>rlno;
     	for(int i=0;i<42;i++)
		 {
     		if(rlno==RollNumbers[i])
			 {
     			cout<<"STUDENT NAME: "<<StudentNames[i]<<endl;
     			cout<<"ROLL NUMBER: "<<RollNumbers[i]<<endl;
     			cout<<"QUIZ-PERCENTAGE: "<<tqavg[i]<<endl;
     			cout<<"ASSIGNMENTS-PERCENTAGE: "<<taavg[i]<<endl;
     			cout<<"MIDS-PERCENTAGE: "<<tmavg[i]<<endl;
     			cout<<"FINALS-PERCENTAGE: "<<tfavg[i]<<endl;
     			cout<<"PROJECT PERCENTAGE: "<<avgp[i]<<endl;
     			cout<<"TOTAL PERCENTAGE: "<<totalp[i]<<endl;
     			cout<<"GRADE: "<<fgrade[i]<<endl;
			 }		
		}
    } 
        //calculate the average individually mids,finals,assignments,quizz,projects
        //this for loops to calculate of averages of mid term,final term,assignmnets,quizzez and projects individually
    for(int i=0;i<42;i++){  
    	tqavg[i]=(Qt[i]/60.0)*q;
	}
	cout<<Qt[0];
	for(int i=0;i<42;i++){
        taavg[i]=(At[i]/30.0)*a;
    }
    for(int i=0;i<42;i++){
        tmavg[i]=(M[i]/100.0)*mt;
    }
    for(int i=0;i<42;i++){
        tfavg[i]=(F[i]/100.0)*ft;
    }
    for(int i=0;i<42;i++){
        avgp[i]=(P[i]/40.0)*p;
    }
//    cout<<setw(25)<<left<<"STUDENT NAMES"<<" "<<setw(13)<<left<<"ROLL NUMBERS"<<" "
//	<<setw(8)<<left<<"QUIZZEZ"<<" "<<setw(13)<<left<<"ASSIGNMENTS"<<" "
//	<<setw(9)<<left<<"MID-TERM"<<" "<<setw(11)<<left<<"FINAL-TERM"<<" "
//	<<setw(13)<<left<<"PROJECT MARKS"<<" "<<setw(16)<<left<<"TOTAL PERCENTAGE"<<endl;
//   for(int i=0;i<42;i++)
//	{    //using for loop to the excel sheet on console
// 	cout<<setw(25)<<left<<StudentNames[i]<<" "<<setw(13)<<left<<RollNumbers[i]<<" "
//	  <<setw(8)<<left<<tqavg[i]<<" "<<setw(13)<<left<<taavg[i]<<" "<<setw(9)<<left<<tmavg[i]<<" "
//	  <<setw(11)<<left<<tfavg[i]<<" "<<setw(13)<<left<<avgp[i]<<endl;
//    }
    
   
   for(int i=0;i<42;i++)
	{
  		totalp[i]=(Qt[i]/60.0)*q+ (At[i]/30.0)*a + (M[i]/100.0)*mt +(F[i]/100.0)*ft +(P[i]/40.0)*p;
    }
// cout<<setw(25)<<left<<"STUDENT NAMES"<<" "<<setw(13)<<left<<"ROLL NUMBERS"<<" "
//	<<setw(8)<<left<<"QUIZZEZ"<<" "<<setw(13)<<left<<"ASSIGNMENTS"<<" "
//	<<setw(9)<<left<<"MID-TERM"<<" "<<setw(11)<<left<<"FINAL-TERM"<<" "
//	<<setw(13)<<left<<"PROJECT MARKS"<<" "<<setw(16)<<left<<"TOTAL PERCENTAGE"<<endl;
//  for(int i=0;i<42;i++)
//	{    //using for loop to the excel sheet on console
//	cout<<setw(25)<<left<<StudentNames[i]<<" "<<setw(13)<<left<<RollNumbers[i]<<" "
//	  <<setw(8)<<left<<Qt[i]<<" "<<setw(13)<<left<<At[i]<<" "<<setw(9)<<left<<M[i]<<" "
//	  <<setw(11)<<left<<F[i]<<" "<<setw(13)<<left<<P[i]<<" "<<setw(16)<<left<<totalp[i]<<endl;
//  }
    
    
    float class_avg1;
	float b=0;
	float class_avg;
    for(int i=0;i<42;i++) //this for loop is used for making class average
	{
    	class_avg1=totalp[i]+b;
    	b=class_avg1;	
	}
	class_avg=(class_avg1/42.0);
//	cout<<"\n\n\t\t\t\t\t\t\t\tCLASS AVERAGE IS: "<<class_avg<<endl;
	
	
	string grade[42]; //using for loop calculate grade according to class average
	for(int i=0;i<42;i++)
	{
	if(totalp[i]>class_avg+20)
     {
		fgrade[i]="A";
	 }
	else if(totalp[i]>class_avg+15)
	 {
		fgrade[i]="A-";
	 }
	else if(totalp[i]>class_avg+10)
	 {
		fgrade[i]="B+";
	 }
	else if(totalp[i]>class_avg+5)
	 {
		fgrade[i]="B";
	 }
	else if((totalp[i]>class_avg-5)&&(totalp[i]>class_avg+5))
	 {
		fgrade[i]="B-";
	 }
	else if(totalp[i]>class_avg-5)
	 {
		fgrade[i]="C";
	 }
	else if(totalp[i]>class_avg-10)
	 {
		fgrade[i]="C-";
	 }
	else if(totalp[i]>class_avg-15)
	 {
		fgrade[i]="D";
	 }
	else if(totalp[i]>class_avg-20)
 	 {
		fgrade[i]="F";
   	 }
   	else
	 {
   		fgrade[i]="F";
	 }
    }    
   if(x==1)
  { 
    cout<<setw(25)<<left<<"STUDENT NAMES"<<" "<<setw(13)<<left<<"ROLL NUMBERS"<<" "
	<<setw(8)<<left<<"QUIZ'S"<<" "<<setw(13)<<left<<"ASSIGNMENTS"<<" "
	<<setw(9)<<left<<"MID-TERM"<<" "<<setw(11)<<left<<"FINAL-TERM"<<" "
	<<setw(13)<<left<<"PROJECT MARKS"<<" "<<setw(16)<<left<<"TOTAL PERCENTAGE"<<" "<<setw(8)<<left<<"GRADES"
	<<endl;
     for(int i=0;i<42;i++)
	 {    //using for loop to the excel sheet on console
  	cout<<setw(25)<<left<<StudentNames[i]<<" "<<setw(13)<<left<<RollNumbers[i]<<" "
	  <<setw(8)<<left<<tqavg[i]<<" "<<setw(13)<<left<<taavg[i]<<" "<<setw(9)<<left<<tmavg[i]<<" "
	  <<setw(11)<<left<<tfavg[i]<<" "<<setw(13)<<left<<avgp[i]<<" "<<setw(16)<<left<<totalp[i]<<
	  " "<<setw(8)<<left<<fgrade[i]<<endl;
     }
    }
    
    if(x==4){
    	cout<<"\t\t\t\t\t\tBA BYEE' NICE TO MEET YOU 'TAKE CARE"<<endl;
	}
	if(x==2)
	{  
//	 int Qtavg[42] , Atavg[42], mtavg[42], ftavg[42], pavg[42] ,total[42] ;
//	 string grade[42];
	 fstream fout;                   //use fstream output to show data in any file
	 fout.open("new.csv",ios::out);
	 fout<<"STUDENT NAMES"<<","<<"ROLL NUMBERS"<<","<<"QUIZ"<<","<<"ASSIGNMENT"<<","<<"MID-TERM"<<","<<"FINAL-TERM"
	 <<","<<"PROJECT"<<","<<"TOTAL WEIGHTAGE"<<","<<"GRADES"<<endl;

	 for(int i=0;i<42;i++)
	 {
	 fout<<StudentNames[i]<<","<<RollNumbers[i]<<","<<tqavg[i]<<","<<taavg[i]<<","<<tmavg[i]<<","<<tfavg[i]<<","
	 <<avgp[i]<<","<<totalp[i]<<","<<fgrade[i]<<endl;
	 }
	 fout.close();
	 cout<<"Results saved to new RESULTS.csv file";
     }
     
     if(x==3)
	 {
     	double rlno;
     	cout<<"ENTER ROLLNO OF ANY STUDENT WHICH RESULT YOU WANT:"<<endl;
     	cin>>rlno;
     	for(int i=0;i<42;i++)
		 {
     		if(rlno==RollNumbers[i])
			 {
     			cout<<"STUDENT NAME: "<<StudentNames[i]<<endl;
     			cout<<"ROLL NUMBER: "<<RollNumbers[i]<<endl;
     			cout<<"QUIZ-PERCENTAGE: "<<tqavg[i]<<endl;
     			cout<<"ASSIGNMENTS-PERCENTAGE: "<<taavg[i]<<endl;
     			cout<<"MIDS-PERCENTAGE: "<<tmavg[i]<<endl;
     			cout<<"FINALS-PERCENTAGE: "<<tfavg[i]<<endl;
     			cout<<"PROJECT PERCENTAGE: "<<avgp[i]<<endl;
     			cout<<"TOTAL PERCENTAGE: "<<totalp[i]<<endl;
     			cout<<"GRADE: "<<fgrade[i]<<endl;
			 }		
		}
    }   
}







