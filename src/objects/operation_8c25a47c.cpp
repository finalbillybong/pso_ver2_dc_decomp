typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_42c S_g8c4e2b80_42c;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19(int);
};
typedef struct ObjectData {
    char unknown0[0xe4];
    float fe4;
    char unknowne8[0x8];
    int ff0;
    char unknownf4[0xc];
    int f100;
    int f104;
    char unknown108[0x4];
    short f10c;
    char unknown10e[0x2];
    short f110;
    short f112;
    char unknown114[0x98];
    int f1ac;
} ObjectData;
struct S_g8c4e2b80 {
    char unknown0[0x42c];
    S_g8c4e2b80_42c *f42c;
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_42c {
    char unknown0[0x38];
    int f38;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x3c];
    int f3c;
};
extern "C" int operation_8c25aa74(void);
extern "C" int find_local_actor_in_radius_8c25a9a4(void *, float);
extern "C" void operation_8c25a890(int, int);
extern "C" void operation_8c25a47c(Object *o)
{
    int t1;
    int t2;
    if (((ObjectData *)o)->f110 != -1) {
        if (((ObjectData *)o)->f110 != 0) {
            if (((ObjectData *)o)->f110 == 1) {
                goto L_8c25a4da;
            }
            if (((ObjectData *)o)->f110 == 2) {
                goto L_8c25a532;
            }
            return;
        }
        ((ObjectData *)o)->f1ac = 0x96;
        ((ObjectData *)o)->f110 = 1;
        ((ObjectData *)o)->f112 |= 1;
        ((ObjectData *)o)->f100 = (int)((*(S_g8c4e2b80 **)0x8c4e2b80)->f42c->f38);
        ((ObjectData *)o)->f104 = (int)((*(S_g8c4e2b80 **)0x8c4e2b80)->f430->f3c);
        return;
L_8c25a4da:;
        t1 = operation_8c25aa74();
        if (t1 == 0) {
            t2 = find_local_actor_in_radius_8c25a9a4((void *)o, ((ObjectData *)o)->fe4);
            if (t2 != 0) {
                operation_8c25a890((int)o, (int)(*(S_g8c418248 **)0x8c418248));
                ((ObjectData *)o)->ff0 = (int)(*(int *)0x8c5133e0);
                o->v19(t2);
                ((ObjectData *)o)->f110 = 2;
            }
        }
        if (!(--((ObjectData *)o)->f1ac > 0)) {
            ((ObjectData *)o)->f110 = 2;
            return;
L_8c25a532:;
            ((ObjectData *)o)->f112 = (unsigned int)((ObjectData *)o)->f112 >> 1 << 1;
            ((ObjectData *)o)->f10c = 3;
        }
    }
}
