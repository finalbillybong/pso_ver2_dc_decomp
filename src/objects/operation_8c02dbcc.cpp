typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
class Object;
struct S_vv1 {
    int f00;
};
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
    char unknown2[0x2];
    Block8 f04;
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
    char unknown0[0xa6c];
    Block8 fa6c;
    char unknowna74[0x8];
    int fa7c;
    char unknowna80[0xa6a8];
    int fb128;
} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void operation_8c02dbcc(Object *o, Arg1 *a1)
{
    int v2;
    S_vv1 *v1;
    unsigned char v3;
    char *v25;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    o->v4((g_8c2e7ce0 + 0xe0));
    v3 = (unsigned char)a1->f01;
    if (v3 == 0) {
        *(Block8 *)&((ObjectData *)o)->fa6c = *(Block8 *)&a1->f04;
        ((ObjectData *)o)->fa7c = 1;
        o->v4((g_8c2e7ce0 + 0xe9));
    } else {
        switch ((unsigned int)(v3)) {
        case 1:
            o->v4((g_8c2e7ce0 + 0xf1));
            break;
        case 2:
            o->v4((g_8c2e7ce0 + 0xfe));
            break;
        case 3:
            o->v4((g_8c2e7ce0 + 0x10b));
            break;
        case 4:
            o->v4((g_8c2e7ce0 + 0x11c));
            break;
        case 5:
            o->v4((g_8c2e7ce0 + 0x13f));
            break;
        case 6:
            o->v4((g_8c2e7ce0 + 0x15a));
            break;
        default:
            o->v4((g_8c2e7ce0 + 0x16f));
        }
    }
    v25 = (char *)((ObjectData *)o)->fb128;
    if (v25 != 0) {
        ((void (*)(int))(v25))((int)(a1->f01));
    }
}
