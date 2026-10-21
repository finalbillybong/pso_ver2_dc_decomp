typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c46ed0c_0 S_g8c46ed0c_0;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg1 Arg1;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5(Frame *, int);
};
typedef struct ObjectData {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x62];
    Arg0_84 *f84;
    char unknown88[0x282];
    short f30a;
} ObjectData;
struct Arg0_84 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    char f00;
    char unknown1[0x3];
};
struct S_g8c46ed0c_0 {
    char f00;
};
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern int g_8c418248;
extern S_g8c46ed0c *g_8c46ed0c;
extern "C" void call_8c05406c(Object *, Frame *);
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c02688c(void *);
extern "C" float operation_8c140d50(Object *o, Arg1 *a1)
{
    Frame frame;
    int v6;
    int v33;
    int v13;
    S_c8c021ef8 *t1;
    if ((unsigned int)((ObjectData *)o)->f20 >= (unsigned int)0x4000 && ((ObjectData *)o)->f84 != 0) {
        if (((ObjectData *)o)->f84 == 0) {
            v6 = (int)0;
        } else {
            if (((ObjectData *)o)->f84->f04 < 0 || ((ObjectData *)o)->f84->f04 > 0xb9f) {
                v6 = (int)0;
                goto L_8c140da2;
            }
            *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&((S_g8c46ed0c_0 *)(&*(int *)((char *)((char *)g_8c46ed0c + 0x0) + (((ObjectData *)o)->f84->f04 << 2))))->f00;
            v6 = (int)1;
        }
L_8c140da2:;
        if (v6 != 0) {
            ((ObjectData *)o)->f30a = 4;
            *(short *)&(&frame)->f00 = ((ObjectData *)o)->f30a;
            call_8c05406c(o, (Frame *)((&frame)));
            if (((ObjectData *)o)->f84 != 0 && ((ObjectData *)o)->f84->f04 >= 0 && !(((ObjectData *)o)->f84->f04 > 0xb9f)) {
                *(SBlock4 *)&*(char *)((char *)((char *)g_8c46ed0c + 0x0) + (((ObjectData *)o)->f84->f04 << 2)) = *(SBlock4 *)&(&frame)->f00;
            }
            o->v5((&frame), 1);
            if (a1 != 0) {
                v33 = (int)g_8c418248;
                if (v33 == a1->f20) {
                    t1 = lookup_low_id(v33);
                    if (t1 != 0) {
                        v13 = (int)(((t1->f350 & 1)) != 0);
                        if (v13 != 0) {
                            operation_8c02688c((void *)t1);
                        }
                    }
                }
            }
        }
    }
    return 0.0f;
}
