typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ec10 S_g8c46ec10;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_118 Arg0_118;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x1c];
    int f38;
    char unknown3c[0xdc];
    Arg0_118 *f118;
};
struct S_vv3 {
    int f00;
};
extern void operation_8c09c56c(void *);
extern void operation_8c09b538(void *);
extern void call_8c03dc40(void *, int);
extern void operation_8c09b2ec(Object *);
extern void call_8c18de08(void *);
extern void destroy_object_8c01c500(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c09b0ac(Object *o, int a1)
{
    int v1;
    S_vv3 *v3;
    unsigned int v2;
    if (o != 0) {
        v1 = (int)(void *)0x8c46b06c;
        o->dispatch = (void *)0x8c265828;
        v2 = (unsigned int)v1;
        v2 = (unsigned int)(v2 + 0x3ac0);
        v3 = (S_vv3 *)v1;
        while (v2 > (int)v3) {
            if (v3->f00 != 0) {
                operation_8c09c56c((void *)v3);
            }
            v3 = (S_vv3 *)((char *)v3 + 940);
        }
        operation_8c09b538((void *)o);
        call_8c03dc40((void *)(*(S_g8c46ec10 **)0x8c46ec10), 1);
        *(int *)0x8c46ec10 = 0;
        operation_8c09b2ec(o);
        *(int *)0x8c46eb30 = *(int *)0x8c46eb34 = *(int *)0x8c46eb38 = 0;
        o->f38 = 0;
        call_8c18de08((void *)(o->f118));
        *(int *)0x8c41cb3c = *(int *)0x8c46b068 = *(int *)0x8c46ec14 = 0;
        destroy_object_8c01c500((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
