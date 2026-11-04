#include "src/include/classes/TObjMesBase.h"
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct TObjMesBase_pe4 TObjMesBase_pe4;
typedef struct TObjMesBase_pec TObjMesBase_pec;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TQuestThread_ctor_1_8c173578(void *, void *, int);
extern void reparent_hierarchy_node(void *, void *);
void TObjMesBase_v14_8c1ab228(TObjMesBase *o)
{
    int t1;
    if (o->fec != 0) {
        if (o->fe8 != 0) {
            if (o->fe8 == 1) {
                return;
            }
            return;
        }
        if (o->fe4 == 0 && o->fec != 0 && *(int *)0x8c4db520 != 0) {
            t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xa8);
            if (t1 != 0) {
                TQuestThread_ctor_1_8c173578((void *)t1, (void *)(*(S_g8c4db520 **)0x8c4db520), (int)(o->fec));
            }
            o->fe4 = (TObjMesBase_pe4 *)t1;
            if (o->fe4 != 0) {
                reparent_hierarchy_node((void *)(o->fe4), (void *)(*(S_g8c44be84 **)0x8c44be84));
            }
            o->fe8 = 1;
        }
    }
}
