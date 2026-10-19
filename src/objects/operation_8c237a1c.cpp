typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c33a1d8 S_L8c33a1d8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x25136 S_x25136;
struct S_L8c33a1d8 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
};
struct Frame {
    Vector3 f00;
};
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x44];
    int f68;
};
struct S_x25136 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c33a1b4;
extern Vector3 g_8c33a1c0;
extern Vector3 g_8c33a1cc;
extern char g_8c510bcc;
extern S_L8c33a1d8 g_8c33a1d8;
extern "C" char gc_8c33a1d8[];
extern "C" void call_8c237cb0(Object *);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c237a1c(Object *o)
{
    Frame frame;
    int t1;
    call_8c237cb0(o);
    if (g_8c510bcc == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c33a1d8 + 0x0) = *(Vector3 *)&g_8c33a1b4;
        *(Vector3 *)&*(Vector3 *)(gc_8c33a1d8 + 0xc) = *(Vector3 *)&g_8c33a1c0;
        *(Vector3 *)&*(Vector3 *)(gc_8c33a1d8 + 0x18) = *(Vector3 *)&g_8c33a1cc;
        g_8c510bcc = 1;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x25136 *)(o->f20 * 0xc + gc_8c33a1d8))->f00;
    t1 = call_8c18e6fc((Frame *)((&frame)));
    if (t1 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        goto L_8c237a9e;
    }
    return;
L_8c237a9e:;
    o->f68 += 1;
}
