typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct ObjectData {
    char unknown0[0x2a];
    char f2a;
    char f2b;
    char unknown2c[0xa30];
    int fa5c;
    char unknowna60[0x1c];
    int fa7c;
    char unknowna80[0x2698];
    int f3118;
    int f311c;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c010a18(Object *);
extern "C" void call_8c02d238(Object *);
extern "C" void operation_8c02d158(Object *o)
{
    int v2;
    S_vv1 *v1;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    operation_8c010a18(o);
    o->v3();
    if (((ObjectData *)o)->f2a != 0) {
        o->v6();
        o->v4((g_8c2e7ce0 + 0x78));
        ((ObjectData *)o)->fa5c = 0;
        ((ObjectData *)o)->fa7c = 0;
        ((ObjectData *)o)->f3118 = 0;
        ((ObjectData *)o)->f311c = 0;
        return;
    }
    if (((ObjectData *)o)->f2b == 0) {
        *(int *)0x8c42ae80 = (int)(((char *)o + 0x3120));
        call_8c02d238(o);
        o->v7();
    }
}
