#include <iostream>
#include "maincharacters.h"
#include <ctime>

using namespace std;
class Student {
public:
string Name;
int Age;
int Axlevel;
int Intlevel;
int Mrlevel;
void setname(string name){
  Name = name;
}
string getname(){
  return Name;
}
void setage(int age){
  Age = age;
}
int getage(){
  return Age;
}

void IntroduceYourself(){
  cout<<"Name - "<<Name<<endl;
  cout<<"Age - "<<Age<<endl;
  cout<<"Anxiety Level - "<<Axlevel<<"%"<<endl;
  cout<<"Intelligence Level - "<<Intlevel<<"%"<<endl;
  cout<<"Morality Level - "<<Mrlevel<<"%"<<endl;
}

};

int main() {
  srand ( time(NULL) );

  Student James;
  James.Name = "James";
  James.Age = 19 ;
  James.Axlevel= (1 + (rand() % 60));
  James.Intlevel= (25 + (rand() % 50));
  James.Mrlevel= (35 + (rand() % 65));
  

  Student Timmy;
  Timmy.Name = "Timmy";
  Timmy.Age = 20;
  Timmy.Axlevel= (1 + (rand() % 60));
  Timmy.Intlevel= (25 + (rand() % 50));
  Timmy.Mrlevel= (35 + (rand() % 65));

  Student Bella;
  Bella.Name = "Bella";
  Bella.Age = 18;
  Bella.Axlevel= (1 + (rand() % 60));
  Bella.Intlevel= (25 + (rand() % 50));
  Bella.Mrlevel= (35 + (rand() % 65));
  
  char Choice;
  cout<<"Hi everyone welcome to SH4RKW0WL1FE!"<<endl;
  cout<<"An interactive story game"<<endl;
  cout<<"Designed to raise awareness regarding mental illness"<<endl;
  cout<<"First of all let's choose your character"<<endl;
  cout<<"A B OR C ??"<<endl;
  cin>>Choice;
  if(Choice=='A'){
    James.IntroduceYourself();
  }
  else if(Choice=='B'){
    Timmy.IntroduceYourself();
  }
  else{
    Bella.IntroduceYourself();
  }
  
  cout<<""<<endl;
  
  
  
  
  
  
  
  
 
  
  
  return 0;
}