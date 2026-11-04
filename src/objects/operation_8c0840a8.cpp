#include "src/include/classes/TOTrapAncient02R.h"
class Arg0_s35c;
class Arg0_s35c {
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
typedef struct Arg0_s35cData {

} Arg0_s35cData;
extern "C" int operation_8c1f15c8(void *, int);
extern "C" int call_8c1f15bc(void *);
extern "C" void operation_8c0840a8(TOTrapAncient02R *o)
{
    int t1;
    int t2;
    int t3;
    t1 = o->v11(o->first, o->second);
    if (t1 == 0) {
        o->f380 = 0;
        return;
    }
    t2 = operation_8c1f15c8((void *)(((char *)o + 0x35c)), (int)(((char *)o + 0x3c)));
    if (t2 != 0) {
        o->f380 = 1;
        t3 = call_8c1f15bc((void *)(((char *)o + 0x35c)));
        if (t3 != 0) {
            ((Arg0_s35c *)((char *)o + 0x35c))->v6();
            o->v88();
            ((Arg0_s35c *)((char *)o + 0x35c))->v7();
        } else {
            o->v88();
        }
        return;
    }
    o->f380 = 0;
}
