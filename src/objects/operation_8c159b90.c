typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x338];
    unsigned short f354;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x318];
    int f350;
};
extern int g_8c418248;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4d9b98;
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c02688c(S_c8c021ef8 *);
extern void operation_8c052124(void *);
extern void destroy_actor_mode_state(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c159b90(Object *o, int a1)
{
    unsigned short v17;
    S_c8c021ef8 *t1;
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26ec94;
        v17 = (unsigned short)o->f354;
        if ((v17 & 0xffff) == g_8c418248) {
            t1 = lookup_low_id((int)(v17 & 0xffff));
            if (t1 != 0) {
                v1 = (int)(((t1->f350 & 1)) != 0);
                if (v1 != 0) {
                    call_8c02688c(t1);
                }
                t1->f34 &= -0x20001;
            }
        }
        g_8c4d9b98 = 0;
        operation_8c052124((void *)o);
        destroy_actor_mode_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
