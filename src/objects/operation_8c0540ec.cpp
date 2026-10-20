typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct S_c8c053d84_84 S_c8c053d84_84;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c46ed0c_0 S_g8c46ed0c_0;
typedef struct Object Object;
typedef struct S_vv13 S_vv13;
typedef struct S_vv18 S_vv18;
class S_c8c053d84;
struct Object {
    char unknown0[0x2];
    short f02;
    int f04;
    int f08;
};
class S_c8c053d84 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(void *, int);
};
typedef struct S_c8c053d84Data {
    char unknown0[0x84];
    S_c8c053d84_84 *f84;
} S_c8c053d84Data;
struct S_c8c053d84_84 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    char f00;
    char unknown1[0x1];
    short f02;
    char f04;
    char unknown5[0x1];
    short f06;
};
struct S_g8c46ed0c_0 {
    char f00;
};
struct S_vv18 {
    char unknown0[0x4];
    short f04;
};
struct S_vv13 {
    char f00;
};
extern S_g8c46ed0c *g_8c46ed0c;
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void operation_8c0540ec(Object *o)
{
    Frame frame;
    S_vv18 *v18;
    int v17;
    S_vv13 *v13;
    int v12;
    int v19;
    S_c8c053d84 *t1;
    t1 = lookup_object_by_id((unsigned short)(o->f02));
    if (t1 != 0) {
        if (((S_c8c053d84Data *)t1)->f84 != 0 && ((S_c8c053d84Data *)t1)->f84->f04 >= 0 && !(((S_c8c053d84Data *)t1)->f84->f04 > 0xb9f)) {
            *(SBlock4 *)&(&frame)->f04 = *(SBlock4 *)&((S_g8c46ed0c_0 *)(&*(int *)((char *)((char *)g_8c46ed0c + 0x0) + (((S_c8c053d84Data *)t1)->f84->f04 << 2))))->f00;
        }
        *(short *)&(&frame)->f04 = o->f04;
        v18 = (S_vv18 *)((S_c8c053d84Data *)t1)->f84;
        if (v18 != 0 && v18->f04 >= 0 && !(v18->f04 > 0xb9f)) {
            *(SBlock4 *)((char *)g_8c46ed0c + (v18->f04 << 2)) = *(SBlock4 *)&(&frame)->f04;
        }
        t1->v5(&(&frame)->f04, 1);
        return;
    }
    v12 = (int)g_8c46ed0c;
    v19 = (int)o->f08;
    *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)((char *)v12 + (v19 << 2));
    *(short *)&(&frame)->f00 = o->f04;
    if (!((short)v19 > 0xb9f)) {
        *(SBlock4 *)((char *)v12 + ((short)v19 << 2)) = *(SBlock4 *)&(&frame)->f00;
    }
}
