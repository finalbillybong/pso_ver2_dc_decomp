#include "src/include/vector3.h"
struct Base {char unknown0[24];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void configure(void *);};
struct View:Base {char unknown28[2];unsigned short size;char unknown32[8];void *transform;char unknown44[8];unsigned int flags;void *resource;Vector3 position,previous;char unknown84[24];float scale_x,scale_y,scale_z;char unknown120[16];int amount,mode,parameter;char unknown148[196];Vector3 origin,anchor;char unknown368[410];short state;char unknown780[68];float radius,range;unsigned short identifier;char unknown858[2];int visible,mode_copy;float strength,speed,duration,remaining;char embedded[28];};
struct Resource {char unknown0[56];void *first,*second;};
struct Global {char unknown0[1068];Resource *resource;};
typedef char check_base[sizeof(Base)==28?1:-1];
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_transform[(unsigned long)&((View *)0)->transform==40?1:-1];
typedef char check_flags[(unsigned long)&((View *)0)->flags==52?1:-1];
typedef char check_resource[(unsigned long)&((View *)0)->resource==56?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==60?1:-1];
typedef char check_previous[(unsigned long)&((View *)0)->previous==72?1:-1];
typedef char check_scale_x[(unsigned long)&((View *)0)->scale_x==108?1:-1];
typedef char check_scale_y[(unsigned long)&((View *)0)->scale_y==112?1:-1];
typedef char check_scale_z[(unsigned long)&((View *)0)->scale_z==116?1:-1];
typedef char check_amount[(unsigned long)&((View *)0)->amount==136?1:-1];
typedef char check_mode[(unsigned long)&((View *)0)->mode==140?1:-1];
typedef char check_parameter[(unsigned long)&((View *)0)->parameter==144?1:-1];
typedef char check_origin[(unsigned long)&((View *)0)->origin==344?1:-1];
typedef char check_anchor[(unsigned long)&((View *)0)->anchor==356?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==778?1:-1];
typedef char check_radius[(unsigned long)&((View *)0)->radius==848?1:-1];
typedef char check_range[(unsigned long)&((View *)0)->range==852?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==856?1:-1];
typedef char check_visible[(unsigned long)&((View *)0)->visible==860?1:-1];
typedef char check_mode_copy[(unsigned long)&((View *)0)->mode_copy==864?1:-1];
typedef char check_strength[(unsigned long)&((View *)0)->strength==868?1:-1];
typedef char check_speed[(unsigned long)&((View *)0)->speed==872?1:-1];
typedef char check_duration[(unsigned long)&((View *)0)->duration==876?1:-1];
typedef char check_remaining[(unsigned long)&((View *)0)->remaining==880?1:-1];
typedef char check_embedded[(unsigned long)&((View *)0)->embedded==884?1:-1];
typedef char check_global_resource[(unsigned long)&((Global *)0)->resource==1068?1:-1];
typedef char check_resource_first[(unsigned long)&((Resource *)0)->first==56?1:-1];
typedef char check_resource_second[(unsigned long)&((Resource *)0)->second==60?1:-1];
extern "C" {extern void base_at(View *,void *),embedded_at(void *),update_at(View *),set_at(View *,void *,int),refresh_at(View *),attach_at(View *,int),prepare_at(View *),start_at(void *);extern int mode_at(void);extern void *object_name;extern Global *global;extern int session_mode,level;extern char descriptor[];}
static inline void position_at(View *o,const Vector3 *p) {o->anchor=*p;o->origin=*p;o->anchor=*p;o->previous=*p;}
extern "C" View *initialize_derived_context_actor(View *o,void *parent,void *parameter) {
 View **home=&o;
 base_at(o,parent);*(void **)((char *)o+24)=(void *)0x8c26ddc0;
 embedded_at(o->embedded);*(void **)o=object_name;o->size=912;o->configure(parameter);
 {const Vector3 *p=&o->position;o->anchor=*p;o->origin=*p;o->anchor=*p;o->previous=*p;}update_at(o);
 o->resource=global->resource->first;o->transform=global->resource->second;o->state=0;
 o->radius=o->scale_x*0.5f+30.0f;
 if(o->scale_y<0.0f) o->scale_y=0.0f;
 if(o->scale_z<1.0f) o->scale_z=1.0f;
 o->speed=-o->scale_y/o->scale_z;
 o->duration=(float)o->parameter+30.0f;
 if(mode_at()==15) o->duration*=0.33f;
 if(o->duration<0.0f) o->duration=0.0f;
 o->remaining=o->duration;
 if(o->amount<0) o->amount=0;
 if(session_mode==1) {o->strength=(float)o->amount*((float)level*2.0f+1.0f);if(level==3) o->strength*=2.0f;}
 else o->strength=(float)(o->amount*(level+1));
 if(o->mode<0) o->mode=0;else if(o->mode>5) o->mode=5;
 o->mode_copy=o->mode;o->range=15.0f;o->identifier=65535;
 set_at(o,descriptor,1);refresh_at(o);o->flags|=0x60040000;attach_at(o,0);prepare_at(o);start_at(o->embedded);return o;
}
