typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3c0 Arg0_3c0;
struct Object {
    char unknown0[0x39c];
    int f39c;
    char unknown3a0[0x20];
    Arg0_3c0 *f3c0;
};
extern char g_8c327480[];
extern void refresh_records_8c1ada14(void);
extern void spawn_effect_alt_8c229a4c(void *, void *, void *);
extern void call_8c1003d0(void *);
void operation_8c1b6e70(Object *o)
{
    refresh_records_8c1ada14();
    spawn_effect_alt_8c229a4c((void *)o, (void *)(((char *)o + 0x3b4)), (void *)(o->f3c0));
    call_8c1003d0((void *)((g_8c327480 + 0x9b)));
    o->f39c = 0x72;
}
