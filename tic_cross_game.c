#include <string.h>
#include <stdio.h>

// random_number libraries

#include<stdlib.h>
#include <time.h>

//functions
//function for checking the winner
int winning_function(char TK_l[],char Player[]){
    char tk; // TK list --TK_l

    if (strcmp(Player, "computer") == 0) {
        tk = 't';
    } else {
        tk = 'c';
    }

    
    if(TK_l[0] == tk && TK_l[1]==tk && TK_l[2]==tk){
        return 1;

    }
    else if(TK_l[3] == tk && TK_l[4]==tk && TK_l[5]==tk){
        return 1;

    }
    else if(TK_l[6] == tk && TK_l[7]==tk && TK_l[8]==tk){
        return 1;

    }
    else if(TK_l[0] == tk && TK_l[4]==tk && TK_l[8]==tk){
        return 1;

    }
    else if(TK_l[2] == tk && TK_l[4]==tk && TK_l[6]==tk){
        return 1;

    }
    else if(TK_l[0] == tk && TK_l[3]==tk && TK_l[6]==tk){
        return 1;

    }
    
    else if(TK_l[1] == tk && TK_l[4]==tk && TK_l[7]==tk){
        return 1;

    }
    else if(TK_l[2] == tk && TK_l[5]==tk && TK_l[8]==tk){
        return 1;
}
    else{
        return 2;
    }}
   
