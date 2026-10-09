typedef struct View {float value;char unknown4[16];void *dispatch;int state;} View;
typedef char check_value[(unsigned long)&((View *)0)->value==0?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==20?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==24?1:-1];
void update_context_blend(View *o) {float value=o->value;if(o->state==0) {value-=0.03999999910593033f;if(value<-0.699999988079071f) value=-0.699999988079071f;}else {value+=0.03999999910593033f;if(value>0.0f) value=0.0f;}o->value=value;}
