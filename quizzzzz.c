#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&name,&s);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }



void help()
 {
 system("cls");
 printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
 printf("\n\n\tknowledge questions and the right answer is to be chosen among");
 printf("\n\n\tthe four options provided. Your score will be calculated at the");
 printf("\n\n\tend. Remember that the more quicker you give answer the more");
 printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
 printf("\n\n\tat the end and displayed. If you secure highest score, your score");
 printf("\n\n\twill be recorded. So BEST OF LUCK.");
 }
void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }
int main()
     {
     int countq,countr;
     int r,i;
     int pa;int nq[6];int w;
     float score;
     char choice;
     char playername[20];
     time_t initialtime,finaltime;
     system("cls");
     //randomize();
     mainhome:
     system("cls");
     puts("\n\t\t WELCOME TO I.Q. TEST PROGRAM\n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to start game       ");
     puts("\n\t\t Enter 'V' to view high score  ");
     puts("\n\t\t Enter 'H' for help            ");
     puts("\n\t\t Enter 'Q' to quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());
     if (choice=='V')
 {
 displayscore();
 goto mainhome;
 }
     else if (choice=='Q')
 exit(1);
     else if (choice=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(choice=='S'){
     system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%23+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nWhat is the maximum no. of asymptotes of the curve x^4+2x+6=0?");
  printf("\n\nA.4\tB.3\n\nC.none\tD.infinite\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.4");break;}

  case 2:
  printf("\n\n\nHow many points are possible in a compound pendulum about which");
  printf("time period is same?");
  printf("\n\nA.4\tB.2\n\nC.none\tD.infinite\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         printf("\n\nWrong!!! The correct answer is A.4");
  break;

  case 3:
  printf("\n\n\nWhat is the largest ocean in the world?");
  printf("\n\nA.The Indian Ocean\tB.The Atlantic Ocean\n\nC.The Arctic Ocean\tD.The Pacific Ocean\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.The Pacific Ocean");break;}


  case 4:
  printf("\n\n\nWhich is called the land of the rising sun?");
  printf("\n\nA.Japan\tB.India\n\nC.Australia\tD.Bangladesh\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Japan");break;}


  case 5:
  printf("\n\n\nSecond world war began in?");
  printf("\n\nA.1938\tB.1914\n\nC.1928\tD.1945\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.1938");break;}

  case 6:
  printf("\n\n\nWhich syllabe is stressed in the word 'democracy'?");
  printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
  countq++;
  if (toupper(getch())=='B' )
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.2nd");break;}


  case 7:
  printf("\n\n\nLargest gland in the human body is?");
  printf("\n\nA.Adrenal\tB.Pituitary\n\nC.Liver\t\tD.Gastric gland\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Liver");break;}


  case 8:
  printf("\n\n\nWhat is the height of Mount everest in feet?");
  printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.8848");break;}


  case 9:
  printf("\n\n\nWhat is the capital of Bulgeria?");
  printf("\n\nA.Sofia\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Sofia");break;}


  case 10:
  printf("\n\n\nWhich syllable is stressed in the word 'instanteneous'?");
  printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.3rd");break;}


  case 11:
  printf("\n\n\nWhat is the largest organ in the body?");
  printf("\n\nA.Eyes\tB.Tongue\n\nC.Skin\tD.Nose\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Skin");break;}

  case 12:
  printf("\n\n\nWhat is the chemical name of common salt?");
  printf("\n\nA.Magnesium Chloride\tB.Sodium Chloride\n\nC.Calcium Chloride\tD.Potassium Chloride\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Sodium Chloride");break;}

  case 13:
  printf("\n\n\nWho is the last Mughal Emperor?");
  printf("\n\nA.Akbar\tB.Babar\n\nC.Humayun\tD.Jahangir\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Akbar");break;}

  case 14:
  printf("\n\n\nWho is the author of 'The Alchemist'?");
  printf("\n\nA.Paulo Coelho\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\tD.Khagendra Sangraula\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Paulo Coelho");break;}

  case 15:
  printf("\n\n\nWhich country is Maria Sarapova from?");
  printf("\n\nA.Russia\tB.Switzerland\n\nC.Argentina\tD.Spain\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Russia");break;}

  case 16:
  printf("\n\n\nWhen did Mother Teresa win the noble prize?");
  printf("\n\nA.1977\tB.1979\n\nC.1958\tD.1925\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.1979");break;}


  case 17:
  printf("\n\n\nWhat is the smallest district of Bangladesh?");
  printf("\n\nA.Nilphamari\tB.Dinajpur\n\nC.Meherpur\tD.Chittagong\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Meherpur");break;}

  case 18:
  printf("\n\n\nWho is the architect of IUT?");
  printf("\n\nA.Lois Kahn\tB.I.M Pei\n\nC.Zaha Hadid\tD.Pamir Mehmet\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Pamir Mehmet");break;}

  case 19:
  printf("\n\n\nWhat is the largest sea beach in the world '?");
  printf("\n\nA.Goa\tB.Inani\n\nC.Cox's Bazar\tD.Potenga\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Cox's Bazar");break;}

  case 20:
  printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
  printf("\n\nA.Rome\tB.Vactican City\n\nC.Madrid\tD.Berlin\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Rome");break;}

  case 21:
  printf("\n\n\nWhat is the longest mountain range in the world?");
  printf("\n\nA.The Himalayas\tB.The Rockies\n\nC.The Andes\tD.The Alpes\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.The Andes");break;}

  case 22:
  printf("\n\n\nWhat is the most populous city in the world?");
  printf("\n\nA.London\tB.Mumbai\n\nC.Dhaka\tD.Tokyo\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Tokyo");break;}

  case 23:
  printf("\n\n\nName the country where there no mosquito is found?");
  printf("\n\nA.Germany\tB.Spain\n\nC.Japan\tD.France\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.France");break;}



  }
 i++;
 if (i<=5) goto start;
 finaltime=time(NULL);
 score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  writescore(score,playername);
  goto mainhome;
  }
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 Sleep(700);
 goto mainhome;
 }
 return 0;
}

