typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x48];
    char f68;
    char f69;
    char unknown6a[0xe];
    int f78;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c23081c(Object *);
Object *operation_8c230538(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c3387ac));
    o->dispatch = (void *)0x8c278f38;
    o->tag = (int)(*(int *)0x8c3386b0);
    o->size = 0x7c;
    o->f78 = a1;
    o->f68 = 0;
    o->f69 = 1;
    call_8c23081c(o);
    return o;
}
