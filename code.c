#include <stdio.h>
#include <stdlib.h>

int main()
{
   char encoded[7][50]={"..........................",
                        "..........................",
                        "..........................",
                        "..........................",
                        "..........................",
                        "..........................",
                        "..........................",};
  char message[100];
  int row;
  printf("\n\n\n");
  printf("\t*ENTER ROW NUMBER(max=7 row)");
  scanf("%d",&row);
  printf("\n\n\n");
  printf("\tENTER YOUR MESSAGE:(MESSAGE=MAX 25 CHARACTERS)");
  scanf("%s",message,100);
  int k;
  for(k=0;message[k]!='\0';k++){}
  int i,j;
  for(i=0;i<row;i++){
    int increment=2*((row-1)-i);
    for(j=i;message[j]!='\0' && j<k;){
        encoded[i][j]=message[j];
        j=j+increment;
        increment=2*(row-1)-increment;
    }
  }
  printf("\n\n\n");
  printf("\tYOUR MESSSAGE: %s\n\n\n",message);
  printf("\tMESSAGE %d CHARACTERS\n\n\n",k);
  printf("\tYOUR MESSAGE WILL BE CODIFY WITH %d ROWS AND %d COLUMNS.\n\n\n",row
         ,k);
   printf("\tTHE CODE OF YOUR MESSAGE:\n\n\n");
   for(i=0;i<7;i++){
    printf("\t");
    printf("%s\n",encoded[i]);
   }
   printf("\n\n\n");
   printf("\tTHE ENCODED OF YOUR MESSAGE:\n\n\n");
   printf("\t");
   int counter=0;
   for(i=0;i<row;i++){
    for(j=0;j<k;j++){
        if(encoded[i][j]!='.'){
            printf("%c",encoded[i][j]);
            counter++;
            if(counter==5){
                printf(" ");
                counter=0;
            }
        }
    }
   }
    printf("\n\n\n");
    printf("\tENTER YOUR ENCODED MESSAGE:(25 CHARACTES WITHOUT ANY SPACE)");
    printf("\n\n\n");
    printf("\t");
    char key[100];
    scanf("%s",message,100);

    printf("\n\n\n");
    printf("\tYOUR ORIGINAL MESSAGE:");
    printf("\n\n\n");
    printf("\t");
        for(j=0;j<25;){
        printf("%c",message[j]);
        if(j==0){
            j=j+3;
        }
        else{
            j=j+4;
        }
    }
    for(j=20;j>=0;){
        printf("%c",message[j]);
        if(j==4){
            j=j-3;
        }
        else{
            j=j-4;
        }
    }
    for(j=5;j<25;){
        printf("%c",message[j]);
        if(j==21){
            j=j+3;
        }
        else{
            j=j+4;
        }
    }
    for(j=22;j>0;j=j-4){
        printf("%c",message[j]);
    }




    return 0;
}
