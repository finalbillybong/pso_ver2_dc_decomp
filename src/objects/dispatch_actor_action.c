#define handler0 ((void (*)(void *,int))0x8c0c80d0)
#define handler1 ((void (*)(void *,int))0x8c0c80f8)
#define handler2 ((void (*)(void *,int))0x8c0c82a0)
#define handler3 ((void (*)(void *,int))0x8c0c84b4)
#define handler5 ((void (*)(void *,int))0x8c0c8674)
#define handler6 ((void (*)(void *,int))0x8c0c874c)
void dispatch_actor_action(void *actor,int action,int event){switch(action){
case 0:handler0(actor,event);break;
case 1:handler1(actor,event);break;
case 2:handler2(actor,event);break;
case 3:handler3(actor,event);break;
case 5:handler5(actor,event);break;
case 6:handler6(actor,event);break;
}}
