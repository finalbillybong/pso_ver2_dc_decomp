typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c33f450 S_L8c33f450;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
struct S_L8c33f450 {
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
extern Vector3 g_8c33f438;
extern Vector3 g_8c33f444;
extern char g_8c511000;
extern S_L8c33f450 g_8c33f450;
extern "C" char gc_8c33f450[];
extern "C" void operation_8c0e1bbc(void *);
extern "C" void call_8c24e274(Object *);
extern "C" void operation_8c24e1f4(Object *o)
{
    if (g_8c511000 == 0) {
        *(Vector3 *)&*(Vector3 *)(gc_8c33f450 + 0x0) = *(Vector3 *)&g_8c33f438;
        *(Vector3 *)&*(Vector3 *)(gc_8c33f450 + 0xc) = *(Vector3 *)&g_8c33f444;
        g_8c511000 = 1;
    }
    operation_8c0e1bbc((void *)(((char *)o + 0x2c)));
    (((PmfObj *)(o))->*(*(PMF_0 *)(o->f68->f00 * 0xc + gc_8c33f450)))();
    call_8c24e274(o);
}
