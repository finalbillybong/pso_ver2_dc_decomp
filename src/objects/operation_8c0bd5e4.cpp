typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
class Arg0_s3c0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0x82];
    int f390;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
class Arg0_s3c0 {
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
    virtual int v8();
};
typedef struct Arg0_s3c0Data {

} Arg0_s3c0Data;
extern "C" void operation_8c0bd5e4(Object *o)
{
    int t1;
    switch (o->f30a) {
    case 0:
        t1 = ((Arg0_s3c0 *)((char *)o + 0x3c0))->v8();
        if (t1 == 0) {
            return;
        }
        o->f30a = 0xb;
        o->f30c = 0;
        o->ff0 = 0;
        o->f34 &= -0x200001;
        o->f34 |= 0x6040000;
        {
            int *pf1 = (int *)((char *)o + 0x390);
            *pf1 = (unsigned int)*pf1 >> 0x10 << 0x10;
        }
        o->f390 |= 0x40;
        o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
        return;
    case 11:
        if (((o->f390 & 0x40)) != 0) {
            return;
        }
        o->f30a = 0;
        return;
    }
    o->f30a = 0xb;
    o->f30c = 0;
    o->ff0 = 0;
    o->f34 &= -0x200001;
    o->f34 |= 0x6040000;
    {
        int *pf2 = (int *)((char *)o + 0x390);
        *pf2 = (unsigned int)*pf2 >> 0x10 << 0x10;
    }
    o->f390 |= 0x40;
}
