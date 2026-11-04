#include "src/include/classes/TWindowSubItem.h"
typedef struct S_g8c418248 S_g8c418248;
typedef struct TWindowSubItem_p28 TWindowSubItem_p28;
typedef struct TWindowSubItem_p2c TWindowSubItem_p2c;
extern int lookup_low_id(int);
extern void call_8c024570(int);
extern void request_resource_release(void *);
void operation_8c1a3c8c(TWindowSubItem *o, int a1)
{
    int t1;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        if (a1 != 0) {
            if (a1 == 1) {
                goto L_8c1a3cc2;
            }
            return;
        }
        call_8c024570(t1);
        o->f20 = 0x16;
        return;
L_8c1a3cc2:;
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TWindowSubItem_p2c *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (TWindowSubItem_p28 *)0;
        }
        o->f20 = 0xa;
    }
}
