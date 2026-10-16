typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c301fc4 S_L8c301fc4;
typedef struct Object Object;
struct S_L8c301fc4 {
    char unknown0[0xc];
    Vector3 f0c;
};
struct Object {
    char unknown0[0x20];
    int f20;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c301fac;
extern Vector3 g_8c301fb8;
extern char g_8c46ed50;
extern S_L8c301fc4 g_8c301fc4;
extern "C" char gc_8c301fc4[];
extern "C" void operation_8c09d7ac(Object *);
extern "C" void operation_8c09d740(Object *o)
{
    if (g_8c46ed50 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c301fc4 + 0x0) = *(Vector3 *)&g_8c301fac;
        *(Vector3 *)&*(Vector3 *)(gc_8c301fc4 + 0xc) = *(Vector3 *)&g_8c301fb8;
        g_8c46ed50 = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f20 * 0xc + gc_8c301fc4)))();
    operation_8c09d7ac(o);
}
