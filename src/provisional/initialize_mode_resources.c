#include "src/include/vector3.h"
typedef struct Resource { char unknown0[88]; void * at88; void * at92; char unknown96[8]; void * at104; void * at108; char unknown112[8]; void * at120; void * at124; char unknown128[8]; void * at136; void * at140; } Resource;
typedef char check_Resource_at88[(unsigned long)&((Resource *)0)->at88==88?1:-1];
typedef char check_Resource_at92[(unsigned long)&((Resource *)0)->at92==92?1:-1];
typedef char check_Resource_at104[(unsigned long)&((Resource *)0)->at104==104?1:-1];
typedef char check_Resource_at108[(unsigned long)&((Resource *)0)->at108==108?1:-1];
typedef char check_Resource_at120[(unsigned long)&((Resource *)0)->at120==120?1:-1];
typedef char check_Resource_at124[(unsigned long)&((Resource *)0)->at124==124?1:-1];
typedef char check_Resource_at136[(unsigned long)&((Resource *)0)->at136==136?1:-1];
typedef char check_Resource_at140[(unsigned long)&((Resource *)0)->at140==140?1:-1];
typedef char check_Resource_prefix[sizeof(Resource)==144?1:-1];
typedef struct Owner { char unknown0[1068]; Resource * resource; } Owner;
typedef char check_Owner_resource[(unsigned long)&((Owner *)0)->resource==1068?1:-1];
typedef char check_Owner_prefix[sizeof(Owner)==1072?1:-1];
typedef struct View { void * name; char unknown4[20]; void * dispatch; char unknown28[2]; short kind; char unknown32[28]; Vector3 position; char unknown72[76]; void * first; void * second; void * third; void * fourth; char unknown164[8]; int mode; } View;
typedef char check_View_name[(unsigned long)&((View *)0)->name==0?1:-1];
typedef char check_View_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_View_kind[(unsigned long)&((View *)0)->kind==30?1:-1];
typedef char check_View_position[(unsigned long)&((View *)0)->position==60?1:-1];
typedef char check_View_first[(unsigned long)&((View *)0)->first==148?1:-1];
typedef char check_View_second[(unsigned long)&((View *)0)->second==152?1:-1];
typedef char check_View_third[(unsigned long)&((View *)0)->third==156?1:-1];
typedef char check_View_fourth[(unsigned long)&((View *)0)->fourth==160?1:-1];
typedef char check_View_mode[(unsigned long)&((View *)0)->mode==172?1:-1];
typedef char check_View_prefix[sizeof(View)==176?1:-1];
extern void base_at(View *,void *);
extern void *object_name;
extern Owner *resource_owner;
View *initialize_mode_resources(View *o,void *parent,const Vector3 *position) {
 base_at(o,parent); o->dispatch=(void *)0x8c26e4e8; o->name=object_name; o->kind=176;
 if(o->mode==1) {
  o->first=resource_owner->resource->at140;
  o->second=resource_owner->resource->at124;
  o->third=resource_owner->resource->at136;
  o->fourth=resource_owner->resource->at120;
 } else {
  o->first=resource_owner->resource->at108;
  o->second=resource_owner->resource->at92;
  o->third=resource_owner->resource->at104;
  o->fourth=resource_owner->resource->at88;
 }
 o->position=*position; return o;
}
