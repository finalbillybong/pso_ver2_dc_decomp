typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x18];
    Vector3 f60;
    Vector3 f6c;
};
struct Arg2 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
extern int g_8c2febe4;
extern void operation_8c051eb8(void *);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
Object *operation_8c0800ec(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    (void)home;
    operation_8c051eb8((void *)o);
    o->dispatch = (void *)0x8c264304;
    o->tag = (int)(g_8c2febe4);
    o->size = 0xe4;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f0c;
    *(Vector3 *)&o->f60 = *(Vector3 *)&a2->f18;
    *(Vector3 *)&o->f6c = *(Vector3 *)&a2->f24;
    copy_actor_records((void *)o, (void *)((void *)0x8c2febb8), 1);
    o->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    return o;
}
