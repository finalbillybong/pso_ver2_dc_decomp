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
typedef struct Frame {float unknown0,width;char unknown8[12];float height;char unknown24[4];float width2;char unknown32[12];float height2;} Frame;typedef struct Draw {float unknown0,length;} Draw;typedef char check_frame[(unsigned long)&((Frame *)0)->width==4&&(unsigned long)&((Frame *)0)->height==20&&(unsigned long)&((Frame *)0)->width2==28&&(unsigned long)&((Frame *)0)->height2==44?1:-1];typedef char check_draw[(unsigned long)&((Draw *)0)->length==4?1:-1];extern Frame frame;extern Draw draw;extern void draw_at(void *,Draw *,float,float);
void draw_view_transition(View *o) {frame.width=o->current2-18.0f;frame.height=o->current3-18.0f;frame.width2=o->current2-18.0f;frame.height2=o->current3-18.0f;draw.length=(o->current2+o->current3+25.4556007f)*2.0f;draw_at(&o->current0,&draw,(float)o->elapsed/7.5f,o->scale);}
