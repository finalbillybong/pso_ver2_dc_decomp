typedef struct View {float value,first,second,third,rate;void *dispatch;} View;
typedef char check_value[(unsigned long)&((View *)0)->value==0?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==4?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==8?1:-1];
typedef char check_third[(unsigned long)&((View *)0)->third==12?1:-1];
typedef char check_rate[(unsigned long)&((View *)0)->rate==16?1:-1];
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==20?1:-1];
extern unsigned int flags;extern void mode_at(int,int),finish_at(int);
void restore_base_blend(void) {flags&=~0x8820;mode_at(0xff00,0);finish_at(0x2500);}
