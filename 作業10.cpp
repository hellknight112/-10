#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 char cs;
 
 printf("�п�J�n�ഫ���^��r��"); 
 scanf("%c",&cs);
 
 if((cs>='A')&&(cs<='Z')){
  cs+=32;
  printf("�ഫ�ᬰ%c\n",cs);
 }
 else if((cs>='a')&&(cs<='z')){
  cs-=32;
  printf("�ഫ�ᬰ%c\n",cs); 
 }
 else{
  printf("�z�ҿ�J�����O�^��r��\n");
 }
 
 system("PAUSE");
 return 0;
}
