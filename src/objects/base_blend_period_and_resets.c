typedef struct View {float value,first,second,third,rate;void *dispatch;} View;
typedef char check_value[(unsigned long)&((View *)0)->value==0?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==4?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==8?1:-1];
typedef char check_third[(unsigned long)&((View *)0)->third==12?1:-1];
typedef char check_rate[(unsigned long)&((View *)0)->rate==16?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==20?1:-1];
void set_base_blend_period(View *o,int period) {o->rate=1.0f/(float)period;}
void clear_base_blend(View *o) {o->value=0.0f;o->first=0.0f;o->second=0.0f;o->third=0.0f;}
void reset_base_blend(View *o) {o->value=-1.0f;o->first=0.0f;o->second=0.0f;o->third=0.0f;}
