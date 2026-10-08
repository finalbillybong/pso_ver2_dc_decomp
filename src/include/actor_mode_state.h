#ifndef PSO_ACTOR_MODE_STATE_H
#define PSO_ACTOR_MODE_STATE_H
/* Provisional accessed prefixes; referenced parameter data remains unresolved. */
typedef struct ActorViewParameters {int unknown0;float first,second,third,fourth;int unknown20;int fifth,sixth;} ActorViewParameters;
typedef struct ActorModeInitView {void *name;char unknown4[20];void *dispatch;char unknown28[2];unsigned short size;char unknown32[822];short first,second;char unknown858[54];int state0,state1,state2,state3;char unknown928[4];unsigned int flags;} ActorModeInitView;
typedef char check_ActorViewParameters_first[(unsigned long)&((ActorViewParameters *)0)->first==4?1:-1];
typedef char check_ActorViewParameters_second[(unsigned long)&((ActorViewParameters *)0)->second==8?1:-1];
typedef char check_ActorViewParameters_third[(unsigned long)&((ActorViewParameters *)0)->third==12?1:-1];
typedef char check_ActorViewParameters_fourth[(unsigned long)&((ActorViewParameters *)0)->fourth==16?1:-1];
typedef char check_ActorViewParameters_fifth[(unsigned long)&((ActorViewParameters *)0)->fifth==24?1:-1];
typedef char check_ActorViewParameters_sixth[(unsigned long)&((ActorViewParameters *)0)->sixth==28?1:-1];
typedef char check_ActorViewParameters_size[sizeof(ActorViewParameters)==32?1:-1];
typedef char check_ActorModeInitView_name[(unsigned long)&((ActorModeInitView *)0)->name==0?1:-1];
typedef char check_ActorModeInitView_dispatch[(unsigned long)&((ActorModeInitView *)0)->dispatch==24?1:-1];
typedef char check_ActorModeInitView_size_field[(unsigned long)&((ActorModeInitView *)0)->size==30?1:-1];
typedef char check_ActorModeInitView_first[(unsigned long)&((ActorModeInitView *)0)->first==854?1:-1];
typedef char check_ActorModeInitView_second[(unsigned long)&((ActorModeInitView *)0)->second==856?1:-1];
typedef char check_ActorModeInitView_state0[(unsigned long)&((ActorModeInitView *)0)->state0==912?1:-1];
typedef char check_ActorModeInitView_state1[(unsigned long)&((ActorModeInitView *)0)->state1==916?1:-1];
typedef char check_ActorModeInitView_state2[(unsigned long)&((ActorModeInitView *)0)->state2==920?1:-1];
typedef char check_ActorModeInitView_state3[(unsigned long)&((ActorModeInitView *)0)->state3==924?1:-1];
typedef char check_ActorModeInitView_flags[(unsigned long)&((ActorModeInitView *)0)->flags==932?1:-1];
typedef char check_ActorModeInitView_size[sizeof(ActorModeInitView)==936?1:-1];
#endif
