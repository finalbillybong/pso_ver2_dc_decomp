#include "src/include/classes/TWindowSubSymbolChatFaceType.h"
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct TWindowSubSymbolChatFaceType_p70 TWindowSubSymbolChatFaceType_p70;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void TWindowSubSymbolChatFaceType_update_step_8c220460(TWindowSubSymbolChatFaceType *);
extern int replicate_nibble_wrapper_2_8c01d8a8(void *, int);
extern void TWindowSubSymbolChatFaceType_update_step_2_8c2205d0(void *);
extern void TWindowSubSymbolChatFaceType_update_step_3_8c220610(void *);
extern void call_8c199b74(void *);
extern void call_8c0db30c(TWindowSubSymbolChatFaceType *);
extern void update_view_nodes(void *, void *);
void TWindowSubSymbolChatFaceType_update_8c220004(TWindowSubSymbolChatFaceType *o)
{
    int t1;
    int t2;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    if (((o->f68 & 1)) == 0) {
        TWindowSubSymbolChatFaceType_update_step_8c220460(o);
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t1 = replicate_nibble_wrapper_2_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t1 == 0) {
                goto L_8c22004a;
            }
        }
        TWindowSubSymbolChatFaceType_update_step_2_8c2205d0((void *)o);
L_8c22004a:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t2 = replicate_nibble_wrapper_2_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t2 == 0) {
                goto L_8c220068;
            }
        }
        TWindowSubSymbolChatFaceType_update_step_3_8c220610((void *)o);
    }
L_8c220068:;
    if (!(7.5f > (float)o->f64)) {
        call_8c199b74((void *)(o->child));
    }
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
