#include <stdint.h>
#include <stdio.h>
#include <string.h>




int main(){
  char str[80]="Hello how are you-my name is-omar";
  const char s[2]="-";
  char* token;
  /*get the first toen*/
  token= strtok(str,s);

  /*walk through other tokens*/
  while(token!=NULL){
    printf("%s\n", token);
    token =strtok(NULL,s);
  }

return 0;

}
