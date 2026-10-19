typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_120 Arg0_120;
struct Object {
    char unknown0[0x110];
    int f110;
    int f114;
    int f118;
    int f11c;
    Arg0_120 *f120;
    int f124;
};
extern int create_effect_7708(void *, int, int);
extern void set_effect_bit0(void *);
extern void call_8c0a7608(int, int);
void operation_8c185e90(Object *o)
{
    int v1;
    int t1;
    v1 = (int)o->f120;
    if (v1 == 0) {
        t1 = create_effect_7708((void *)(((char *)o + 0x20)), (int)(o->f11c), 0x40);
        o->f120 = (Arg0_120 *)t1;
        if (o->f120 == 0) {
            return;
        }
        set_effect_bit0((void *)(o->f120));
        return;
    }
    switch (o->f124) {
    case 0:
        if (o->f110 >= o->f118) {
            o->f124 = 1;
            o->f114 = 0;
        }
        set_effect_bit0((void *)(o->f120));
        break;
    case 1:
        t1 = o->f114 * 0xc;
        call_8c0a7608(v1, (int)(t1 + (int)o + 0x20));
        o->f114 += 1;
        if (o->f114 >= 0x14) {
            o->f114 = 0;
        }
        if (o->f114 == o->f110) {
            o->f124 = 2;
        }
        break;
    case 2:
        set_effect_bit0((void *)v1);
        break;
    }
}
