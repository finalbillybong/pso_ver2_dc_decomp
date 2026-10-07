#include "src/include/shared_object.h"
#define release_at ((void (*)(SharedObjectView *,int))0x8c09e6f4)
#define base_at ((void *(*)(SharedObjectView *,short))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
SharedObjectView *destroy_shared_object(SharedObjectView *p,short dispose) {
 if(p) {
  p->dispatch=(void *)0x8c2612d8;
  if(p->field_84 && p->id>=0x4000 && p->id<0xffff) {
   release_at(p,-3);
   p->field_84=0;
  }
  base_at(p,0);
  if(dispose>0) free_at(*(void **)0x8c4d97e0,p);
 }
 return p;
}
