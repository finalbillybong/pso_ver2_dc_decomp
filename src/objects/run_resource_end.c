#include "src/include/resource_callbacks.h"
#define callbacks(id) (*(ResourceCallbacks **)((unsigned char *)0x8c2ed250+((unsigned int)(id)<<2)))
void run_resource_end(int id) {
 ResourceCallbacks *p=callbacks(id);
 int count,i;
 if(p) { count=0;
  while(p->end) { p++; count++; }
  for(i=0;i<count;i++) { p--; p->end(); }
 }
}
