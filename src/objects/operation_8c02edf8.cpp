typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Block188 {
    int words[47];
} Block188;
typedef struct Block1052 {
    int words[263];
} Block1052;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct S_vv3 S_vv3;
class Object;
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
    virtual void v8();
    virtual void v9(Frame *, int);
};
typedef struct ObjectData {
    char unknown0[0xa7c];
    int fa7c;
    char unknowna80[0x74];
    Block1052 faf4;
} ObjectData;
struct Arg1 {
    Block1052 f00;
};
typedef struct Rec28 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
    char f08[0x14];
} Rec28;
typedef struct Inner {
    int f00;
    Rec28 f04[30];
    char unknown34c[0x74];
    char f3c0[0x24];
    char f3e4[0x38];
} Inner;
struct Frame {
    char f00;
    char f01;
    short f02;
    Inner f04;
    Block188 f420;
    Block24 f4dc;
};
struct S_vv3 {
    char f00;
    char f01;
    char f02;
    char f03;
    int f04;
};
struct Arg2 {
    Block188 f00;
};
struct Arg3 {
    Block24 f00;
};
extern "C" char g_8c2e7ce0[];
extern "C" void call_8c034e20(void *);
extern "C" void operation_8c1acbc0(void *);
extern "C" void operation_1c7dd4(void *);
extern "C" void call_8c12b880(Frame *, int, int);
extern "C" void operation_8c073eb4(void *);
extern "C" void operation_8c02edf8(Object *o, Arg1 *a1, Arg2 *a2, Arg3 *a3)
{
    S_vv3 *v3;
    Frame frame;
    int v2;
    short v1;
    o->v4((0x419 + g_8c2e7ce0));
    if (0 != ((ObjectData *)o)->fa7c) {
        char *v4;
        call_8c034e20((void *)(((char *)a1 + 0x370)));
        *(Block1052 *)&((ObjectData *)o)->faf4 = *(&a1->f00);
        v2 = 0x3c4;
        operation_8c1acbc0((void *)((char *)&frame + v2));
        operation_8c1acbc0((void *)frame.f04.f3e4);
        v2 = 0;
        v4 = (char *)&frame.f04;
        v1 = -1;
        while (0x1e > v2) {
            Rec28 *r = &((Inner *)v4)->f04[v2];
            r->f00 = 0;
            r->f01 = (int)v1;
            r->f04 = 0;
            r->f03 = 0;
            r->f02 = 0;
            operation_1c7dd4((void *)r->f08);
            v2++;
        }
        call_8c12b880((Frame *)((&frame)), 0, 0x4f4);
        (&frame)->f00 = 0x61;
        (&frame)->f01 = 2;
        (&frame)->f02 = 0x4f4;
        *(Block1052 *)&(&frame)->f04 = *(&((ObjectData *)o)->faf4);
        *(&(&frame)->f420) = *(Block188 *)&a2->f00;
        *(&(&frame)->f4dc) = *(&a3->f00);
        operation_8c073eb4(v4);
        o->v9((&frame), 0x4f4);
    }
}
