typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2284 S_g8c4e2284;
typedef struct S_g8c4e2284_64 S_g8c4e2284_64;
typedef struct Object Object;
typedef struct S_vv21 S_vv21;
struct S_g8c4e2284 {
    char unknown0[0x64];
    S_g8c4e2284_64 *f64;
};
struct S_vv21 {
    char unknown0[0x4];
    short f04;
};
struct Object {
    char unknown0[0x39c];
    int f39c;
};
extern void refresh_records_8c1ada14(void);
extern void spawn_effect_alt_8c2285cc(void *, void *, void *);
extern void operation_8c177748(int);
void operation_8c1b6ad4(Object *o)
{
    S_vv21 *v21;
    refresh_records_8c1ada14();
    if (*(int *)0x8c4e2284 != 0) {
        spawn_effect_alt_8c2285cc((void *)o, (void *)(((char *)*(S_g8c4e2284 **)0x8c4e2284 + 0x3c)), (void *)((*(S_g8c4e2284 **)0x8c4e2284)->f64));
    } else {
        spawn_effect_alt_8c2285cc((void *)o, (void *)((void *)0x8c327468), (void *)0);
    }
    operation_8c177748(0x33);
    if (*(int *)0x8c4e2284 != 0) {
        v21 = (S_vv21 *)*(S_g8c4e2284 **)0x8c4e2284;
        v21->f04 |= 1;
        *(int *)0x8c4e2284 = 0;
    }
    o->f39c = 0x12c;
}
