typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510b20 S_L8c510b20;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    int f68;
};
struct S_L8c510b20 {
    int f00;
    int f04;
};
extern S_L8c510b20 g_8c510b20;
extern void call_8c21df94(Object *, int, int);
extern void call_8c0db30c(Object *);
extern void call_8c21e000(Object *);
extern void operation_8c21e060(void *);
extern void update_view_nodes(void *, void *);
void operation_8c21dd38(Object *o)
{
    if (((o->f68 & 1)) != 0) {
        call_8c21df94(o, (int)((short)(&g_8c510b20)->f00), (int)((short)(&g_8c510b20)->f04));
    }
    call_8c0db30c(o);
    call_8c21e000(o);
    operation_8c21e060((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
