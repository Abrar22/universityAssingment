#include<iostream>
#include<string>
using namespace 
using namespace std;
int main (void)
}
string student_name,student_id;
char debarment;
int result;

cout << "Student name ";
 cin >> student_name;
cout << "student id:";
cin >> studint _id;
 cout << "Department: ";
 cin >> depratment;
 cout << "Result: ";
 cin >> reult;
string division;
char grade;
 // Using if\par
 if(depratment == 'A')
division = "Control"
 else if (depratment == 'T')
 division = "Telecommunication";
 else division = "Unknown";
 // Using switch\par
 switch(depratment)
{ case 'C':
 division = "Computer Engineering";
 break;
 case 'T':
 division = "Telecommunication"
 break;
default: division ="Unknown";
}
 if(result >= 90 && result <= 100) grade = 'A';
 else if(result >= 80 && result< 90) grade = 'B';
 else if(result >= 70 && result < 80) grade = 'C';
 else if(result >= 60 && result < 70) grade = 'D';
 else grade = 'F';
 cout << "Name: " << student_name << endl;
cout << "ID: " << student_id << endl;
 cout << "Grade: " <<"grade << endel";
 return 0;
 }
 