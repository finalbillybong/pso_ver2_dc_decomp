typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3146b4 S_L8c3146b4;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    int f2c;
    int f30;
    Arg0_34 *f34;
    char unknown38[0x30];
    int f68;
};
struct Arg0_34 {
    int f00;
};
struct S_L8c3146b4 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern Vector3 g_8c314690;
extern Vector3 g_8c31469c;
extern Vector3 g_8c3146a8;
extern char g_8c4d9e60;
extern S_L8c3146b4 g_8c3146b4;
extern "C" char gc_8c3146b4[];
extern "C" void operation_8c13fa54(Object *o)
{
    if (o->f2c != 1 && --o->f68 > 0) {
        if (((int)(o->f34) & -0x1000000) != (int)((void *)0x8c000000) || (o->f34->f00 & -0x1000000) != (int)((void *)0x8c000000)) {
            o->f04 |= 1;
            return;
        }
        if (g_8c4d9e60 == 0) {
            *(Vector3 *)&*(Vector3 *)(gc_8c3146b4 + 0x0) = *(Vector3 *)&g_8c314690;
            *(Vector3 *)&*(Vector3 *)(gc_8c3146b4 + 0xc) = *(Vector3 *)&g_8c31469c;
            *(Vector3 *)&*(Vector3 *)(gc_8c3146b4 + 0x18) = *(Vector3 *)&g_8c3146a8;
            g_8c4d9e60 = 1;
        }
        if (o->f30 < 0 || o->f30 >= 3) {
            o->f04 |= 1;
            return;
        }
        (((PmfObj *)(o))->*(*(PMF_0 *)(o->f30 * 0xc + gc_8c3146b4)))();
    }
}
