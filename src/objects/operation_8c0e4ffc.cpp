typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_334 Arg0_334;
typedef struct S_vv2 S_vv2;
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
    virtual void v19();
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2fc];
    Arg0_334 *f334;
} ObjectData;
struct Arg0_334 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_vv2 {
    char unknown0[0x818];
    int f818;
};
extern "C" float squared_distance_xz(void *, void *);
extern "C" void operation_8c0e4ffc(Object *o)
{
    unsigned short v1;
    S_vv2 *v2;
    int v3;
    int v10;
    int v4;
    int v11;
    int t1;
    float t2;
    if (((ObjectData *)o)->f334 == 0) {
        ((ObjectData *)o)->f34 &= -0x100001;
        return;
    }
    v1 = (unsigned short)((ObjectData *)o)->f334->f20;
    if ((unsigned int)0x1000 > v1) {
        t1 = o->v20(0x1e);
        if (t1 != 0) {
            v2 = (S_vv2 *)((ObjectData *)o)->f334;
            t2 = squared_distance_xz((void *)((int)v2 + 0x3c), (void *)(((char *)o + 0x3c)));
            switch (v2->f818 & 0xe0) {
            case 32:
                v10 = (int)0x100000;
                v3 = (int)((ObjectData *)o)->f34;
                if (((v3 & v10)) != 0) {
                    if (!(t2 > 10000.0f)) {
                        return;
                    }
                    ((ObjectData *)o)->f34 = v3 & -0x100001;
                    return;
                }
                if (!(2500.0f > t2)) {
                    return;
                }
                ((ObjectData *)o)->f34 = v3 | v10;
                return;
            }
            v11 = (int)0x100000;
            v4 = (int)((ObjectData *)o)->f34;
            if (((v4 & v11)) != 0) {
                if (!(t2 > 22500.0f)) {
                    return;
                }
                ((ObjectData *)o)->f34 = v4 & -0x100001;
                return;
            }
            if (!(10000.0f > t2)) {
                return;
            }
            ((ObjectData *)o)->f34 = v4 | v11;
            return;
        }
    }
    ((ObjectData *)o)->f34 |= 0x100000;
}
