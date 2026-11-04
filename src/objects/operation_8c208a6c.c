#include "src/include/classes/THunterGuildSeqOnline_Server.h"
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c418a00 *g_8c418a00;
extern S_g8c44be84 *g_8c44be84;
extern int g_8c4d7ca0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dc800;
extern int hierarchy_is_active(void *);
extern int operation_8c220ce0(void);
extern int operation_8c106760(THunterGuildSeqOnline_Server *);
extern int operation_8c106798(THunterGuildSeqOnline_Server *);
extern void operation_8c02f9c0(void *);
extern void TShopSequence_v07_8c10664c(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
void THunterGuildSeqOnline_Server_v07_8c208a6c(THunterGuildSeqOnline_Server *o)
{
    char *v14;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v14 = (char *)o->f3c;
    if (v14 != 0) {
        t1 = hierarchy_is_active((void *)v14);
        if (t1 != 0) {
            return;
        }
        o->f3c = 0;
    }
    t2 = operation_8c220ce0();
    if (t2 != 0) {
        switch (o->f34) {
        case 0:
            t3 = operation_8c106760(o);
            if (t3 == 0) {
                t4 = operation_8c106798(o);
                if (t4 == 0) {
                    return;
                }
            }
            if (g_8c4dc800 == 0) {
                operation_8c02f9c0(g_8c418a00);
            }
            TShopSequence_v07_8c10664c((void *)o);
            o->f04 |= 1;
            return;
        case 1:
            t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
            if (t5 != 0) {
                initialize_color_rise(t5, g_8c44be84, (void *)((void *)0x8c208d20));
            }
            g_8c4d7ca0 = 1;
            TShopSequence_v07_8c10664c((void *)o);
            o->f04 |= 1;
            return;
        case 2:
            t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x2c);
            if (t6 != 0) {
                initialize_color_rise(t6, g_8c44be84, (void *)((void *)0x8c208d00));
            }
            g_8c4d7ca0 = 1;
            TShopSequence_v07_8c10664c((void *)o);
            o->f04 |= 1;
        }
    }
}
