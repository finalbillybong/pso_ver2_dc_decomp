typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c30027c S_L8c30027c;
typedef struct Object Object;
struct S_L8c30027c {
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
extern Vector3 g_8c300264;
extern Vector3 g_8c300270;
extern char g_8c469dac;
extern S_L8c30027c g_8c30027c;
extern "C" char gc_8c30027c[];
extern "C" void operation_8c08b944(Object *o)
{
    if (g_8c469dac == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c30027c + 0x0) = *(Vector3 *)&g_8c300264;
        *(Vector3 *)&*(Vector3 *)(gc_8c30027c + 0xc) = *(Vector3 *)&g_8c300270;
        g_8c469dac = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f9c * 0xc + gc_8c30027c)))();
}
