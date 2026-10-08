/* Provisional address-based name; preserve observed guards, ordering and field widths. */
#include "src/include/notice_actor.h"
#define lookup_at ((Actor *(*)(int))0x8c021ef8)
extern "C" void effect_at(Vector3 *,int,int,int,int);
#define active_id ((int *)0x8c418248)
static inline void subtract_a(Actor *o,short value){
    if(value>=0){
        {
            short *field=&o->a;
            *field-=value;
        }
        if(o->a<0)o->a=0;
    }
}
static inline void add_a(Actor *o,short value){
    if(value>=0){
        {
            short *field=&o->a;
            *field+=value;
        }
        {
            short maximum=o->max_a;
            if(o->a>maximum)o->a=maximum;
        }
    }
}
extern "C" void operation_04ac60(void *incoming){
    Notice *notice;
    Actor *o;
    unsigned int value;
    if(!incoming)return;
    notice=(Notice *)incoming;
    if(!(0x1000>notice->source_id))return;
    o=lookup_at(notice->source_id);
    if(!o)return;
    value=notice->value;
    switch(notice->mode){
        case 0:
        subtract_a(o,value);
        if(notice->target_id==*active_id)o->show_a(&o->position,10,value);
        else o->show_a(&o->position,10,-value);
        break;
        case 1:
        {
            short *field=&o->b;
            *field-=value;
        }
        if(o->b<0)o->b=0;
        if(notice->target_id==*active_id)o->show_b(&o->position,10,value);
        else o->show_b(&o->position,10,-value);
        break;
        case 2:
        {
            Counter *counter=o->counter;
            unsigned short amount=value;
            if(!(amount>counter->value))counter->value-=amount;
        }
        o->show_c(&o->position,10,-value);
        break;
        case 3:
        add_a(o,value);
        o->show_a(&o->position,10,value);
        if(!(o->flags&0x2000000))effect_at(&o->position,0x10a,0,10,64);
        break;
        case 4:
        {
            short *field=&o->b;
            *field+=value;
        }
        {
            short maximum=o->max_b;
            if(o->b>maximum)o->b=maximum;
        }
        o->show_b(&o->position,10,value);
        if(!(o->flags&0x2000000))effect_at(&o->position,0x10a,0,10,64);
        break;
    }
}
