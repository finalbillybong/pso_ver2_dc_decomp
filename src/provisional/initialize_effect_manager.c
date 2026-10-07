#include "src/include/effect_manager.h"
#define base_at ((void (*)(EffectManager *,void *))0x8c03c92c)
#define setup_at ((void (*)(EffectManager *,EffectResource *,void *))0x8c0a939c)
extern void transform_at(void *,void *,int,int,int);
extern void copy_at(void *,void *,int);
extern unsigned char manager_data[];
EffectManager *initialize_effect_manager(EffectManager *p,void *parent) {
 EffectManager **home=&p;
 base_at(p,parent);
 p->dispatch=(void *)0x8c265cb0;
 p->name=*(void **)0x8c303de8;
 p->extent=0x88;
 p->field74=0;p->field78=0;p->field7c=0;p->field70=0;p->field80=0;p->field68=0;p->field64=1;
 if(*(int *)0x8c303c10==0) {
  int i; int limit=512;
  for(i=0;i<limit;i++) (*(EffectResource **)0x8c46f100)[i]=*(EffectResource *)0x8c303c14;
 }
 p->resource=*(EffectResource **)0x8c46f100+p->field74;
 setup_at(p,*(EffectResource **)0x8c46f100,manager_data+8);
 { EffectManager *object=p; transform_at(object->field3c,object->field54,24,5,16); }
 copy_at(p->field54,p->resource,16);
 return p;
}
