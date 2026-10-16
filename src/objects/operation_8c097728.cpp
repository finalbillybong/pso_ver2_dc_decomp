typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c300ff4 S_L8c300ff4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x93456 S_x93456;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_L8c300ff4 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
    Vector3 f30;
    Vector3 f3c;
    Vector3 f48;
};
struct Object {
    char unknown0[0x30];
    int f30;
};
struct S_x93456 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c2875c0;
extern Vector3 g_8c300fdc;
extern Vector3 g_8c300fe8;
extern char g_8c469e55;
extern S_L8c300ff4 g_8c300ff4;
extern "C" char gc_8c300ff4[];
extern "C" int call_8c18e6fc(void *);
extern "C" void call_8c097a84(Object *);
extern "C" void call_8c097b8c(Object *);
extern "C" void call_8c097dcc(Object *);
extern "C" void call_8c097e80(Object *);
extern "C" void call_8c09806c(Object *);
extern "C" void call_8c098178(Object *);
extern "C" void operation_8c097728(Object *o)
{
    Frame frame;
    int t1;
    if (g_8c469e55 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c300ff4 + 0x0) = *(Vector3 *)&g_8c300fdc;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c2875c0;
        *(Vector3 *)&*(Vector3 *)(gc_8c300ff4 + 0xc) = *(Vector3 *)&g_8c2875c0;
        *(Vector3 *)&*(Vector3 *)(gc_8c300ff4 + 0x18) = *(Vector3 *)&g_8c300fe8;
        *(Vector3 *)&*(Vector3 *)(gc_8c300ff4 + 0x24) = *(Vector3 *)&(&frame)->f00;
        *(Vector3 *)&*(Vector3 *)(gc_8c300ff4 + 0x30) = *(Vector3 *)&(&frame)->f00;
        *(Vector3 *)&*(Vector3 *)(gc_8c300ff4 + 0x3c) = *(Vector3 *)&(&frame)->f00;
        *(Vector3 *)&*(Vector3 *)(gc_8c300ff4 + 0x48) = *(Vector3 *)&(&frame)->f00;
        g_8c469e55 = 1;
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x93456 *)(o->f30 * 0xc + gc_8c300ff4))->f00;
    t1 = call_8c18e6fc((void *)(&(&frame)->f0c));
    if (t1 != 0) {
        (((PmfObj *)(o))->*(*(PMF_0 *)(&(&frame)->f0c)))();
    }
    call_8c097a84(o);
    call_8c097b8c(o);
    call_8c097dcc(o);
    call_8c097e80(o);
    call_8c09806c(o);
    call_8c098178(o);
}
