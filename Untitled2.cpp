# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE *fp;
    
    fp= fopen ("task6.txt", "r");
    printf("File opended successfully\n");
    printf("String input from file:\n ");
    
  	char a;
	int b = 0;
    int i = 0;
    
    while(1){
    a = fgetc(fp);
    if(a==EOF)
        break;
   	else
        printf("\n%c ", a);
     }
     
    printf(" Reserved string:\n");
    fseek(fp,0,SEEK_END);
    b = ftell(fp);
   
    while(i < b){
    i++;
    fseek(fp,-i,SEEK_END);
    printf("%c",fgetc(fp));
    }
    printf("\n added to the file successfully");
	return 0;
}
