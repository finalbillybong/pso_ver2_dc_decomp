typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c314700 S_L8c314700;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x5e];
    int f64;
    int f68;
};
struct S_L8c314700 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c3146dc;
extern Vector3 g_8c3146e8;
extern Vector3 g_8c3146f4;
extern char g_8c4d9e68;
extern S_L8c314700 g_8c314700;
extern "C" char gc_8c314700[];
extern "C" void operation_8c1402bc(Object *o)
{
    if (!(--o->f68 > 0)) {
        o->f04 |= 1;
        return;
    }
    if (g_8c4d9e68 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c314700 + 0x0) = *(Vector3 *)&g_8c3146dc;
        *(Vector3 *)&*(Vector3 *)(gc_8c314700 + 0xc) = *(Vector3 *)&g_8c3146e8;
        *(Vector3 *)&*(Vector3 *)(gc_8c314700 + 0x18) = *(Vector3 *)&g_8c3146f4;
        g_8c4d9e68 = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f64 * 0xc + gc_8c314700)))();
}
