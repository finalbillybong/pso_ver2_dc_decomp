typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
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
    char unknowne8[0x18];
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
extern "C" int operation_8c1e8d88(void);
extern "C" int find_local_actor_in_radius(void *, float);
extern "C" void operation_8c1e8b78(int, int);
extern "C" void operation_8c1e8788(Object *o)
{
    int t1;
    int t2;
    if (((ObjectData *)o)->f110 != -1) {
        if (((ObjectData *)o)->f110 != 0) {
            if (((ObjectData *)o)->f110 == 1) {
                goto L_8c1e87d8;
            }
            if (((ObjectData *)o)->f110 == 2) {
                goto L_8c1e8828;
            }
            return;
        }
        ((ObjectData *)o)->f1ac = 0x96;
        ((ObjectData *)o)->f110 = 1;
        ((ObjectData *)o)->f112 |= 1;
        ((ObjectData *)o)->f100 = (int)(*(int *)0x8c4e314c);
        ((ObjectData *)o)->f104 = (int)(*(int *)0x8c4e3154);
        return;
L_8c1e87d8:;
        t1 = operation_8c1e8d88();
        if (t1 == 0) {
            t2 = find_local_actor_in_radius((void *)o, ((ObjectData *)o)->fe4);
            if (t2 != 0) {
                operation_8c1e8b78((int)o, (int)(*(S_g8c418248 **)0x8c418248));
                o->v19(t2);
                ((ObjectData *)o)->f110 = 2;
            }
        }
        if (!(--((ObjectData *)o)->f1ac > 0)) {
            ((ObjectData *)o)->f110 = 2;
            return;
L_8c1e8828:;
            ((ObjectData *)o)->f112 = (unsigned int)((ObjectData *)o)->f112 >> 1 << 1;
            ((ObjectData *)o)->f10c = 3;
        }
    }
}
