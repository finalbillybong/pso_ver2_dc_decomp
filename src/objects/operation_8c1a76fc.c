#include "src/include/classes/TQuestScriptChecker.h"
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct TQuestScriptChecker_p80 TQuestScriptChecker_p80;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_L8c41cba0 g_8c41cba0;
extern void operation_8c1a779c(void *);
extern void operation_8c1a78f0(void *);
extern void operation_8c1a7964(void *);
extern void call_8c1a79d8(TQuestScriptChecker *);
extern int call_8c18e8a0(void *, int);
extern void operation_8c1a7cc4(TQuestScriptChecker *);
void TQuestScriptChecker_update_8c1a76fc(TQuestScriptChecker *o)
{
    int t1;
    if (o->f80 != 0) {
        if ((int)(o->f80) == 1) {
            goto L_8c1a7724;
        }
        if ((int)(o->f80) == 2) {
            goto L_8c1a772e;
        }
        if ((int)(o->f80) == 3) {
            goto L_8c1a7738;
        }
    } else {
        operation_8c1a779c((void *)o);
        goto L_8c1a773e;
L_8c1a7724:;
        operation_8c1a78f0((void *)o);
        goto L_8c1a773e;
L_8c1a772e:;
        operation_8c1a7964((void *)o);
        goto L_8c1a773e;
L_8c1a7738:;
        call_8c1a79d8(o);
    }
L_8c1a773e:;
    if (((*(int *)((char *)&g_8c41cba0.f28 + (o->mode * 0x3c)) & 0x20000)) != 0) {
        o->f80 = (TQuestScriptChecker_p80 *)((int)o->f80 + 1);
        t1 = call_8c18e8a0((void *)(o->f80), 4);
        o->f80 = (TQuestScriptChecker_p80 *)t1;
    }
    operation_8c1a7cc4(o);
}
