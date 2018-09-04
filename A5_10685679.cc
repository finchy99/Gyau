#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  int sumAge = 0;
  double sumScore = 0;
  int MaleNo = 0;
  int FemaleNo = 0;
struct student

{
 string name;
 string id;
 int age;
 char gender;
 double score;
 char grade;
};
 
student x[2];

for(int i=0 ; i <=1 ; i++)
{
 cout<< "Enter Name: ";
 cin>> x[i].name;
 cout<< "Enter ID number: ";
 cin>> x[i].id;
 cout<< "Enter Age : ";  
 cin>> x[i].age;
 
while(true)
{
 cout<< "Enter Gender : ";
 cin>> x[i].gender ;

  if (x[i].gender == 'M' || x[i].gender == 'F')
break;
}
 while (true)
{
cout<< "Enter Score : ";
cin >>x[i].score;
if(x[i].score >= 0 && x[i].score <= 100)
break;
}
if(x[i].score >=80)
x[i].grade = 'A';
else if (x[i].score >=70 && x[i].score <80)
x[i].grade = 'B' ;
else if (x[i].score >=60 && x[i].score <70)
x[i].grade = 'C';
else if (x[i].score >=50 && x[i].score <60)
x[i].grade = 'D';
else if (x[i].score >=40 && x[i].score <50)
x[i].grade = 'E';
else if (x[i].score >=0 && x[i].score <40)
x[i].grade = 'F';


sumAge += x[i].age;
sumScore += x[i].score;

if(x[i].gender=='M')
MaleNo += 1;
else if(x[i].gender=='F')
FemaleNo += 1;

cout << endl <<endl;
}

fstream file;
file.open("output.txt", ios::out);
for(int i=0; i<=1 ; i++) 
{
file << i+1 <<". ";
file << x[i]. name<<"  ";
file << x[i].id <<"  ";
file << x[i].age <<"  ";
file << x[i].gender <<"  ";
file << x[i].score <<"  ";
file << x[i].grade << endl;

}

file <<endl<< "Average age : "<< sumAge/5<<endl;
file <<"Average score : "<< sumScore/5<<endl;
file<<"Male count : "<< MaleNo<<endl;
file<<"Female count : "<< FemaleNo<<endl;
return 0;
}
