typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3bc Arg0_3bc;
typedef struct Arg0_3dc Arg0_3dc;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x3a0];
    Arg0_3bc *f3bc;
};
struct Arg0_3dc {
    char unknown0[0x4];
    short f04;
};
extern void mark_effect_for_release(void *);
extern void operation_8c052124(void *);
extern void destroy_field_8c0fbfa4(void *, short);
extern void operation_8c0120f4(void *, int);
extern void call_8c122774(void *, Object *);
Object *operation_8c0bc8fc(Object *o, int a1)
{
    int v2;
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c266330;
        v1 = (int)0;
        while (3 > v1) {
            v2 = (int)(v1 << 2);
            if (*(int *)((char *)((char *)o + 0x3dc) + (v2)) != 0) {
                (*(Arg0_3dc **)((char *)((char *)o + 0x3dc) + (v2)))->f04 |= 1;
                *(int *)((char *)((char *)o + 0x3dc) + (v2)) = 0;
            }
            v1 = (int)(v1 + 1);
        }
        mark_effect_for_release((void *)(o->f3bc));
        operation_8c052124((void *)o);
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x3c0)), (short)-1);
        operation_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
