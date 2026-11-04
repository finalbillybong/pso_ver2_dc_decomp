#include "src/include/classes/TQuestListVM.h"
typedef struct TQuestListVM_p22b8 TQuestListVM_p22b8;
typedef struct TQuestListVM_p22bc TQuestListVM_p22bc;
typedef struct TQuestListVM_p22c0 TQuestListVM_p22c0;
typedef struct TQuestListVM_p22c4 TQuestListVM_p22c4;
extern void request_resource_release(void *);
void operation_8c223228(TQuestListVM *o)
{
    if (o->f22bc != 0) {
        request_resource_release(o->f22bc);
        o->f22bc = 0;
    }
    if (o->f22c4 != 0) {
        request_resource_release(o->f22c4);
        o->f22c4 = 0;
    }
    if (o->f22c0 != 0) {
        request_resource_release(o->f22c0);
        o->f22c0 = 0;
    }
    if (o->f22b8 != 0) {
        request_resource_release(o->f22b8);
        o->f22b8 = 0;
    }
}
