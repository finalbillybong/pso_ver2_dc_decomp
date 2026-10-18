typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_39c Arg0_39c;
typedef struct Arg0_3bc Arg0_3bc;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x8];
    int f39c;
    int f3a0;
    short f3a4;
    short f3a6;
    char unknown3a8[0x14];
    Arg0_3bc *f3bc;
};
extern void set_effect_bit0(void *);
extern void reset_effect_by_index(void *, int);
extern void call_8c0a7608(void *, void *);
void operation_8c0bf6b8(Object *o)
{
    short v50;
    int v1;
    switch (o->f39c) {
    case 0:
        set_effect_bit0((void *)(o->f3bc));
        return;
    case 0x107:
    case 0x10e:
        break;
    default:
        v50 = o->f3a6;
        if (v50 == o->f3a4) {
            o->f39c = 0x101;
        } else if (((float)v50 * 0.5f) < (float)o->f3a4) {
            o->f39c = 0x102;
        } else if (o->f3a4 > 0) {
            o->f39c = 0x103;
        } else {
            o->f39c = 0;
        }
    }
    if ((o->f390 & 4) == 0) {
        set_effect_bit0((void *)(o->f3bc));
    } else {
        v1 = o->f39c;
        if (o->f3a0 != v1) {
            reset_effect_by_index((void *)(o->f3bc), v1);
            o->f3a0 = o->f39c;
        }
    }
    call_8c0a7608((void *)(o->f3bc), (void *)(((char *)o + 0x3ac)));
}
