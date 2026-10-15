typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3159fc S_L8c3159fc;
typedef struct S_g8c4d9b70 S_g8c4d9b70;
typedef struct S_g8c4da6d0 S_g8c4da6d0;
typedef struct S_g8c4da6d0_42c S_g8c4da6d0_42c;
typedef struct S_g8c4da6d4 S_g8c4da6d4;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x31c];
    int f384;
    char unknown388[0x1c];
    int f3a4;
    short f3a8;
    short f3aa;
} ObjectData;
struct S_g8c4da6d0 {
    char unknown0[0x42c];
    S_g8c4da6d0_42c *f42c;
};
struct S_L8c3159fc {
    char unknown0[0x10];
    int f10;
    char unknown14[0xc];
    int f20;
};
struct S_g8c4da6d4 {
    int f00;
};
extern int g_8c315a2c;
extern S_g8c4d9b70 *g_8c4d9b70;
extern S_g8c4da6d0 *g_8c4da6d0;
extern S_g8c4da6d4 *g_8c4da6d4;
extern int g_8c575570;
extern S_L8c3159fc g_8c3159fc;
extern "C" int call_8c18e768(void *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1516d8(Object *o)
{
    int v1;
    int v23;
    int v25;
    int v29;
    int t1;
    int t2;
    int t3;
    if (((((ObjectData *)o)->f34 & 0x2000000)) == 0) {
        t1 = o->v11(400.0f, 40.0f);
        if (t1 != 0) {
            if (((((ObjectData *)o)->f34 & 0x800)) != 0) {
                ((ObjectData *)o)->f38 = (Arg0_38 *)*(int *)((char *)((char *)g_8c4da6d0->f42c + 0x8) + (*(int *)((char *)&g_8c3159fc.f20 + (((ObjectData *)o)->f384 << 2)) << 4));
                v29 = (int)0x18;
                v1 = (int)/* ? r12 */ 0;
            } else {
                v1 = (int)0;
                if ((int)(g_8c4d9b70) >= 0) {
                    t2 = call_8c18e768(g_8c4d9b70, 4);
                    t3 = call_8c18e768((void *)(((ObjectData *)o)->f3a8), 4);
                    if (t2 == t3) {
                        v1 = (int)1;
                    }
                }
                if (v1 != 0) {
                    ((ObjectData *)o)->f38 = (Arg0_38 *)*(int *)((char *)((char *)g_8c4da6d0->f42c + 0x8) + (*(int *)((char *)&g_8c3159fc.f10 + (((ObjectData *)o)->f384 << 2)) << 4));
                    v25 = (int)(((ObjectData *)o)->f3aa + 0x10);
                } else {
                    ((ObjectData *)o)->f38 = (Arg0_38 *)*(int *)((char *)((char *)g_8c4da6d0->f42c + 0x8) + (*(int *)((char *)&g_8c3159fc + (((ObjectData *)o)->f384 << 2)) << 4));
                    v23 = (int)((ObjectData *)o)->f3aa;
                    if (((((ObjectData *)o)->f3a4 & 0x10000)) != 0) {
                        v23 = (int)(((ObjectData *)o)->f3aa + 8);
                    }
                    v25 = (int)v23;
                }
                v29 = (int)v25;
            }
            g_8c315a2c = g_8c4da6d4->f00 + v29 * 0xc;
            call_8c3827d8((void *)((void *)&g_8c315a2c));
            call_8c38ae68();
            g_8c575570 &= -0x401;
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3a944a((void *)(((ObjectData *)o)->f38));
            call_8c38ad10();
        }
    }
}
