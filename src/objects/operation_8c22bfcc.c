#include "src/include/classes/TItemTexLoad.h"
typedef struct TItemTexLoad_p2c TItemTexLoad_p2c;
extern int ADXF_GetStat_8c34da3c(void *);
extern void call_8c34d4e8(void *);
extern int operation_8c03ed64(void);
extern void TItemTexLoad_update_step_8c22c1c4(void *);
extern void operation_8c22c190(void *);
extern void operation_8c22c100(void *, int);
void TItemTexLoad_update_8c22bfcc(TItemTexLoad *o)
{
    char *v41;
    char *v1;
    int t1;
    int t2;
    int t3;
    v41 = (char *)o->f24;
    if ((int)(v41) == 1) {
        t1 = ADXF_GetStat_8c34da3c((void *)(o->f2c));
        if (t1 != 1) {
            if (t1 == 2) {
                return;
            }
            if (t1 != 3) {
                if (t1 == 4) {
                    goto L_8c22c014;
                }
                return;
            }
            call_8c34d4e8((void *)(o->f2c));
            t2 = operation_8c03ed64();
            if (t2 != 0) {
                TItemTexLoad_update_step_8c22c1c4((void *)o);
                return;
            }
            o->f24 = 3;
            return;
        }
L_8c22c014:;
        v1 = (char *)o->f28;
        operation_8c22c190((void *)o);
        operation_8c22c100((void *)o, (int)(v1));
        return;
    }
    if ((int)(v41) == 3) {
        t3 = operation_8c03ed64();
        if (t3 != 0) {
            TItemTexLoad_update_step_8c22c1c4((void *)o);
        }
    }
}
