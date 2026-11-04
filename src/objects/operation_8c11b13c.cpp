#include "src/include/classes/TObjEnePanarms.h"
class Arg0_s41c;
class Arg0_s41c {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct Arg0_s41cData {

} Arg0_s41cData;
extern int g_8c46f560;
extern int g_8c575570;
extern "C" void operation_8c1086fc(void);
extern "C" int update_depth_mode(void *, void *);
extern "C" void operation_8c11b200(void *);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c11b270(TObjEnePanarms *);
extern "C" void TObjEnePanarms_render_8c11b13c(TObjEnePanarms *o)
{
    int t1;
    int t2;
    void *pm3;
    t1 = o->v11(500.0f, 20.0f);
    if (!(t1 == 0)) {
        if (o->f3f8 != 0) {
            operation_8c1086fc();
            g_8c46f560 = (g_8c575570);
            pm3 = (void *)((0x41c + (char *)o));
            t2 = update_depth_mode(pm3, (void *)((0x324 + (char *)o)));
            if (!(0 == t2)) {
                ((Arg0_s41c *)((char *)o + 0x41c))->v6();
                operation_8c11b200((void *)o);
                ((Arg0_s41c *)((char *)o + 0x41c))->v7();
            } else {
                operation_8c11b200((void *)o);
            }
            g_8c575570 = (g_8c46f560);
            call_8c391cc4();
            t1 = o->f3fc;
            if (!(0 == t1)) {
                call_8c11b270(o);
            }
        }
    }
}
