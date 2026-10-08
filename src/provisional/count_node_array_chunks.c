#include "src/include/node_array.h"
#define selected (*(int *)0x8c46fa88)
void count_node_array_chunks(NodeArray *array,short *data,int filter){
 short command;
 while((command=*data++)!=255){
  command=(unsigned char)command;
  if(command<8)continue;
  if(command<16){if((*data++ & 0x1fff)==filter)selected=1;else selected=0;}
  else if(command<64){unsigned int size=(unsigned short)*data++;data=(short *)((char *)data+((unsigned int)size<<1));}
  else {unsigned int size=(unsigned short)*data++;
   if(selected && command==65){unsigned int count;array->pair_count++;count=*data++ & 0x3fff;
    for(size=0;size<count;size++){short length=*data++;if(length<0)length=-length;array->index_count+=length;data=(short *)((char *)data+length*6);}
   }else data=(short *)((char *)data+((unsigned int)size<<1));
  }
 }
}
