typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3407f8 S_L8c3407f8;
typedef struct Object Object;
struct S_L8c3407f8 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
struct Object {
    char unknown0[0x20];
    int f20;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c3407c8;
extern Vector3 g_8c3407d4;
extern Vector3 g_8c3407e0;
extern Vector3 g_8c3407ec;
extern char g_8c5134e0;
extern S_L8c3407f8 g_8c3407f8;
extern "C" char gc_8c3407f8[];
extern "C" void operation_8c1cc690(void);
extern "C" void operation_8c2603f4(Object *o)
{
    operation_8c1cc690();
    if (g_8c5134e0 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c3407f8 + 0x0) = *(Vector3 *)&g_8c3407c8;
        *(Vector3 *)&*(Vector3 *)(gc_8c3407f8 + 0xc) = *(Vector3 *)&g_8c3407d4;
        *(Vector3 *)&*(Vector3 *)(gc_8c3407f8 + 0x18) = *(Vector3 *)&g_8c3407e0;
        *(Vector3 *)&*(Vector3 *)(gc_8c3407f8 + 0x24) = *(Vector3 *)&g_8c3407ec;
        g_8c5134e0 = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f20 * 0xc + gc_8c3407f8)))();
}
