typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3005dc S_L8c3005dc;
typedef struct Object Object;
struct S_L8c3005dc {
    char unknown0[0xc];
    Vector3 f0c;
};
struct Object {
    char unknown0[0x9c];
    int f9c;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c3005c4;
extern Vector3 g_8c3005d0;
extern char g_8c469dcc;
extern S_L8c3005dc g_8c3005dc;
extern "C" char gc_8c3005dc[];
extern "C" void operation_8c08de70(Object *o)
{
    if (g_8c469dcc == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c3005dc + 0x0) = *(Vector3 *)&g_8c3005c4;
        *(Vector3 *)&*(Vector3 *)(gc_8c3005dc + 0xc) = *(Vector3 *)&g_8c3005d0;
        g_8c469dcc = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f9c * 0xc + gc_8c3005dc)))();
}
