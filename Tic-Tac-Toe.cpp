#include <stdio.h>
#include <stdlib.h>
char stack1[50];
int top=-1;
void push(char data){
   top++;
   stack1[top]=data;
}
char pop(){
      top--;
      return stack1[top+1];
}
int priority(char a){
    switch(a){
    case'^':
          return 6;
          break;
     case'*':
          return 5;
          break;
     case'/':
          return 5;
          break;
     case'+':
          return 4;
          break;
     case'-':
          return 4;
          break;
     case'(':
          return 2;
          break;
     case')':
          return 1;
          break;
    default:
          return 0;
          break;
    }
}
void check(char str[],int *j,char c){
         char t1=pop();
         if(priority(t1)<priority(c)){
              push(t1);
              push(c);
              return;
         }
         str[*j]=t1;
         (*j)++;
         check(str,j,c);
}
void convert(char *s,char *str,int i,int j){
   if(i==strlen(s)){
       if(top!=-1){
   printf("expersion error!!!!");
   exit(0);
       }
       str[j]=NULL;
        return;
   }
  if(i!=0&&top==-1){
   printf("expersion error!!!!");
   exit(0);
       }
   char c=s[i];
   i++;
   for(;c!=')';i++){
       if(c==NULL){
   printf("expersion error!!!!");
   exit(0);
       }
       int flag=priority(c);
       if(c=='(')
          push(c);
       else if(flag)
         check(str,&j,c);
       else if(!flag){
          str[j]=c;
          j++;
       }
        c=s[i];
   }
   c=pop();
   while(c!='('){
      str[j]=c;
      j++;
      c=pop();
   }
   convert(s,str,i,j);
}

int main()
{
    printf("enter the infix form WITH '(' AND ')'...\n");
    char s[50],str[50];
    scanf("%s",s);
    if(s[0]!='('){
        printf("expersion error!!!!");
        return 0;
       }
    convert(s,str,0,0);
    printf("result,...\nthe postfix form...\n\n");
    printf("%s",str);
    return 0;
}
