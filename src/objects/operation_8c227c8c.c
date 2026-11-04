#include "src/include/classes/TAdDrawLineCtrl.h"
typedef struct TAdDrawLineCtrl_p24 TAdDrawLineCtrl_p24;
extern void restore_child_blend(void);
extern void visit_hierarchy_10(void *);
void TAdDrawLineCtrl_render_8c227c8c(TAdDrawLineCtrl *o)
{
    restore_child_blend();
    if (o->f24 != 0) {
        visit_hierarchy_10((void *)(o->f24));
    }
}
