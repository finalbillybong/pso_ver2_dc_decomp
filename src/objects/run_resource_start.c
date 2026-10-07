#include "src/include/resource_callbacks.h"
#define callbacks(id) (*(ResourceCallbacks **)((unsigned char *)0x8c2ed250+((unsigned int)(id)<<2)))
void run_resource_start(int id) {
 ResourceCallbacks *p=callbacks(id);
 void (*call)(void); if(!p) return; while((call=p->start)!=0) { call(); p++; }
}
