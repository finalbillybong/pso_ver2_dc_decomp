typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c308370 S_L8c308370;
typedef struct Object Object;
struct S_L8c308370 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
};
struct Object {
    char unknown0[0x20];
    int f20;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c30834c;
extern Vector3 g_8c308358;
extern Vector3 g_8c308364;
extern char g_8c470328;
extern S_L8c308370 g_8c308370;
extern "C" char gc_8c308370[];
extern "C" void operation_8c0e9730(Object *o)
{
    if (g_8c470328 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c308370 + 0x0) = *(Vector3 *)&g_8c30834c;
        *(Vector3 *)&*(Vector3 *)(gc_8c308370 + 0xc) = *(Vector3 *)&g_8c308358;
        *(Vector3 *)&*(Vector3 *)(gc_8c308370 + 0x18) = *(Vector3 *)&g_8c308364;
        g_8c470328 = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f20 * 0xc + gc_8c308370)))();
}
