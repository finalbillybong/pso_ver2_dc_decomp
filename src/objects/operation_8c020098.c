typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x19c];
    short f19c;
    short f19e;
    char unknown1a0[0x190];
    short f330;
};
struct Arg1 {
    char unknown0[0x22];
    short f22;
    short f24;
    short f26;
};
extern void call_8c01ff68(Object *, void *);
extern void call_8c02a340(Object *);
void operation_8c020098(Object *o, Arg1 *a1)
{
    o->f19c = a1->f24;
    o->f19e = a1->f26;
    call_8c01ff68(o, (void *)(((char *)a1 + 0x118)));
    o->f330 = a1->f22;
    call_8c02a340(o);
}
