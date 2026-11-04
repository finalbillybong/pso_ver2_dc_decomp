#include "src/include/classes/TObjEneSaver.h"
class Arg0_s3c0;
class Arg0_s3c0 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct Arg0_s3c0Data {

} Arg0_s3c0Data;
extern "C" int operation_456a4(void *);
extern "C" int TObjEneSaver_v45_8c0bd4b4(TObjEneSaver *o)
{
    int t1;
    int t2;
    t1 = operation_456a4((void *)o);
    if (t1 != 0) {
        switch (o->f30a) {
        case 0:
        case 1:
        case 2:
        case 11:
            t2 = ((Arg0_s3c0 *)((char *)o + 0x3c0))->v5();
            if (t2 == 1) {
                *(int *)((char *)o + 0x390) &= -0x44;
                o->f390 |= 4;
                o->f30a = 3;
                o->f30c = 0;
                o->ff0 = 1;
                o->f34 &= -0x6240001;
            }
        }
        return 1;
    }
    return 0;
}
