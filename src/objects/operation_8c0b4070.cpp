typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_114 Arg0_114;
typedef struct S_vv1 S_vv1;
class Arg0_108;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xec];
    Arg0_108 *f108;
    char unknown10c[0x4];
    int f110;
    Arg0_114 *f114;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
class Arg0_108 {
public:
    char unknown0[0x24];
    virtual void v0(int);
};
typedef struct Arg0_108Data {

} Arg0_108Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void destroy_effect_d870(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c0b4070(Object *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c266024;
        if (o->f114 != 0) {
            v1 = (S_vv1 *)o->f114;
            v1->f04 |= 1;
            o->f114 = (Arg0_114 *)0;
        }
        if (o->f108 != 0) {
            if (o->f108 != 0) {
                o->f108->v0(1);
            }
            o->f108 = (Arg0_108 *)0;
        }
        o->f110 = 0;
        destroy_effect_d870((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
