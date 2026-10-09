typedef struct View {char unknown0[4];unsigned short state;char unknown6[30];int timer;char unknown40[12];unsigned int flags;float target0,target1,target2,target3,current0,current1,current2,current3;unsigned int steps;float scale;char unknown96[4];int elapsed;} View;
typedef char check_state[(unsigned long)&((View *)0)->state==4?1:-1];
typedef char check_timer[(unsigned long)&((View *)0)->timer==36?1:-1];
typedef char check_flags[(unsigned long)&((View *)0)->flags==52?1:-1];
typedef char check_target0[(unsigned long)&((View *)0)->target0==56?1:-1];
typedef char check_target1[(unsigned long)&((View *)0)->target1==60?1:-1];
typedef char check_target2[(unsigned long)&((View *)0)->target2==64?1:-1];
typedef char check_target3[(unsigned long)&((View *)0)->target3==68?1:-1];
typedef char check_current0[(unsigned long)&((View *)0)->current0==72?1:-1];
typedef char check_current1[(unsigned long)&((View *)0)->current1==76?1:-1];
typedef char check_current2[(unsigned long)&((View *)0)->current2==80?1:-1];
typedef char check_current3[(unsigned long)&((View *)0)->current3==84?1:-1];
typedef char check_steps[(unsigned long)&((View *)0)->steps==88?1:-1];
typedef char check_scale[(unsigned long)&((View *)0)->scale==92?1:-1];
typedef char check_elapsed[(unsigned long)&((View *)0)->elapsed==100?1:-1];
extern int elapsed_at(void);extern void emit_at(unsigned int,void *,void *,void *);static inline int is_open(View *o) {return !(o->flags&1);}
void update_view_transition(View *o) {if(o->elapsed<0x1000000) o->elapsed+=elapsed_at()+1;if(!(o->flags&2)) {if((o->flags&16)&&is_open(o)!=0) o->state|=1;}else if(o->flags&1) {if((float)o->elapsed<7.5f) return;if(o->flags&4) {if(!(o->flags&32)) emit_at(0x50004,0,0,0);o->flags&=~5;}else o->flags&=~2;}else {++o->timer;if((float)o->timer<4.5f) return;if(o->flags&16) {o->state|=16;o->state|=1;}o->timer=0;if(o->flags&4) {if(!(o->flags&32)) emit_at(0x50003,0,0,0);o->flags&=~4;o->flags|=1;o->elapsed=0;}else {o->flags&=~2;o->state|=16;}}}
