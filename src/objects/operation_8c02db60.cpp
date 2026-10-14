typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
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
};
typedef struct ObjectData {
    char unknown0[0xa78];
    int fa78;
    char unknowna7c[0xa6a8];
    int fb124;
} ObjectData;
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
};
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02db60(Object *o, Arg1 *a1)
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
    o->v4((g_8c2e7ce0 + 0xd6));
    ((ObjectData *)o)->fa78 = a1->f01;
    if (((ObjectData *)o)->fb124 != 0) {
        ((void (*)(int))(((ObjectData *)o)->fb124))((int)(a1->f01));
    }
}
