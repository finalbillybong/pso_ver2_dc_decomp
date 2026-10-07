/* Provisional effect update. Preserve postdecrement and field-store order,
 * resource reload after callbacks, absent lower bound on mode, and ordered
 * floating comparisons (including the reference loop behavior for NaN).
 * Capture both scale values before writes to the returned object. */
extern unsigned char effect_spawn_table[];
#include "src/include/effect.h"
#include "src/include/effect_update.h"
#include "src/include/emit_listener.h"
#define ready_at ((int (*)(void *))0x8c03347c)
#define direction_at ((float (*)(int))0x8c37eb0c)
#define absolute_at ((float (*)(float))0x8c12c714)
#define distance_at ((float (*)(void *,void *))0x8c0c5460)
#define listener ((unsigned char **)0x8c46ee80)
extern void *spawn0_at(void *,void *,void *,void *,unsigned short,unsigned short);
extern void *spawn1_at(void *,void *,void *,int,unsigned short);
extern void *spawn2_at(void *,void *,void *,int,unsigned short);
static inline void scale_spawn(Effect *e,void *p) {
 float *first_address=(float *)((unsigned char *)p+EFFECT_UPDATE_OFFSET(EffectSpawnView, field_98));float second=e->field_48;float first=e->field_44;
 *first_address=first; *(float *)((unsigned char *)p+EFFECT_UPDATE_OFFSET(EffectSpawnView, field_9c))=second;
}
void update_effect(Effect *e) {

 Resource *r;
 if(!ready_at(e)) return;
 if(e->field_38-- <=0) e->field_38=0; else return;
 e->field_40++;
 if(e->field_30&1) { e->field_30&=~1; return; }
 r=(Resource *)e->resource;
 if(!r) return;
 if(r->field_40==0.0f) e->field_20+=r->field_44*e->field_28;
 else {
  e->field_24+=(int)(r->field_40*65536.0f/360.0f);
  e->field_20+=((Resource *)e->resource)->field_44*absolute_at(direction_at(e->field_24))*e->field_28;
 }
 if(*listener && !(e->field_30&0x40)) {
  if(!(distance_at(&e->position,*listener+EMIT_LISTENER_OFFSET(EmitListener, x))<22500.0f)) e->field_20=0.0f;
 }
 { register int no_binding=0xffff;
 while(!(e->field_20<1.0f)) {
  int mode; void *p;
  e->field_20-=1.0f;
  r=(Resource *)e->resource;
  mode=r->mode;
  if(mode==0) {
   p=spawn0_at(r,&e->position,&e->field_5c,e->owner,e->field_30,e->field_32);
   if(p) scale_spawn(e,p);
  } else if(e->field_30&0x10) {
   if(mode==1) { p=spawn1_at(r,&e->position,e->owner,0x10,e->field_32); if(p) scale_spawn(e,p); }
   else if(mode==2) { p=spawn2_at(r,&e->position,e->owner,0x10,e->field_32); if(p) scale_spawn(e,p); }
  } else if(e->field_30&0x80) {
   if(mode==1) { p=spawn1_at(r,&e->position,e->owner,0x80,no_binding); if(p) scale_spawn(e,p); }
   else if(mode==2) { p=spawn2_at(r,&e->position,e->owner,0x80,no_binding); if(p) scale_spawn(e,p); }
  } else if(mode<3) {
   register unsigned char *base=effect_spawn_table+EFFECT_UPDATE_OFFSET(EffectSpawnEntry, callback);
   p=(*(Spawn *)(base+(mode<<3)))(r,&e->position,e->owner);
   if(p) scale_spawn(e,p);
  }
 }
 }
 if(e->field_34==1) ((EffectBase *)e)->flags|=1;
 if(e->field_3c && e->field_40>=e->field_3c) ((EffectBase *)e)->flags|=1;
}
