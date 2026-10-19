typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
class Object;
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
    char unknown0[0xb138];
    int fb138;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02dac4(Object *o, int a1)
{
    S_vv1 *v1;
    int v2;
    char *v24;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    o->v4((g_8c2e7ce0 + 0x89));
    v24 = (char *)((ObjectData *)o)->fb138;
    if (v24 != 0) {
        ((void (*)(int))(v24))((int)(a1 + 0xc));
    }
}
