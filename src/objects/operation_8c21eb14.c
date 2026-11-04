#include "src/include/classes/TWindowSubQuestBoardSelect.h"
extern int call_8c21ec0c(TWindowSubQuestBoardSelect *, char);
extern void call_8c21ec3c(TWindowSubQuestBoardSelect *);
void operation_8c21eb14(TWindowSubQuestBoardSelect *o)
{
    TWindowSubQuestBoardSelect *v1;
    int t1;
    int t2;
    if (((o->f68 & 4)) == 0) {
        t1 = call_8c21ec0c(o, o->f69);
        if (t1 == 0) {
            v1 = (TWindowSubQuestBoardSelect *)o;
            do {
                v1->f69 += 1;
                if (v1->f69 > 6) {
                    v1->f69 += -6;
                }
                t2 = call_8c21ec0c((TWindowSubQuestBoardSelect *)v1, v1->f69);
            } while (t2 == 0);
            call_8c21ec3c(v1);
        }
    }
}
