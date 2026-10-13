typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469ca0 S_g8c469ca0;
typedef struct S_g8c469ca0_42c S_g8c469ca0_42c;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    int f38;
    char unknown3c[0x50];
    int f8c;
    char unknown90[0x48];
    int fd8;
};
struct S_g8c469ca0 {
    char unknown0[0x42c];
    S_g8c469ca0_42c *f42c;
};
extern void operation_8c1ab100(void *, int, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
Object *operation_8c085d00(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    operation_8c1ab100((void *)o, a1, a2);
    o->dispatch = (void *)0x8c264e88;
    o->tag = (int)(*(int *)0x8c2ffa9c);
    o->size = 0xf0;
    if (!(o->f8c >= 0)) {
        o->f8c = 0;
    }
    if (o->f8c > 1) {
        o->f8c = 1;
    }
    if (*(int *)0x8c469ca0 != 0) {
        o->f38 = (int)(*(int *)((char *)((char *)(*(S_g8c469ca0 **)0x8c469ca0)->f42c + 0x8) + (*(short *)((char *)0x8c284f78 + (o->f8c << 1)) << 4)));
    } else {
        o->f04 |= 1;
        return o;
    }
    copy_actor_records((void *)o, (void *)((void *)0x8c2ffa70), 1);
    o->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    o->fd8 = 3;
    return o;
}
