#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 char cs;
 
 printf("請輸入要轉換的英文字母"); 
 scanf("%c",&cs);
 
 if((cs>='A')&&(cs<='Z')){
  cs+=32;
  printf("轉換後為%c\n",cs);
 }
 else if((cs>='a')&&(cs<='z')){
  cs-=32;
  printf("轉換後為%c\n",cs); 
 }
 else{
  printf("您所輸入的不是英文字母\n");
 }
 
 system("PAUSE");
 return 0;
}
