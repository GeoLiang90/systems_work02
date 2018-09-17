//George Liang
//Work02
//2019-09-16
#include <stdio.h>
int main(){
  unsigned int num = 3124567712;
  char * pointer = &num;

  printf("The int in hex is : %x \n", num);

  int byte = 0;

  while(byte < 4){
    printf("byte %d %hhx \n",byte,*pointer);
    pointer++;
    byte++;
  }
  //Reset pointer
  pointer = &num;
  for(int x = 0; x < 4; x++){
    (*pointer)+=1;
    printf("byte %d hex %hhx decimal %d \n",x,*pointer,*pointer);
    pointer++;
  }
  printf("The resulting int:%d \n The resulting hex:%x \n", num, num);
  //Reset pointer
  pointer = &num;
  for(int y = 0;y < 4; y++){
    (*pointer)+=16;
    printf("byte %d hex %hhx decimal %d \n",y,*pointer,*pointer);
    pointer++;
  }
  printf("The resulting int:%d \n The resulting hex:%x \n", num, num);
}
