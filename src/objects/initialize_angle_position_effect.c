#include "src/include/vector3.h"
#include "src/include/classes/TObjDFJisin.h"
typedef char check_dispatch[(unsigned long)&((TObjDFJisin *)0)->vtable==24?1:-1];
typedef char check_size[(unsigned long)&((TObjDFJisin *)0)->size==30?1:-1];
typedef char check_position[(unsigned long)&((TObjDFJisin *)0)->position==32?1:-1];
typedef char check_step[(unsigned long)&((TObjDFJisin *)0)->step==44?1:-1];
extern void TObject_ctor_8c0330e4(TObjDFJisin *,void *);extern void *object_name;
extern float njSin_8c37eb0c(int);extern float njCos_8c38c154(int);
TObjDFJisin *TObjDFJisin_ctor_8c21b698(TObjDFJisin *o,void *parent,int angle) {TObjDFJisin **home=&o;TObject_ctor_8c0330e4(o,parent);o->vtable=(void *)0x8c278504;o->name=object_name;o->size=48;o->position.x=njSin_8c37eb0c(angle)*300.0f;o->position.y=0.0f;o->position.z=njCos_8c38c154(angle)*-300.0f;o->step=25.0f;return o;}
