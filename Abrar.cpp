#include <fstream>
ofstream file("file.txt");
file <<"Hello,World";

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

file << "Student name ";
 cin >> student_name;
 students[i][0] = student_name;
file << "student id:";
cin>>student_id;
students[i][1] = student_id;
 file << "Department: ";
 cin >> debarment;
 dep[i] = debarment;
 file <<"Enter the data for 8 items "<<endl;
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
 		file<<"NAME :"<<students[i][0]<<endl;
 		file<<"ID: " <<students[i][1]<<endl;
 		
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
 		file<<"debarment: "<<division<<endl;
 		file<<"average = "<<avg[i]<<endl;
 		
		if(avg[i]>= 90 && avg[i] <= 100)  file<<"General appreciation : Excellent"<<endl;
 		else if(avg[i] >= 70 && avg[i] < 80) file<<"General appreciation : Good"<<endl;
 		else if(avg[i] >= 50 && avg[i] < 70) file<<"General appreciation : Average"<<endl;
 		else if(avg[i] <50) file<<"General appreciation : Bad"<<endl;
	 
 }
}


int main (void)
{

 input ();
output ();

 return 0;
 }
 