int main() {
    char TK_list[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};//tick or cross list
while(1){
//    variables decleration
 int conditions_satified = 0;
 int user_input;
 
//  taking input from user
while(1){
 printf("enter you enput enter the index where you want to add tick");
  
 scanf("%d",&user_input);
 if (TK_list[user_input]==' '){
    TK_list[user_input]='c';
    break;
 }
 else{
    continue;
}
 
}
//computer trying to win
// for horizontal rows
// for first row
if(TK_list[0] == 't' && TK_list[1]=='t'&& TK_list[2]==' '&& conditions_satified==0){
        TK_list[2]='t';conditions_satified=1;}
else if(TK_list[0] == 't' && TK_list[2]=='t'&& TK_list[1]==' '&& conditions_satified==0){
        TK_list[1]='t';conditions_satified=1;}
else if(TK_list[1] == 't' && TK_list[2]=='t'&& TK_list[0]==' '&& conditions_satified==0){
        TK_list[0]='t';conditions_satified=1;}
// for second row
else if(TK_list[3] == 't' && TK_list[4]=='t'&& TK_list[5]==' '&& conditions_satified==0){
        TK_list[5]='t';conditions_satified=1;}
else if(TK_list[4] == 't' && TK_list[5]=='t'&& TK_list[3]==' '&& conditions_satified==0){
        TK_list[3]='t';conditions_satified=1;}
else if(TK_list[3] == 't' && TK_list[5]=='t'&& TK_list[4]==' '&& conditions_satified==0){
        TK_list[4]='t';conditions_satified=1;}
// for third row
else if(TK_list[6] == 't' && TK_list[7]=='t'&& TK_list[8]==' '&& conditions_satified==0){
        TK_list[8]='t';conditions_satified=1;}
else if(TK_list[7] == 't' && TK_list[8]=='t'&& TK_list[6]==' '&& conditions_satified==0){
        TK_list[6]='t';conditions_satified=1;}
else if(TK_list[6] == 't' && TK_list[8]=='t'&& TK_list[7]==' '&& conditions_satified==0){
        TK_list[7]='t';conditions_satified=1;}
//for veritcle columns 
// for first column
else if(TK_list[0] == 't' && TK_list[3]=='t'&& TK_list[6]==' '&& conditions_satified==0){
        TK_list[6]='t';conditions_satified=1;}
else if(TK_list[0] == 't' && TK_list[6]=='t'&& TK_list[3]==' '&& conditions_satified==0){
        TK_list[3]='t';conditions_satified=1;}
else if(TK_list[3] == 't' && TK_list[6]=='t'&& TK_list[0]==' '&& conditions_satified==0){
        TK_list[0]='t';conditions_satified=1;}
// for second column
else if(TK_list[1] == 't' && TK_list[4]=='t'&& TK_list[7]==' '&& conditions_satified==0){
        TK_list[7]='t';conditions_satified=1;}
else if(TK_list[1] == 't' && TK_list[7]=='t'&& TK_list[4]==' '&& conditions_satified==0){
        TK_list[4]='t';conditions_satified=1;}
else if(TK_list[4] == 't' && TK_list[7]=='t'&& TK_list[1]==' '&& conditions_satified==0){
        TK_list[1]='t';conditions_satified=1;}
// for third column
else if(TK_list[2] == 't' && TK_list[5]=='t'&& TK_list[8]==' '&& conditions_satified==0){
        TK_list[8]='t';conditions_satified=1;}
else if(TK_list[2] == 't' && TK_list[8]=='t'&& TK_list[5]==' '&& conditions_satified==0){
        TK_list[5]='t';conditions_satified=1;}
else if(TK_list[5] == 't' && TK_list[8]=='t'&& TK_list[2]==' '&& conditions_satified==0){
        TK_list[2]='t';conditions_satified=1;}
// for first diagonal
else if(TK_list[0] == 't' && TK_list[4]=='t'&& TK_list[8]==' '&& conditions_satified==0){
        TK_list[8]='t';conditions_satified=1;}
else if(TK_list[4] == 't' && TK_list[8]=='t'&& TK_list[0]==' '&& conditions_satified==0){
        TK_list[0]='t';conditions_satified=1;}
else if(TK_list[0] == 't' && TK_list[8]=='t'&& TK_list[4]==' '&& conditions_satified==0){
        TK_list[4]='t';conditions_satified=1;}
// for second diagonal
else if(TK_list[2] == 't' && TK_list[4]=='t'&& TK_list[6]==' '&& conditions_satified==0){
        TK_list[6]='t';conditions_satified=1;}
else if(TK_list[2] == 't' && TK_list[6]=='t'&& TK_list[4]==' '&& conditions_satified==0){
        TK_list[4]='t';conditions_satified=1;}
else if(TK_list[4] == 't' && TK_list[6]=='t'&& TK_list[2]==' '&& conditions_satified==0){
        TK_list[2]='t';conditions_satified=1;}

 //computer trying to stop user
 //for horizontal rows
// for first row
else if(TK_list[0] == 'c' && TK_list[1]=='c'&& TK_list[2]==' '&& conditions_satified==0){
        TK_list[2]='t';conditions_satified=1;}
else if(TK_list[0] == 'c' && TK_list[2]=='c'&& TK_list[1]==' '&& conditions_satified==0){
        TK_list[1]='t';conditions_satified=1;}
else if(TK_list[1] == 'c' && TK_list[2]=='c'&& TK_list[0]==' '&& conditions_satified==0){
        TK_list[0]='t';conditions_satified=1;}
// for second row
else if(TK_list[3] == 'c' && TK_list[4]=='c'&& TK_list[5]==' '&& conditions_satified==0){
        TK_list[5]='t';conditions_satified=1;}
else if(TK_list[4] == 'c' && TK_list[5]=='c'&& TK_list[3]==' '&& conditions_satified==0){
        TK_list[3]='t';conditions_satified=1;}
else if(TK_list[3] == 'c' && TK_list[5]=='c'&& TK_list[4]==' '&& conditions_satified==0){
        TK_list[4]='t';conditions_satified=1;}
// for third row
else if(TK_list[6] == 'c' && TK_list[7]=='c'&& TK_list[8]==' '&& conditions_satified==0){
        TK_list[8]='t';conditions_satified=1;}
else if(TK_list[7] == 'c' && TK_list[8]=='c'&& TK_list[6]==' '&& conditions_satified==0){
        TK_list[6]='t';conditions_satified=1;}
else if(TK_list[6] == 'c' && TK_list[8]=='c'&& TK_list[7]==' '&& conditions_satified==0){
        TK_list[7]='t';conditions_satified=1;}
//computer trying to block user
//for verticle columns
// for first column
else if(TK_list[0] == 'c' && TK_list[3]=='c'&& TK_list[6]!=' '&& conditions_satified==0){
        TK_list[6]='t';conditions_satified=1;}
else if(TK_list[0] == 'c' && TK_list[6]=='c'&& TK_list[3]==' '&& conditions_satified==0){
        TK_list[3]='t';conditions_satified=1;}
else if(TK_list[3] == 'c' && TK_list[6]=='c'&& TK_list[0]==' '&& conditions_satified==0){
        TK_list[0]='t';conditions_satified=1;}
// for second column
else if(TK_list[1] == 'c' && TK_list[4]=='c'&& TK_list[7]==' '&& conditions_satified==0){
        TK_list[7]='t';conditions_satified=1;}
else if(TK_list[1] == 'c' && TK_list[7]=='c'&& TK_list[4]==' '&& conditions_satified==0){
        TK_list[4]='t';conditions_satified=1;}
else if(TK_list[4] == 'c' && TK_list[7]=='c'&& TK_list[1]==' '&& conditions_satified==0){
        TK_list[1]='t';conditions_satified=1;}
// for third column
else if(TK_list[2] == 'c' && TK_list[5]=='c'&& TK_list[8]==' '&& conditions_satified==0){
        TK_list[8]='t';conditions_satified=1;}
else if(TK_list[2] == 'c' && TK_list[8]=='c'&& TK_list[5]==' '&& conditions_satified==0){
        TK_list[5]='t';conditions_satified=1;}
else if(TK_list[5] == 'c' && TK_list[8]=='c'&& TK_list[2]==' '&& conditions_satified==0){
        TK_list[2]='t';conditions_satified=1;}
// for first diagonal
else if(TK_list[0] == 'c' && TK_list[4]=='c'&& TK_list[8]==' '&& conditions_satified==0){
        TK_list[8]='t';conditions_satified=1;}
else if(TK_list[4] == 'c' && TK_list[8]=='c'&& TK_list[0]==' '&& conditions_satified==0){
        TK_list[0]='t';conditions_satified=1;}
else if(TK_list[0] == 'c' && TK_list[8]=='c'&& TK_list[4]==' '&& conditions_satified==0){
        TK_list[4]='t';conditions_satified=1;}
// for second diagonal
else if(TK_list[2] == 'c' && TK_list[4]=='c'&& TK_list[6]==' '&& conditions_satified==0){
        TK_list[6]='t';conditions_satified=1;}
else if(TK_list[4] == 'c' && TK_list[6]=='c'&& TK_list[2]==' '&& conditions_satified==0){
        TK_list[2]='t';conditions_satified=1;}
else if(TK_list[2] == 'c' && TK_list[6]=='c'&& TK_list[4]==' '&& conditions_satified==0){
        TK_list[4]='t';conditions_satified=1;}

else{

//  printing cross and tic at random place
 while(1){
 srand(time(0));
int random_number = rand() % 9; // random numbers 0–8
if(TK_list[0]!=' '&& TK_list[1]!=' '&&TK_list[2]!=' '&& TK_list[3]!=' '&&TK_list[4]!=' '&& TK_list[5]!=' '&&TK_list[6]!=' '&& TK_list[7]!=' '&& TK_list[8]!=' '){
      break;}
if(TK_list[random_number]==' '){
 TK_list[random_number]='t';
 break;


}
else{
    continue;
}
 }
}



   
 // tick cross printing mechanism
 printf("    |  %c  |   \n",TK_list[1]);
 printf(" %c  |     | %c  \n",TK_list[0],TK_list[2]);
 printf("____|     | ____\n");
 printf("               \n");
 printf(" %c    %c     %c  \n",TK_list[3],TK_list[4],TK_list[5]);
 printf("____       ____\n");
 printf("    |     |   \n");
 printf(" %c  |  %c  | %c \n",TK_list[6],TK_list[7],TK_list[8]);


   //winner checking mechanism
 if (winning_function(TK_list,"computer")==1){
    printf("computer won");
    break;
 }
 else if(winning_function(TK_list,"user")==1){
    printf("user won");
    break;
 }
 else{
   if (TK_list[0]!=' '&& TK_list[1]!=' '&&TK_list[2]!=' '&& TK_list[3]!=' '&&TK_list[4]!=' '&& TK_list[5]!=' '&&TK_list[6]!=' '&& TK_list[7]!=' '&& TK_list[8]!=' '){
      printf("no one won draw");
    break;
   }
   }  }

    return 0;

}