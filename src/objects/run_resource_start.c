#include "src/include/resource_callbacks.h"
#define callbacks(id) (*(ResourceCallbacks **)((unsigned char *)0x8c2ed250+((unsigned int)(id)<<2)))
void load_area_object_assets_8c033f14(int id) {
 ResourceCallbacks *p=callbacks(id);
 void (*call)(void); if(!p) return; while((call=p->start)!=0) { call(); p++; }
}
