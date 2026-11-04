#include "src/include/classes/TObjDFYutai.h"
typedef char check_dispatch[(unsigned long)&((TObjDFYutai *)0)->vtable==24?1:-1];
typedef char check_size[(unsigned long)&((TObjDFYutai *)0)->size==30?1:-1];
typedef char check_mode[(unsigned long)&((TObjDFYutai *)0)->mode==32?1:-1];
typedef char check_identifier[(unsigned long)&((TObjDFYutai *)0)->identifier==36?1:-1];
typedef char check_value[(unsigned long)&((TObjDFYutai *)0)->value==40?1:-1];
typedef char check_step[(unsigned long)&((TObjDFYutai *)0)->step==44?1:-1];
extern void TObject_ctor_8c0330e4(TObjDFYutai *,void *);extern void *object_name;
TObjDFYutai *TObjDFYutai_ctor_8c21c1a4(TObjDFYutai *o,void *parent,int mode,unsigned short identifier) {TObject_ctor_8c0330e4(o,parent);o->vtable=(void *)0x8c278388;o->name=object_name;o->size=48;o->mode=mode;o->identifier=identifier;switch(o->mode) {case 0:o->value=1.0f;o->step=-0.011111111380159855f;break;case 1:o->value=0.0f;o->step=0.01666666753590107f;break;case 2:o->value=1.0f;o->step=-0.1111111119389534f;break;}return o;}
