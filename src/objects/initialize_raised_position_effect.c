#include "src/include/vector3.h"
#include "src/include/classes/TObjDFTenchuFuru.h"
typedef char check_dispatch[(unsigned long)&((TObjDFTenchuFuru *)0)->vtable==24?1:-1];
typedef char check_size[(unsigned long)&((TObjDFTenchuFuru *)0)->size==30?1:-1];
typedef char check_position[(unsigned long)&((TObjDFTenchuFuru *)0)->position==32?1:-1];
typedef char check_ticks[(unsigned long)&((TObjDFTenchuFuru *)0)->ticks==44?1:-1];
typedef char check_child[(unsigned long)&((TObjDFTenchuFuru *)0)->child==48?1:-1];
extern void TObject_ctor_8c0330e4(TObjDFTenchuFuru *,void *);extern void *object_name;
extern void *find_at(Vector3 *,int);extern void set_at(void *,int);
TObjDFTenchuFuru *TObjDFTenchuFuru_ctor_8c21aef4(TObjDFTenchuFuru *o,void *parent,const Vector3 *position) { TObjDFTenchuFuru **home=&o;TObject_ctor_8c0330e4(o,parent);o->vtable=(void *)0x8c278574;o->name=object_name;o->size=52;o->ticks=5;o->position=*position;o->position.y+=300.0f;if((o->child=find_at(&o->position,308))!=0) set_at(o->child,64);return o; }
