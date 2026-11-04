#include "src/include/classes/TWindowMainMenu.h"
typedef struct S_g8c418248 S_g8c418248;
typedef struct Arg0_58 Arg0_58;
typedef struct TWindowMainMenu_p70 TWindowMainMenu_p70;
typedef struct TWindowMainMenu_p74 TWindowMainMenu_p74;
typedef struct S_vv21 S_vv21;
struct S_vv21 {
    char unknown0[0x4];
    short f04;
};
extern void request_resource_release(void *);
extern int lookup_low_id(int);
extern void operation_8c0264ac(void);
void operation_8c18c768(TWindowMainMenu *o)
{
    S_vv21 *v21;
    int v25;
    int v26;
    int t1;
    if (((o->f20 & 1)) != 0) {
        o->f20 &= -6;
        if (o->f70 != 0) {
            request_resource_release((void *)(o->f70));
            o->f70 = (TWindowMainMenu_p70 *)0;
        }
        if (o->f74 != 0) {
            v21 = (S_vv21 *)o->f74;
            v21->f04 |= 1;
            o->f74 = (TWindowMainMenu_p74 *)0;
        }
        v25 = (int)5;
        while (v25 >= 0) {
            v26 = (int)(v25 << 2);
            if (*(int *)((char *)((char *)o + 0x58) + (v26)) != 0) {
                request_resource_release((void *)(*(Arg0_58 **)((char *)((char *)o + 0x58) + (v26))));
                *(int *)((char *)((char *)o + 0x58) + (v26)) = 0;
            }
            v25 = (int)(v25 + -1);
        }
        t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t1 != 0) {
            operation_8c0264ac();
        }
    }
}
