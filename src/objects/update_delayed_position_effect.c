#include "src/include/vector3.h"
#include "src/include/classes/TObjDFBeamCursor.h"
typedef char check_dispatch[(unsigned long)&((TObjDFBeamCursor *)0)->dispatch==24?1:-1];
typedef char check_size[(unsigned long)&((TObjDFBeamCursor *)0)->size==30?1:-1];
typedef char check_ticks[(unsigned long)&((TObjDFBeamCursor *)0)->ticks==32?1:-1];
typedef char check_position[(unsigned long)&((TObjDFBeamCursor *)0)->position==36?1:-1];
extern void emit_at(Vector3 *,int);
void TObjDFBeamCursor_update_8c21b630(TObjDFBeamCursor *o) {if(--o->ticks<=0) {emit_at(&o->position,56);o->flags|=1;}}
