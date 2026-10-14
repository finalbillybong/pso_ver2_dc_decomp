typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x18];
    float f38;
    float f3c;
    char unknown40[0x28];
    int f68;
};
struct Arg1 {
    float f00;
    float f04;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c0dc854(Object *);
extern void call_8c2180b0(void *, int);
Object *operation_8c217f84(Object *o, Arg1 *a1, int a2)
{
    Object **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c336338));
    o->dispatch = (void *)0x8c278314;
    o->tag = (int)(*(int *)0x8c336230);
    o->size = 0x6c;
    o->f38 = a1->f00;
    o->f3c = a1->f04;
    call_8c0dc854(o);
    o->f68 = a2;
    call_8c2180b0((void *)(((char *)o + 0x2c)), a2);
    return o;
}
