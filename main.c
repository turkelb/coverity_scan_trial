#include <stdio.h>

#define MAX_SIZE 1

struct myStruct{
  unsigned char a;
  unsigned char b;
  unsigned char c;
  unsigned char d;
  unsigned char e;
};

struct myStruct tempBuff[MAX_SIZE];
  
int get_index(){
return 0;
}

int main()
{
    printf("Hello World");
    struct myStruct src;
    int index = MAX_SIZE;
    index = get_index();
    
    if(index!=MAX_SIZE) {
      memcpy(&tempBuff[index], &src, sizeof(struct myStruct));
    }
    return 0;
}
