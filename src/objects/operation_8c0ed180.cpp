typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c308a08 S_L8c308a08;
typedef struct Object Object;
struct S_L8c308a08 {
    char unknown0[0xc];
    Vector3 f0c;
};
struct Object {
    char unknown0[0x176];
    char f176;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c3089f0;
extern Vector3 g_8c3089fc;
extern char g_8c4703cc;
extern S_L8c308a08 g_8c308a08;
extern "C" char gc_8c308a08[];
extern "C" void operation_8c0ed180(Object *o)
{
    if (g_8c4703cc == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c308a08 + 0x0) = *(Vector3 *)&g_8c3089f0;
        *(Vector3 *)&*(Vector3 *)(gc_8c308a08 + 0xc) = *(Vector3 *)&g_8c3089fc;
        g_8c4703cc = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f176 * 0xc + gc_8c308a08)))();
}
