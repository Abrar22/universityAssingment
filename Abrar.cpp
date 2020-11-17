#include<iostream>
#include<string>

using namespace std;
string student_name,student_id;
int student_item[8];
int avg[8];
char dep[10];
char debarment;
int result;
string division;
string cond ; 
string students[10][2];
	int i =0;
	int sum=0;
	int average;


void input (){
	
	do {

cout << "Student name ";
 cin >> student_name;
 students[i][0] = student_name;
cout << "student id:";
cin>>student_id;
students[i][1] = student_id;
 cout << "Department: ";
 cin >> debarment;
 dep[i] = debarment;
 cout<<"Enter the data for 8 items "<<endl;
 for(int j=0;j<8;j++){
 	 cin>>student_item[j];
 }
 
 		for(int i = 0;i<8;i++){
	sum +=student_item[i];
}
avg[i] = sum/8;
sum = 0;
 i++;
 
cout<<endl;
}while (i<10);

}

void output (){
	 for(int i = 0;i<10;i++){
 		cout<<"NAME :"<<students[i][0]<<endl;
 		cout<<"ID: " <<students[i][1]<<endl;
 		
 		 switch(dep[i])
{ case 'A':
 division = "Control";
 break;
 case 'T':
 division = "Telecommunication";
 case 'C':
 division = "Computer";
 break;
default: division ="Unknown";
}
 		cout<<"debarment: "<<division<<endl;
 		cout<<"average = "<<avg[i]<<endl;
 		
		if(avg[i]>= 90 && avg[i] <= 100)  cout<<"General appreciation : Excellent"<<endl;
 		else if(avg[i] >= 70 && avg[i] < 80) cout<<"General appreciation : Good"<<endl;
 		else if(avg[i] >= 50 && avg[i] < 70) cout<<"General appreciation : Average"<<endl;
 		else if(avg[i] <50) cout<<"General appreciation : Bad"<<endl;
	 
 }
}


int main (void)
{

 input ();
output ();

 return 0;
 }
 
 
