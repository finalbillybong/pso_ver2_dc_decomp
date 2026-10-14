typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x4];
    int f04;
    short f08;
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
};
typedef struct ObjectData {
    char unknown0[0x2a];
    char f2a;
    char unknown2b[0xa31];
    int fa5c;
    char unknowna60[0x1c];
    int fa7c;
    char unknowna80[0x2698];
    int f3118;
    int f311c;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" int operation_8c02e868(void *);
extern "C" void operation_8c02e2a8(Object *o, Arg1 *a1)
{
    int t1;
    o->v4((g_8c2e7ce0 + 0x275));
    *(int *)0x8c42ae84 = (int)(a1->f04);
    *(short *)0x8c42ae88 = a1->f08;
    o->v6();
    ((ObjectData *)o)->fa5c = 0;
    ((ObjectData *)o)->fa7c = 0;
    ((ObjectData *)o)->f3118 = 0;
    ((ObjectData *)o)->f311c = 0;
    t1 = operation_8c02e868((void *)o);
    if (t1 != 0) {
        ((ObjectData *)o)->f2a = 1;
    }
}
