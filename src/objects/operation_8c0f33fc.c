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
extern void call_8c051eb8(int);
extern void copy_actor_records(void *, void *, int);
extern void operation_8c0f34ec(void *, int);
Object *operation_8c0f33fc(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c051eb8((int)o);
    o->dispatch = (void *)0x8c2687d0;
    copy_actor_records((void *)o, (void *)0x8c309e28, 1);
    if (a2 != 0) {
        operation_8c0f34ec((void *)o, a2);
    } else {
        o->fe4 = 0;
    }
    return o;
}
