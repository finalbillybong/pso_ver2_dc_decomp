#include "src/include/classes/TObjTagChallenge.h"
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_50 S_g8c46fe20_50;
struct S_g8c46fe20 {
    char unknown0[0x50];
    S_g8c46fe20_50 *f50;
};
extern char g_8c3405f4[];
extern void request_resource_release(void *);
extern int TWindowArea_ctor_2_8c24bce8(void *);
void TObjTagChallenge_update_8c25e61c(TObjTagChallenge *o)
{
    int t1;
    if (*(int *)0x8c4e2ba0 != 0) {
        if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f50 != 0) {
            request_resource_release((void *)((*(S_g8c46fe20 **)0x8c46fe20)->f50));
            (*(S_g8c46fe20 **)0x8c46fe20)->f50 = (S_g8c46fe20_50 *)0;
        }
        if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f50 != 0) {
            request_resource_release((void *)((*(S_g8c46fe20 **)0x8c46fe20)->f50));
            (*(S_g8c46fe20 **)0x8c46fe20)->f50 = (S_g8c46fe20_50 *)0;
        }
        if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f50 == 0) {
            t1 = TWindowArea_ctor_2_8c24bce8((void *)((g_8c3405f4 + 0x11)));
            (*(S_g8c46fe20 **)0x8c46fe20)->f50 = (S_g8c46fe20_50 *)t1;
        }
        o->f04 |= 1;
    }
}
