typedef struct Context {char unknown0[4];unsigned short flags;} Context;
typedef char check_flags[(unsigned long)&((Context *)0)->flags==4?1:-1];
extern void call_8c1031e4(void);
extern void call_8c03cf00(void);
extern void call_8c0b4bac(void);
extern void call_8c1922a0(void);
extern void call_8c111268(void);
extern void call_8c1bded0(void);
extern void call_8c159194(void);
extern Context * context;
extern int alternate;
extern int first;
extern int second;
extern int third;
extern int fourth;
extern int enabled;
void clear_alternate_scene_context(void) {call_8c1031e4();call_8c03cf00();call_8c0b4bac();call_8c1922a0();call_8c111268();if(context) context->flags|=1;call_8c1bded0();call_8c159194();alternate=0;first=0;second=0;enabled=1;third=0;fourth=0;}
