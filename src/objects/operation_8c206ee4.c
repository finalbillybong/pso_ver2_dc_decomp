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
    char unknown20[0x60];
    unsigned short f80;
    char unknown82[0x1a];
    int f9c;
};
extern void initialize_grid_8c1566f0(void *, unsigned int);
extern int operation_8c207130(Object *);
extern float call_8c37e2c0(float);
extern int call_8c011ecc(int);
extern void operation_192b14(void *, signed char, signed char);
extern void operation_8c1571d4(void *, int);
extern void call_8c207160(Object *);
extern void operation_8c1570b4(void *, float, float);
Object *operation_8c206ee4(Object *o)
{
    Object **home = &o;
    int t3;
    int t1;
    float t2;
    int v1;
    (void)home;
    initialize_grid_8c1566f0((void *)o, (unsigned int)7);
    o->dispatch = (void *)0x8c278090;
    o->tag = (int)(*(int *)0x8c335d28);
    o->size = 0xa0;
    t1 = operation_8c207130(o);
    t2 = call_8c37e2c0((float)t1 / 7.0f);
    v1 = (int)(int)t2;
    if (!((int)t2 > 0)) {
        v1 = (int)1;
    }
    t3 = call_8c011ecc(8);
    if (t3 != 0) {
        operation_192b14((void *)t3, (signed char)0, (signed char)v1);
    }
    o->f9c = (int)(t3);
    o->f80 = (o->f80 & 0xffff) | 0x100;
    operation_8c1571d4((void *)o, 0);
    call_8c207160(o);
    o->f80 = (o->f80 & 0xffff) | 0x10;
    operation_8c1570b4((void *)o, 223.0f, 184.0f);
    return o;
}
