#include "src/include/classes/TObjBgmColCtrl.h"
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4e1a48 S_g8c4e1a48;
extern S_g8c418248 *g_8c418248;
extern int g_8c4d5190;
extern int g_8c4e1a44;
extern S_g8c4e1a48 *g_8c4e1a48;
extern int g_8c4e2f80;
extern int lookup_low_id(int);
extern void update_hierarchy(void *);
extern void call_8c1aa184(void);
void TObjBgmColCtrl_update_8c1aa0e8(TObjBgmColCtrl *o)
{
    int v1;
    int v4;
    int t1;
    v1 = (int)o->f20;
    o->f20 = v1 + -1;
    if (!(v1 > 0)) {
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 != 0 && g_8c4e2f80 == 0) {
            g_8c4e1a44 = 0;
            if (g_8c4e1a48 != 0) {
                update_hierarchy(g_8c4e1a48);
            }
            if (g_8c4e1a44 == 0) {
                v4 = (int)(g_8c4d5190 != 0);
                if (v4 == 0) {
                    call_8c1aa184();
                }
            }
        }
    }
}
