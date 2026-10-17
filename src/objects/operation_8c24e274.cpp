typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c33f480 S_L8c33f480;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
struct S_L8c33f480 {
    char unknown0[0xc];
    Vector3 f0c;
};
struct Object {
    char unknown0[0x68];
    Arg0_68 *f68;
};
struct Arg0_68 {
    char f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c33f468;
extern Vector3 g_8c33f474;
extern char g_8c511001;
extern S_L8c33f480 g_8c33f480;
extern "C" char gc_8c33f480[];
extern "C" void operation_8c24e274(Object *o)
{
    if (g_8c511001 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c33f480 + 0x0) = *(Vector3 *)&g_8c33f468;
        *(Vector3 *)&*(Vector3 *)(gc_8c33f480 + 0xc) = *(Vector3 *)&g_8c33f474;
        g_8c511001 = 1;
    }
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f68->f00 * 0xc + gc_8c33f480)))();
}
