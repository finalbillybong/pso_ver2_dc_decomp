typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_490 Arg0_490;
typedef struct Arg0_494 Arg0_494;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x474];
    Arg0_490 *f490;
    Arg0_494 *f494;
};
struct Arg0_490 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_494 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void release_slots_8c154abc(void *);
extern void release_slots_8c15561c(void *);
extern void destroy_field_8c178048(void *, short);
extern void destroy_actor_mode_state(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c151e1c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26e960;
        operation_8c052124((void *)o);
        if (o->f490 != 0) {
            o->f490->f04 |= 1;
        }
        if (o->f494 != 0) {
            o->f494->f04 |= 1;
        }
        release_slots_8c154abc((void *)o);
        release_slots_8c15561c((void *)o);
        destroy_field_8c178048((void *)(((char *)o + 0x4ac)), (short)-1);
        destroy_actor_mode_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
