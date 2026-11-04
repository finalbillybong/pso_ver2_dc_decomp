#include "src/include/classes/TOTrap.h"
typedef char check_dispatch[(unsigned long)&((TOTrap *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((TOTrap *)0)->size==30?1:-1];
typedef char check_first[(unsigned long)&((TOTrap *)0)->first==848?1:-1];
typedef char check_second[(unsigned long)&((TOTrap *)0)->second==852?1:-1];
typedef char check_identifier[(unsigned long)&((TOTrap *)0)->identifier==856?1:-1];
typedef char check_visible[(unsigned long)&((TOTrap *)0)->visible==860?1:-1];
extern void base_at(TOTrap *,void *);extern void *object_name;
TOTrap *TOTrap_ctor_8c140b28(TOTrap *o,void *parent) {base_at(o,parent);o->dispatch=(void *)0x8c26dc40;o->name=object_name;o->size=864;o->first=o->second=0.0f;o->identifier=65535;o->visible=1;return o;}
