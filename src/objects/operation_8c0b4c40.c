typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x18];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x90];
    int fd8;
    char unknowndc[0x8];
    int fe4;
};
struct Arg1 {
    Vector3 f00;
};
extern void operation_8c051eb8(void *, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
Object *operation_8c0b4c40(Object *o, Arg1 *a1, int a2)
{
    Object **home = &o;
    (void)home;
    operation_8c051eb8((void *)o, a2);
    o->dispatch = (void *)0x8c265fc4;
    o->f3c = a1->f00;
    copy_actor_records((void *)o, (void *)((void *)0x8c305238), 1);
    o->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    o->fd8 = 6;
    o->fe4 = 0;
    return o;
}
