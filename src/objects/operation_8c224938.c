#include "src/include/classes/TWindowSubSymbolChatParts.h"
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct TWindowSubSymbolChatParts_p98 TWindowSubSymbolChatParts_p98;
typedef struct TWindowSubSymbolChatParts_p9c TWindowSubSymbolChatParts_p9c;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void call_8c225034(TWindowSubSymbolChatParts *);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c225228(void *);
extern void call_8c22529c(TWindowSubSymbolChatParts *);
extern void operation_8c225338(void *);
extern void position_indexed_label_8c22519c(void *);
extern void call_8c199b74(void *);
extern void call_8c199bc4(void *);
extern void call_8c0db30c(TWindowSubSymbolChatParts *);
void TWindowSubSymbolChatParts_update_8c224938(TWindowSubSymbolChatParts *o)
{
    int t1;
    int t2;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    if (((o->f80 & 1)) == 0) {
        call_8c225034(o);
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t1 == 0) {
                goto L_8c22497c;
            }
        }
        operation_8c225228((void *)o);
L_8c22497c:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 0x400)) != 0) {
            call_8c22529c(o);
        }
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t2 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t2 == 0) {
                goto L_8c2249ac;
            }
        }
        operation_8c225338((void *)o);
    }
L_8c2249ac:;
    position_indexed_label_8c22519c((void *)o);
    if (!(7.5f > (float)o->f64)) {
        call_8c199b74((void *)(o->second));
        call_8c199bc4((void *)(o->first));
    }
    call_8c0db30c(o);
}
