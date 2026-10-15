typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
struct Object {
    char unknown0[0x358];
    int f358;
};
extern void call_8c24cadc(Object *, int);
extern void create_effect_777c(void *, int);
float operation_8c24ce00(Object *o, Arg1 *a1)
{
    if (a1 != 0 && *(int *)0x8c418248 == a1->f20) {
        *(int *)((char *)o + 0x358) -= 1;
        if (!(o->f358 > 0)) {
            o->f358 = 0;
            call_8c24cadc(o, 1);
        } else {
            call_8c24cadc(o, 0);
        }
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x1d0);
        create_effect_777c((void *)(((char *)o + 0x3c)), 1);
    }
    return 0.0f;
}
