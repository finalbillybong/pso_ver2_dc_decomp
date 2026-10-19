typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_68 Arg0_68;
typedef struct Arg0_6c Arg0_6c;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4c];
    Arg0_68 *f68;
    Arg0_6c *f6c;
    Arg0_70 *f70;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void operation_8c199b40(int, int);
extern void destroy_context_8c0db244(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c21cc84(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2785f0;
        if (o->f70 != 0) {
            request_resource_release((void *)(o->f70));
            o->f70 = (Arg0_70 *)0;
        }
        if (o->f6c != 0) {
            request_resource_release((void *)(o->f6c));
            o->f6c = (Arg0_6c *)0;
        }
        operation_8c199b40((int)(o->f68), 1);
        destroy_context_8c0db244((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
