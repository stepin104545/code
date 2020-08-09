#include<stdio.h>
#include<string.h>
int main(){
char st[100]="my_name_is_edcast_future_skills";
// or if you want to scan the different string means use the below printf and scanf.
/*printf("write the string with '_' token\n");
scanf("%s",st);*/
char *a;
a=strtok(st,"_");
while(a!=NULL){
  printf("%s\n",a);
  a=strtok(NULL,"_");
}
}

