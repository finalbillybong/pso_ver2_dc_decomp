#include "src/include/transform_state.h"
#define current (*(TransformState **)0x8c46f440)
#define configure_at ((void (*)(void *,float))0x8c0c3998)
void configure_transform_callbacks(void *input,float amount){unsigned int flags;configure_at(input,amount);flags=current->flags;
 if(flags&1)current->first=(void *)0x8c0c3b44;else current->first=(void *)0x8c0c474c;
 if(flags&2){current->second=(void *)0x8c0c3b88;current->alternate=0;}
 else if(flags&0x2000){current->second=0;current->alternate=(void *)0x8c0c3bcc;}
 else {current->second=(void *)0x8c0c4750;current->alternate=0;}
 if(flags&4)current->third=(void *)0x8c0c3b44;else current->third=(void *)0x8c0c474c;
}
