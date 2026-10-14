typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    Arg0_34 *f34;
    Arg0_38 *f38;
    char unknown3c[0x20];
    float f5c;
};
extern void restore_child_blend(void);
extern void apply_resource_3827d8(void *);
extern void call_8c38aeb4(int);
extern void call_8c38af22(void *, void *);
extern void call_8c38b09e(void *, float);
extern void call_8c38af12(void);
void operation_8c25d820(Object *o)
{
    restore_child_blend();
    apply_resource_3827d8((void *)(o->f30));
    call_8c38aeb4(1);
    call_8c38af22((void *)(o->f34), (void *)(o->f38));
    call_8c38b09e((void *)(((char *)o + 0x3c)), o->f5c);
    call_8c38af12();
}
