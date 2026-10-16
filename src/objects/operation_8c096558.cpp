typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c300c24 S_L8c300c24;
typedef struct Object Object;
struct S_L8c300c24 {
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
extern Vector3 g_8c300c00;
extern Vector3 g_8c300c0c;
extern Vector3 g_8c300c18;
extern char g_8c469e44;
extern S_L8c300c24 g_8c300c24;
extern "C" char gc_8c300c24[];
extern "C" void call_8c09a498(void);
extern "C" void operation_8c096558(Object *o)
{
    call_8c09a498();
    if (g_8c469e44 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c300c24 + 0x0) = *(Vector3 *)&g_8c300c00;
        *(Vector3 *)&*(Vector3 *)(gc_8c300c24 + 0xc) = *(Vector3 *)&g_8c300c0c;
        *(Vector3 *)&*(Vector3 *)(gc_8c300c24 + 0x18) = *(Vector3 *)&g_8c300c18;
        g_8c469e44 = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f20 * 0xc + gc_8c300c24)))();
}
