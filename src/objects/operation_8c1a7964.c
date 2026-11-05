#include "src/include/classes/TQuestScriptChecker.h"
extern char g_8c323e1c[];
extern void njPrintSize_8c38c5aa(int);
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern int update_text_buffer(void *);
extern void operation_8c1a7d14(void *, int, int);
void TQuestScriptChecker_update_step_2_8c1a7964(TQuestScriptChecker *o)
{
    int t1;
    njPrintSize_8c38c5aa(0xe);
    njPrintColor_8c38c5b6(-0xf0f10);
    debug_print_at_8c38cf80(0x4000a, (void *)((g_8c323e1c + 0x2d)));
    njPrintSize_8c38c5aa(0xc);
    t1 = update_text_buffer((void *)(((char *)o + 0x48)));
    if (t1 > 0) {
        operation_8c1a7d14((void *)o, (int)(((char *)o + 0x60)), 1);
        o->f80 = 0;
    }
}
