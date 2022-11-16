#include <iostream>
#include "IDontLikeUsingHeaderFileSry:).h"
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

void DispCharStat(){
  cout<<"Anxiety Level - "<<Axlevel<<"%"<<endl;
  cout<<"Intelligence Level - "<<Intlevel<<"%"<<endl;
  cout<<"Morality Level - "<<Mrlevel<<"%"<<endl;
}
};



void BubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void PrintArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void PrintDecrease(string name, string type, int amount){
  cout<<name<<" "<<type<<" level has decreased by "<<amount<<"%"<<endl;
}
void PrintIncrease(string name, string type, int amount){
  cout<<name<<" "<<type<<" level has increased by "<<amount<<"%"<<endl;
}

int main() {
  srand ( time(NULL) );
  void(*ptrPrDe)(string,string,int) = PrintDecrease;
  void(*ptrPrIn)(string,string,int) = PrintIncrease;
  
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
  char FirstTest;
  char Charchoice;
  cout<<"Hi everyone welcome to SH4RKW0WL1FE!"<<endl;
  cout<<"An interactive story game"<<endl;
  cout<<"Designed to raise awareness regarding mental illness"<<endl;
  cout<<"First of all let's choose your character"<<endl;
  cout<<"A B OR C ??"<<endl;
  cin>>Charchoice;
  cout<<""<<endl;
  
  
  if(Charchoice=='A'){
    James.IntroduceYourself();
    cout<<"James is an athelic guy"<<endl;
    cout<<"He is currently majoring in sports science"<<endl;
    cout<<"The physical training test is coming next week"<<endl;
    cout<<"Would you like to prepare for the exam?"<<endl;
    cout<<"Y OR N"<<endl;
    cin>>FirstTest;
    cout<<""<<endl;
    if(FirstTest=='Y'){
    James.Axlevel = James.Axlevel + 15;
    James.Intlevel = James.Intlevel + 20;
    cout<<"James has extremely trained for the exam"<<endl;
    ptrPrIn("James","anxiety", 15);
    ptrPrIn("James","intelligence", 20);
    James.DispCharStat();
    }
    else if(FirstTest=='N'){
      James.Axlevel = James.Axlevel - 10;
      James.Intlevel = James.Intlevel - 15;
      cout<<"James didn't trained for the exam"<<endl;
      ptrPrDe("James","anxiety",10);
      ptrPrDe("James","intelligence",15);
      James.DispCharStat();
    }
  }
    
  else if(Charchoice=='B'){
    Timmy.IntroduceYourself();
    cout<<"Timmy is an energetic guy"<<endl;
    cout<<"He is currently majoring in international business"<<endl;
    cout<<"The financial accounting test is coming next week"<<endl;
    cout<<"Would you like to prepare for the exam?"<<endl;
    cout<<"Y OR N"<<endl;
    cin>>FirstTest;
    cout<<""<<endl;
    if(FirstTest=='Y'){
      Timmy.Axlevel = Timmy.Axlevel + 15;
      Timmy.Intlevel = Timmy.Intlevel + 20;
      cout<<"Timmy has extremely studied for the exam"<<endl;
      ptrPrIn("Timmy","anxiety", 15);
      ptrPrIn("Timmy","intelligence", 20);
      Timmy.DispCharStat();
    }
    else if(FirstTest=='N'){
      Timmy.Axlevel = Timmy.Axlevel - 10;
      Timmy.Intlevel = Timmy.Intlevel - 15;
      cout<<"Timmy didn't studied for the exam"<<endl;
      ptrPrDe("Timmy","anxiety", 10);
      ptrPrDe("Timmy","intelligence", 15);
      Timmy.DispCharStat();
    }
  }
    
  else{
    Bella.IntroduceYourself();
    cout<<"Bella is such a beauty lover"<<endl;
    cout<<"She is currently majoring in media and communication"<<endl;
    cout<<"The Transmedia storytelling test is coming next week"<<endl;
    cout<<"Would you like to prepare for the exam?"<<endl;
    cout<<"Y OR N"<<endl;
    cin>>FirstTest;
    cout<<""<<endl;
    if(FirstTest=='Y'){
      Bella.Axlevel = Bella.Axlevel + 15;
      Bella.Intlevel = Bella.Intlevel + 20;
      cout<<"Bella has extremely studied for the exam"<<endl;
      ptrPrIn("Bella","anxiety", 15);
      ptrPrIn("Bella","intelligence", 20);
      Bella.DispCharStat();
    }
    else if(FirstTest=='N'){
      Bella.Axlevel = Bella.Axlevel - 10;
      Bella.Intlevel = Bella.Intlevel - 15;
      cout<<"Bella didn't studied for the exam"<<endl;
      ptrPrDe("James","anxiety", 10);
      ptrPrDe("James","intelligence", 15);
      Bella.DispCharStat();
      }
  }
    
  if(Charchoice=='A'){
    if(James.Intlevel>=50){
      cout<<"Thanks god, James passed the physical test!"<<endl;
      cout<<""<<endl;
    }
    else if(James.Intlevel<50){
      cout<<"Sadly, James didn't passed the physical test :("<<endl;
      cout<<""<<endl;
    }  
  }
    
  if(Charchoice=='B'){
    if(Timmy.Intlevel>=50){
      cout<<"Thanks god, Timmy passed the accounting exam!"<<endl;
      cout<<""<<endl;
    }
    else if(James.Intlevel<50){
      cout<<"Sadly, Timmy didn't passed the accounting exam :("<<endl;
      cout<<""<<endl;
    }
  }

  if(Charchoice=='C'){
    if(Bella.Intlevel>=50){
      cout<<"Thanks god, Bella passed the transmedia storytelling exam!"<<endl;
      cout<<""<<endl;
    }
    else if(Bella.Intlevel<50){
      cout<<"Sadly, Bella didn't passed the transmedia storytelling exam :("<<endl;
      cout<<""<<endl;
    }
  }

  char CheatQuiz;
  int MathQuiz[] = {8,11,92,17,43,10};
  int N = sizeof(MathQuiz) / sizeof(MathQuiz[0]);
  
  if(Charchoice=='A'){
    cout<<"Currently, James is taking a math quiz"<<endl;
    PrintArray(MathQuiz,N);
    cout<<"James is unsure about his potential"<<endl;
    cout<<"Do you want to cheat the quiz?"<<endl;
    cout<<"Y OR N"<<endl;
    cin>>CheatQuiz;
    cout<<""<<endl;
    if(CheatQuiz=='Y'){
      BubbleSort(MathQuiz,N);
      cout<<"James cheated the math quiz"<<endl;
      PrintArray(MathQuiz,N);
      cout<<"James feel bad about his cheating"<<endl;
      James.Mrlevel = James.Mrlevel - 20;
      James.Axlevel = James.Axlevel - 5;
      James.Intlevel = James.Intlevel - 10;
      ptrPrDe("James","morality", 20);
      ptrPrDe("James","anxiety", 5);
      ptrPrDe("James","intelligence", 10);
      James.DispCharStat();
      cout<<""<<endl;
    }
    else if(CheatQuiz=='N'){
      cout<<"James didn't cheat the math quiz"<<endl;
      James.Mrlevel = James.Mrlevel + 10;
      ptrPrIn("James","morality", 20);
      if(James.Intlevel>=55){
      cout<<"Although James didn't cheat the quiz, he passed"<<endl;
      BubbleSort(MathQuiz,N);
      PrintArray(MathQuiz,N);
      James.Intlevel = James.Intlevel + 5;
      ptrPrIn("James","intelligence", 5);
      James.DispCharStat();
      cout<<""<<endl;
      }
        

      else if(James.Intlevel<55){
        cout<<"James didn't pass the quiz"<<endl;
        PrintArray(MathQuiz,N);
        James.Axlevel = James.Axlevel + 10;
        ptrPrIn("James","anxiety", 10);
        James.DispCharStat();
        cout<<""<<endl;
      }
    }   
  }

  if(Charchoice=='B'){
    cout<<"Currently, Timmy is taking a math quiz"<<endl;
    PrintArray(MathQuiz,N);
    cout<<"Timmy is unsure about his potential"<<endl;
    cout<<"Do you want to cheat the quiz?"<<endl;
    cout<<"Y OR N"<<endl;
    cin>>CheatQuiz;
    cout<<""<<endl;
    if(CheatQuiz=='Y'){
      BubbleSort(MathQuiz,N);
      cout<<"Timmy cheated the math quiz"<<endl;
      PrintArray(MathQuiz,N);
      cout<<"Timmy feel bad about his cheating"<<endl;
      Timmy.Mrlevel = Timmy.Mrlevel - 20;
      Timmy.Axlevel = Timmy.Axlevel - 5;
      Timmy.Intlevel = Timmy.Intlevel - 10;
      ptrPrDe("Timmy","morality", 20);
      ptrPrDe("Timmy","anxiety", 5);
      ptrPrDe("Timmy","intelligence", 10);
      Timmy.DispCharStat();
      cout<<""<<endl;
    }
    else if(CheatQuiz=='N'){
      cout<<"Timmy didn't cheat the math quiz"<<endl;
      Timmy.Mrlevel = Timmy.Mrlevel + 10;
      ptrPrIn("Timmy","morality", 10);
      
      if(Timmy.Intlevel>=55){
      cout<<"Although Timmy didn't cheat the quiz, he passed"<<endl;
      BubbleSort(MathQuiz,N);
      PrintArray(MathQuiz,N);
      Timmy.Intlevel = Timmy.Intlevel + 5;
      ptrPrIn("Timmy","intelligence", 5);
      Timmy.DispCharStat();
      cout<<""<<endl;
      }

      else if(Timmy.Intlevel<55){
        cout<<"Timmy didn't pass the quiz"<<endl;
        PrintArray(MathQuiz,N);
        Timmy.Axlevel = Timmy.Axlevel + 10;
        ptrPrIn("Timmy","anxiety", 10);
        Timmy.DispCharStat();
        cout<<""<<endl;
      }
    }   
  }

  if(Charchoice=='C'){
    cout<<"Currently, Bella is taking a math quiz"<<endl;
    PrintArray(MathQuiz,N);
    cout<<"Bella is unsure about his potential"<<endl;
    cout<<"Do you want to cheat the quiz?"<<endl;
    cout<<"Y OR N"<<endl;
    cin>>CheatQuiz;
    cout<<""<<endl;
    if(CheatQuiz=='Y'){
      BubbleSort(MathQuiz,N);
      cout<<"Bella cheated the math quiz"<<endl;
      PrintArray(MathQuiz,N);
      cout<<"Bella feel bad about her cheating"<<endl;
      Bella.Mrlevel = Bella.Mrlevel - 20;
      Bella.Axlevel = Bella.Axlevel - 5;
      Bella.Intlevel = Bella.Intlevel - 10;
      ptrPrDe("Bella","morality", 20);
      ptrPrDe("Bella","anxiety", 5);
      ptrPrDe("Bella","intelligence", 10);
      Bella.DispCharStat();
    }
    else if(CheatQuiz=='N'){
      cout<<"Bella didn't cheat the math quiz"<<endl;
      Bella.Mrlevel = Bella.Mrlevel + 10;
      ptrPrIn("Bella","morality", 10);
      
      if(Bella.Intlevel>=55){
      cout<<"Although Bella didn't cheat the quiz, she passed"<<endl;
      BubbleSort(MathQuiz,N);
      PrintArray(MathQuiz,N);
      Bella.Intlevel = Bella.Intlevel + 5;
      ptrPrIn("Bella","intelligence", 5);
      Bella.DispCharStat();
      cout<<""<<endl;
      }

      else if(Bella.Intlevel<55){
        cout<<"Bella didn't pass the quiz"<<endl;
        PrintArray(MathQuiz,N);
        Bella.Axlevel = Bella.Axlevel + 10;
        ptrPrIn("Bella","anxiety", 10);
        Bella.DispCharStat();
        cout<<""<<endl;
      }
    }   
  }
    char Familychoice;
    if(Charchoice=='A'){
      cout<<""<<endl;
      cout<<"James has to take Biology midterm exam next friday"<<endl;
      cout<<"James is feeling anxious about the midterm test"<<endl;
      if(James.Axlevel>=62){
      cout<<"Somehow, James couldn't deal with his anxiety"<<endl;
      cout<<"James feel anxious to the point that he experienced insomnia"<<endl;
      cout<<"Since childhood, James always excessively worry about everyday problems"<<endl;
      cout<<"Do you want to consult your family regarding the issue?"<<endl;
      cout<<"Y OR N"<<endl;
      cin>>Familychoice;
      cout<<""<<endl;
      if(Familychoice=='Y'){
        cout<<"James decided to consult his family about his problems"<<endl;
        cout<<"Sadly, his family don't have time for his mental issues"<<endl;
        ptrPrIn("James","anxiety", 10);
        James.Axlevel = James.Axlevel + 10;
        James.DispCharStat();
        cout<<"!Beware of your character's anxiety level!"<<endl;
        cout<<"!Too much anxiety level can cause the character to develop mental illness!"<<endl;
       }
       else if(Familychoice=='N'){
         cout<<"James decided to deal with his problems alone"<<endl;
         cout<<"James belived that his issues is too ridiculous"<<endl;
         ptrPrIn("James","anxiety", 5);
         James.Axlevel = James.Axlevel + 5;
         James.DispCharStat();
         cout<<"!Beware of your character's anxiety level!"<<endl;
        cout<<"!Too much anxiety level can cause the character to develop mental illness!"<<endl;
      }
    }
      else if(James.Axlevel<62){
        cout<<"Surprisingly, James greatly deal with his anxiety"<<endl;
        cout<<"!Beware of your character's anxiety level!"<<endl;
        cout<<"!Too much anxiety level can cause the character to develop mental illness!"<<endl;}
      }
  
    if(Charchoice=='B'){
      cout<<""<<endl;
      cout<<"Timmy has to take business midterm exam next friday"<<endl;
      cout<<"Timmy is feeling anxious about the midterm test"<<endl;
      if(Timmy.Axlevel>=62){
      cout<<"Suddenly, his hand starts shaking immensely"<<endl;
      cout<<"He experienced panic attack in front of his friends"<<endl;
      cout<<"Since middle school, Timmy has encountered this in public"<<endl;
      cout<<"Do you want to consult your family regarding the issue?"<<endl;
      cout<<"Y OR N"<<endl;
      cin>>Familychoice;
      cout<<""<<endl;
      if(Familychoice=='Y'){
        cout<<"Timmy decided to consult his family about his problems"<<endl;
        cout<<"Happily, his family have time for his issues"<<endl;
        ptrPrDe("Timmy","anxiety", 10);
        Timmy.Axlevel = Timmy.Axlevel - 13;
        Timmy.DispCharStat();
        cout<<"!Beware of your character's anxiety level!"<<endl;
        cout<<"!Too much anxiety level can cause the character to develop mental illness!"<<endl;
       }
       else if(Familychoice=='N'){
         cout<<"Timmy decided to not talk about the mental issue"<<endl;
         cout<<"Timmy was afraid that his family will judge him"<<endl;
         ptrPrIn("Timmy","anxiety", 5);
         Timmy.Axlevel = Timmy.Axlevel + 5;
         Timmy.DispCharStat();
         cout<<"!Beware of your character's anxiety level!"<<endl;
        cout<<"!Too much anxiety level can cause the character to develop mental illness!"<<endl;
      }
    }
      else if(Timmy.Axlevel<62){
        cout<<"Surprisingly, Timmy greatly deal with his anxiety"<<endl;
        cout<<"!Beware of your character's anxiety level!"<<endl;
        cout<<"!Too much anxiety level can cause the character to develop mental illness!"<<endl;}
      } 

    if(Charchoice=='C'){
      cout<<""<<endl;
      cout<<"Bella has to take Man and Arts midterm exam next friday"<<endl;
      cout<<"Bella is feeling anxious about the midterm test"<<endl;
      if(Bella.Axlevel>=62){
      cout<<"Somehow, Bella couldn't deal with her anxiety"<<endl;
      cout<<"Bella fear that everyone will judge her if she get low score"<<endl;
      cout<<"Since childhood, Bella has obsessed about how others will view her "<<endl;
      cout<<"Do you want to consult your family regarding the issue?"<<endl;
      cout<<"Y OR N"<<endl;
      cin>>Familychoice;
      cout<<""<<endl;
      if(Familychoice=='Y'){
        cout<<"Bella decided to consult his family about his problems"<<endl;
        cout<<"Sadly, her family judge her and tell her to snap out of it"<<endl;
        ptrPrIn("Bella","anxiety", 10);
        Bella.Axlevel = Bella.Axlevel + 15;
        Bella.DispCharStat();
        cout<<"!Beware of your character's anxiety level!"<<endl;
        cout<<"!Too much anxiety level can cause the character to develop mental illness!"<<endl;
       }
       else if(Familychoice=='N'){
         cout<<"Bella decided to deal with her problems alone"<<endl;
         cout<<"Bella belived that her issues is too ridicul"<<endl;
         ptrPrIn("Bella","anxiety", 5);
         Bella.Axlevel = Bella.Axlevel + 5;
         Bella.DispCharStat();
         cout<<"!Beware of your character's anxiety level!"<<endl;
        cout<<"!Too much anxiety level can cause the character to develop mental illness!"<<endl;
      }
    }
      else if(Bella.Axlevel<62){
        cout<<"Surprisingly, Bella greatly deal with her anxiety"<<endl;
        cout<<"!Beware of your character's anxiety level!"<<endl;
        cout<<"!Too much anxiety level can cause the character to develop mental illness!"<<endl;}
      }

    int Drugchoice;
    if(Charchoice=='A'){
      if(James.Axlevel>=54){
        if(James.Mrlevel<=60){
          cout<<"James had a fight with his best friend"<<endl;
          cout<<"James anxiety has taken over his life these days"<<endl;
          cout<<"His friends offer him ecstasy, saying he will be relaxed"<<endl;
          cout<<"Do you want to take it at home alone or near uni together?"<<endl;
          cout<<"Input 1 for home or 2 for uni"<<endl;
          cin>>Drugchoice;
          if(Drugchoice==1){
            cout<<"James decided to take ecstasy alone at home"<<endl;
            cout<<"James family caught him doing drugs"<<endl;
            cout<<"James had a fight with his family"<<endl;
            ptrPrIn("James","anxiety", 12);
            ptrPrDe("James","morality", 7);
            James.Axlevel = James.Axlevel + 12;
            James.Mrlevel = James.Mrlevel - 7;
            James.DispCharStat();
          }
          else if(Drugchoice==2){
            cout<<"James decided to take ecstasy with his friends near uni"<<endl;
            cout<<"Someone caught them and reported the case to the university"<<endl;
            cout<<"James has been suspended from uni for 2 semesters"<<endl;
            ptrPrIn("James","anxiety", 16);
            ptrPrDe("James","morality", 8);
            James.Axlevel = James.Axlevel + 16;
            James.Mrlevel = James.Mrlevel - 8;
            James.DispCharStat();
          }
        }
      }
    }

      if(Charchoice=='B'){
      if(Timmy.Axlevel>=54){
        if(Timmy.Mrlevel<=60){
          cout<<"Timmy had a fight with his best friend"<<endl;
          cout<<"Timmy anxiety has taken over his life these days"<<endl;
          cout<<"His friends offer him meth, saying he will be relaxed"<<endl;
          cout<<"Do you want to take it at home alone or near uni together?"<<endl;
          cout<<"Input 1 for home or 2 for uni"<<endl;
          cin>>Drugchoice;
          cout<<""<<endl;
          if(Drugchoice==1){
            cout<<"Timmy decided to take meth alone at home"<<endl;
            cout<<"Timmy family caught him doing drugs"<<endl;
            cout<<"Timmy had a fight with his family"<<endl;
            ptrPrIn("Timmy","anxiety", 12);
            ptrPrDe("Timmy","morality", 7);
            Timmy.Axlevel = Timmy.Axlevel + 12;
            Timmy.Mrlevel = Timmy.Mrlevel - 7;
            Timmy.DispCharStat();
          }
          else if(Drugchoice==2){
            cout<<"Timmy decided to take meth with his friends near uni"<<endl;
            cout<<"Someone caught them and reported the case to the university"<<endl;
            cout<<"Timmy has been suspended from uni for 2 semesters"<<endl;
            ptrPrIn("Timmy","anxiety", 16);
            ptrPrDe("Timmy","morality", 8);
            Timmy.Axlevel = Timmy.Axlevel + 16;
            Timmy.Mrlevel = Timmy.Mrlevel - 8;
            Timmy.DispCharStat();
          }
        }
      }
    }

      if(Charchoice=='C'){
      if(Bella.Axlevel>=54){
        if(Bella.Mrlevel<=60){
          cout<<"Bella had a fight with her best friend"<<endl;
          cout<<"Bella anxiety has taken over her life these days"<<endl;
          cout<<"His friends offer her cocaine, saying she will be relaxed"<<endl;
          cout<<"Do you want to take it at home alone or near uni together?"<<endl;
          cout<<"Input 1 for home or 2 for uni"<<endl;
          cin>>Drugchoice;
          cout<<""<<endl;
          if(Drugchoice==1){
            cout<<"Bella decided to take cocaine alone at home"<<endl;
            cout<<"Bella family caught her doing drugs"<<endl;
            cout<<"Bella had a fight with her family"<<endl;
            ptrPrIn("Bella","anxiety", 12);
            ptrPrDe("Bella","morality", 7);
            Bella.Axlevel = Bella.Axlevel + 12;
            Bella.Mrlevel = Bella.Mrlevel - 7;
            Bella.DispCharStat();
          }
          else if(Drugchoice==2){
            cout<<"Bella decided to take cocaine with his friends near uni"<<endl;
            cout<<"Someone caught them and reported the case to the university"<<endl;
            cout<<"Bella has been suspended from uni for 1 month"<<endl;
            ptrPrIn("Bella","anxiety", 16);
            ptrPrDe("Bella","morality", 8);
            Bella.Axlevel = Bella.Axlevel + 16;
            Bella.Mrlevel = Bella.Mrlevel - 8;
            Bella.DispCharStat();
          }
        }
      }
    }

      char Counselingchoice;
      char Consug;
       if(Charchoice=='A'){
         cout<<"James always feel that his anxiety is more intense than others"<<endl;
         cout<<"James has lived with this issue since his childhood"<<endl;
         cout<<"James heared that MUIC offer free counseling service"<<endl;
         cout<<"Do you want to seek help?"<<endl;
         cout<<"Y OR N"<<endl;
         cin>>Counselingchoice;
         cout<<""<<endl;
         if(Counselingchoice=='Y'){
           cout<<"James decided to have an appointment with MUIC counselor"<<endl;
           cout<<"The counselor said that it seems like he has a mental disorder"<<endl;
           cout<<"Generalized anxiety disorder is the disorder he talked about"<<endl;
           cout<<"He suggests James to see psychiatrist since only the consult isn't enough"<<endl;
           cout<<"Do you want to follow the counselor's suggestion?"<<endl;
           cout<<"Y OR N"<<endl;
           cin>>Consug;
           cout<<""<<endl;
           if(Consug=='Y'){
           cout<<"James decided to follow the advice"<<endl;
           cout<<"James was diagnosed with generalized anxiety disorder"<<endl;
           cout<<"The psychiatrist said that the disorder may develop since childhood"<<endl;
           cout<<"James decided to follow the treatment he suggested"<<endl;
           cout<<"James used to think that he is a freak"<<endl;
           cout<<"The therapist educated him about the mental disorder"<<endl;
           cout<<"James feel relieved because now he understands his illness"<<endl;
           James.Axlevel = James.Axlevel - 10;
           ptrPrDe("James","anxiety",10);
           James.DispCharStat();
             }
           else if(Consug=='N'){
           cout<<"James believed that only the consult is enough"<<endl;
           cout<<"James mental health has started to go downhill lately"<<endl;
           cout<<"James don't know how to cope with his worries"<<endl;
           cout<<"James seems to have horrible coping mechanism"<<endl;
           cout<<"James started to be toxic towards everyone"<<endl;
           James.Axlevel = James.Axlevel + 20;
           James.Mrlevel = James.Mrlevel - 15;
           ptrPrIn("James","anxiety",20);
           ptrPrDe("James","morality",15);
           James.DispCharStat();
           }
           }
           
         else if(Counselingchoice=='N'){
          cout<<"James belived that he can deal with the issue alone"<<endl;
          cout<<"James mental health has started to go downhill lately"<<endl;
          cout<<"James don't know how to cope with his worries"<<endl;
          cout<<"James seems to have horrible coping mechanism"<<endl;
          cout<<"James started to be toxic towards everyone"<<endl;
          James.Axlevel = James.Axlevel + 20;
          James.Mrlevel = James.Mrlevel - 15;
          ptrPrIn("James","anxiety",20);
          ptrPrDe("James","morality",15);
          James.DispCharStat();
          }
         }
  
       if(Charchoice=='B'){
         cout<<"Timmy always fear that he will have panic attacks in public"<<endl;
         cout<<"Timmy has countless panic attacks since his childhood"<<endl;
         cout<<"Timmy heared that MUIC offer free counseling service"<<endl;
         cout<<"Do you want to seek help?"<<endl;
         cout<<"Y OR N"<<endl;
         cin>>Counselingchoice;
         cout<<""<<endl;
         if(Counselingchoice=='Y'){
           cout<<"Timmy decided to have an appointment with MUIC counselor"<<endl;
           cout<<"The counselor said that it seems like he has a mental disorder"<<endl;
           cout<<"Panic disorder is the disorder he talked about"<<endl;
           cout<<"He suggests Timmy to see psychiatrist since only the consult isn't enough"<<endl;
           cout<<"Do you want to follow the counselor's suggestion?"<<endl;
           cout<<"Y OR N"<<endl;
           cin>>Consug;
           cout<<""<<endl;
           if(Consug=='Y'){
           cout<<"Timmy decided to follow the advice"<<endl;
           cout<<"Timmy was diagnosed with panic disorder"<<endl;
           cout<<"The psychiatrist said that the disorder may develop in adulthood"<<endl;
           cout<<"Timmy decided to follow the treatment he suggested"<<endl;
           cout<<"Timmy used to think that his illness is untreatable"<<endl;
           cout<<"The therapist educated him about the panic disorder"<<endl;
           cout<<"Timmy feel relieved because now he knows it is treatable"<<endl;
           Timmy.Axlevel = Timmy.Axlevel - 10;
           ptrPrDe("Timmy","anxiety",10);
           Timmy.DispCharStat();
             }
           else if(Consug=='N'){
           cout<<"Timmy believed that only the consult is enough"<<endl;
           cout<<"Timmy mental health has started to go downhill lately"<<endl;
           cout<<"Timmy is now afraid of his panic attacks more than before"<<endl;
           cout<<"Timmy seems to have horrible coping mechanism"<<endl;
           cout<<"Timmy started to be toxic towards everyone"<<endl;
           Timmy.Axlevel = Timmy.Axlevel + 20;
           Timmy.Mrlevel = Timmy.Mrlevel - 15;
           ptrPrIn("Timmy","anxiety",20);
           ptrPrDe("Timmy","morality",15);
           Timmy.DispCharStat();
           }
         }
         else if(Counselingchoice=='N'){
          cout<<"Timmy belived that he can deal with the issue alone"<<endl;
          cout<<"Timmy mental health has started to go downhill lately"<<endl;
          cout<<"Timmy is now afraid of his panic attacks more than before"<<endl;
          cout<<"Timmy seems to have horrible coping mechanism"<<endl;
          cout<<"Timmy started to be toxic towards everyone"<<endl;
          Timmy.Axlevel = Timmy.Axlevel + 20;
          Timmy.Mrlevel = Timmy.Mrlevel - 15;
          ptrPrIn("Timmy","anxiety",20);
          ptrPrDe("Timmy","morality",15);
          Timmy.DispCharStat();
         }
       }
  
       if(Charchoice=='C'){
         cout<<"Bella always avoid social activites or making eye contact"<<endl;
         cout<<"Bella often feel like everyone is watching and judging her looks "<<endl;
         cout<<"Bella heared that MUIC offer free counseling service"<<endl;
         cout<<"Do you want to seek help?"<<endl;
         cout<<"Y OR N"<<endl;
         cin>>Counselingchoice;
         cout<<""<<endl;
         if(Counselingchoice=='Y'){
           cout<<"Bella decided to have an appointment with MUIC counselor"<<endl;
           cout<<"The counselor said that it seems like she has a mental disorder"<<endl;
           cout<<"Social anxiety disorder is the disorder she talked about"<<endl;
           cout<<"He suggests Bella to see psychiatrist since only the consult isn't enough"<<endl;
           cout<<"Do you want to follow the counselor's suggestion?"<<endl;
           cout<<"Y OR N"<<endl;
           cin>>Consug;
           cout<<""<<endl;
           if(Consug=='Y'){
           cout<<"Bella decided to follow the advice"<<endl;
           cout<<"Bella was diagnosed with social anxiety disorder"<<endl;
           cout<<"The psychiatrist said that it may caused by her traumatic events"<<endl;
           cout<<"Bella decided to follow the treatment he suggested"<<endl;
           cout<<"Bella used to think that she is the problem"<<endl;
           cout<<"The therapist educated her about social anxiety disorder"<<endl;
           cout<<"Bella feel relieved because now she understands her illness"<<endl;
           Bella.Axlevel = Bella.Axlevel - 10;
           ptrPrDe("Bella","anxiety",10);
           Bella.DispCharStat();
             }
           else if(Consug=='N'){
           cout<<"Bella believed that only the consult is enough"<<endl;
           cout<<"Bella mental health has started to go downhill lately"<<endl;
           cout<<"Bella started to isolate herself from the world"<<endl;
           cout<<"Bella seems to have horrible coping mechanism"<<endl;
           cout<<"Bella started to be toxic towards everyone"<<endl;
           Bella.Axlevel = Bella.Axlevel + 20;
           Bella.Mrlevel = Bella.Mrlevel - 15;
           ptrPrIn("Bella","anxiety",20);
           ptrPrDe("Bella","morality",15);
           Bella.DispCharStat();
           }
         }
         else if(Counselingchoice=='N'){
          cout<<"Bella believed that only the consult is enough"<<endl;
          cout<<"Bella mental health has started to go downhill lately"<<endl;
          cout<<"Bella started to isolate herself from the world"<<endl;
          cout<<"Bella seems to have horrible coping mechanism"<<endl;
          cout<<"Bella started to be toxic towards everyone"<<endl;
          Bella.Axlevel = Bella.Axlevel + 20;
          Bella.Mrlevel = Bella.Mrlevel - 15;
          ptrPrIn("Bella","anxiety",20);
          ptrPrDe("Bella","morality",15);
          Bella.DispCharStat();
         }
         }

         char Finalexam;
         if(Charchoice=='A'){
         cout<<""<<endl;
         cout<<"James has to take chemistry final exam next friday"<<endl;
         cout<<"Would you like to prepare for the exam?"<<endl;
         cout<<"Y OR N"<<endl;
         cin>>Finalexam;
         cout<<""<<endl;
         if(Finalexam=='Y'){
         if(James.Intlevel>=55){
         cout<<"James decided to prepare for the exam"<<endl;
         cout<<"James didn't study for the test so extreme"<<endl;
         cout<<"Since James already understands the lessons to some extent"<<endl;
         James.Intlevel = James.Intlevel + 10;
         James.Axlevel = James.Axlevel + 5;
         ptrPrIn("James","intelligence",10);
         ptrPrIn("James","anxiety",5);
         James.DispCharStat();
         }
         else if(James.Axlevel<=55){
         cout<<"James decided to prepare for the exam"<<endl;
         cout<<"James studied for the test too extreme"<<endl;
         cout<<"However, cramming isn't a wise choice"<<endl;
         cout<<"James couldn't memorize all the lessons"<<endl;
         James.Intlevel = James.Intlevel + 4;
         James.Axlevel = James.Axlevel + 12;
         ptrPrIn("James","intelligence",4);
         ptrPrIn("James","anxiety",12);
         James.DispCharStat();
         }
         }
         else if(Finalexam=='N'){
         cout<<"James decided to not prepare for the exam"<<endl;
         cout<<"James believed that he could deal with it"<<endl;
         }
         if(James.Intlevel>=65){
           cout<<""<<endl;
           cout<<"Due to his dedication, James passed the final exam"<<endl;
           cout<<"James feel more relaxed and clever at the same time"<<endl;
           James.Intlevel = James.Intlevel + 6;
           James.Axlevel = James.Axlevel - 5;
           ptrPrIn("James","intelligence",6);
           ptrPrDe("James","anxiety",5);
           James.DispCharStat();
         }
           else if(James.Intlevel<=65){
           cout<<""<<endl;
           cout<<"Somehow, James didn't pass the final exam"<<endl;
           cout<<"James is now feel anxious and unsure about his life"<<endl;
           James.Intlevel = James.Intlevel - 6;
           James.Axlevel = James.Axlevel + 8;
           ptrPrDe("James","intelligence",6);
           ptrPrIn("James","anxiety",8);
           James.DispCharStat();
           }
           }

         if(Charchoice=='B'){
         cout<<""<<endl;
         cout<<"Timmy has to take human resource management final exam next friday"<<endl;
         cout<<"Would you like to prepare for the exam?"<<endl;
         cout<<"Y OR N"<<endl;
         cin>>Finalexam;
         cout<<""<<endl;
         if(Finalexam=='Y'){
         if(Timmy.Intlevel>=55){
         cout<<"Timmy decided to prepare for the exam"<<endl;
         cout<<"Timmy didn't study for the test so extreme"<<endl;
         cout<<"Since Timmy already understands the lessons to some extent"<<endl;
         Timmy.Intlevel = Timmy.Intlevel + 10;
         Timmy.Axlevel = Timmy.Axlevel + 5;
         ptrPrIn("Timmy","intelligence",10);
         ptrPrIn("Timmy","anxiety",5);
         Timmy.DispCharStat();
         }
         else if(Timmy.Axlevel<=55){
         cout<<"Timmy decided to prepare for the exam"<<endl;
         cout<<"Timmy studied for the test too extreme"<<endl;
         cout<<"However, cramming isn't a wise choice"<<endl;
         cout<<"Timmy couldn't memorize all the lessons"<<endl;
         Timmy.Intlevel = Timmy.Intlevel + 4;
         Timmy.Axlevel = Timmy.Axlevel + 12;
         ptrPrIn("Timmy","intelligence",4);
         ptrPrIn("Timmy","anxiety",12);
         Timmy.DispCharStat();
         }
         }
         else if(Finalexam=='N'){
         cout<<"Timmy decided to not prepare for the exam"<<endl;
         cout<<"Timmy believed that he could deal with it"<<endl;
         }
         if(Timmy.Intlevel>=65){
           cout<<""<<endl;
           cout<<"Due to his dedication, Timmy passed the final exam"<<endl;
           cout<<"Timmy feel more relaxed and clever at the same time"<<endl;
           Timmy.Intlevel = Timmy.Intlevel + 6;
           Timmy.Axlevel = Timmy.Axlevel - 5;
           ptrPrIn("Timmy","intelligence",6);
           ptrPrDe("Timmy","anxiety",5);
           Timmy.DispCharStat();
         }
           else if(Timmy.Intlevel<=65){
           cout<<""<<endl;
           cout<<"Somehow, Timmy didn't pass the final exam"<<endl;
           cout<<"Timmy is now feel anxious and unsure about his life"<<endl;
           Timmy.Intlevel = Timmy.Intlevel - 6;
           Timmy.Axlevel = James.Axlevel + 8;
           ptrPrDe("Timmy","intelligence",6);
           ptrPrIn("Timmy","anxiety",8);
           Timmy.DispCharStat();
           }
           }

         if(Charchoice=='C'){
         cout<<""<<endl;
         cout<<"Bella has to take academic writing and research II final exam next friday"<<endl;
         cout<<"Would you like to prepare for the exam?"<<endl;
         cout<<"Y OR N"<<endl;
         cin>>Finalexam;
         cout<<""<<endl;
         if(Finalexam=='Y'){
         if(Bella.Intlevel>=55){
         cout<<"Bella decided to prepare for the exam"<<endl;
         cout<<"Bella didn't study for the test so extreme"<<endl;
         cout<<"Since Bella already understands the lessons to some extent"<<endl;
         Bella.Intlevel = Bella.Intlevel + 10;
         Bella.Axlevel = Bella.Axlevel + 5;
         ptrPrIn("Bella","intelligence",10);
         ptrPrIn("Bella","anxiety",5);
         Bella.DispCharStat();
         }
         else if(Bella.Axlevel<=55){
         cout<<"Bella decided to prepare for the exam"<<endl;
         cout<<"Bella studied for the test too extreme"<<endl;
         cout<<"However, cramming isn't a wise choice"<<endl;
         cout<<"Bella couldn't memorize all the lessons"<<endl;
         Bella.Intlevel = Bella.Intlevel + 4;
         Bella.Axlevel = Bella.Axlevel + 12;
         ptrPrIn("Bella","intelligence",4);
         ptrPrIn("Bella","anxiety",12);
         Bella.DispCharStat();
         }
         }
         else if(Finalexam=='N'){
         cout<<"Bella decided to not prepare for the exam"<<endl;
         cout<<"Bella believed that she could deal with it"<<endl;
         }
         if(Bella.Intlevel>=65){
           cout<<""<<endl;
           cout<<"Due to her dedication, Bella passed the final exam"<<endl;
           cout<<"Bella feel more relaxed and clever at the same time"<<endl;
           Bella.Intlevel = Bella.Intlevel + 6;
           Bella.Axlevel = Bella.Axlevel - 5;
           ptrPrIn("Bella","intelligence",6);
           ptrPrDe("Bella","anxiety",5);
           Bella.DispCharStat();
         }
           else if(Bella.Intlevel<=65){
           cout<<""<<endl;
           cout<<"Somehow, Bella didn't pass the final exam"<<endl;
           cout<<"Bella is now feel anxious and unsure about her life"<<endl;
           Bella.Intlevel = Bella.Intlevel - 6;
           Bella.Axlevel = Bella.Axlevel + 8;
           ptrPrDe("Bella","intelligence",6);
           ptrPrIn("Bella","anxiety",8);
           Bella.DispCharStat();
           }
           }
  
  
  return 0;

         }