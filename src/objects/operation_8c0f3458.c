typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc8];
    int fe4;
};
extern void operation_8c051eb8(void *);
extern void copy_actor_records(void *, void *, int);
Object *operation_8c0f3458(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    (void)home;
    operation_8c051eb8((void *)o);
    o->dispatch = (void *)0x8c2687d0;
    copy_actor_records((void *)o, (void *)a3, a4);
    o->fe4 = a2;
    return o;
}
