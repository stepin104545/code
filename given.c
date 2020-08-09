#include<stdio.h>
#include<string.h>
int main(){
char st[100];
printf("write the string with '_' token\n");
scanf("%s",st);
char *a;
a=strtok(st,"_");
while(a!=NULL){
  printf("%s\n",a);
  a=strtok(NULL,"_");
}
}

