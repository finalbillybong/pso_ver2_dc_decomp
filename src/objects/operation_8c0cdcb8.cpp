typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3b0 Arg0_3b0;
typedef struct Arg0_3c4 Arg0_3c4;
class Arg0_3c8;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x3a8];
    Arg0_3c4 *f3c4;
    Arg0_3c8 *f3c8;
};
struct Arg0_3c4 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_3b0 {
    char unknown0[0x4];
    short f04;
};
class Arg0_3c8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct Arg0_3c8Data {

} Arg0_3c8Data;
extern "C" void operation_8c052124(void *);
extern "C" void destroy_field_8c114790(void *, short);
extern "C" void destroy_actor_mode_state(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c0cdcb8(Object *o, int a1)
{
    int v2;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c266d58;
        if (o->f3c4 != 0) {
            o->f3c4->f04 |= 1;
        }
        operation_8c052124((void *)o);
        v2 = (int)0;
        while (3 > v2) {
            if (*(int *)((char *)((char *)o + 0x3b0) + (v2 << 2)) != 0) {
                (*(Arg0_3b0 **)((char *)((char *)o + 0x3b0) + (v2 << 2)))->f04 |= 1;
            }
            v2 = (int)(v2 + 1);
        }
        if (o->f3c8 != 0) {
            o->f3c8->v0(1);
        }
        destroy_field_8c114790((void *)(((char *)o + 0x3cc)), (short)-1);
        destroy_actor_mode_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
