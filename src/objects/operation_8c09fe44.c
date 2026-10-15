typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Object Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    Vector3 f0c;
    Block16 f18;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    float f24;
    float f28;
    float f2c;
    char unknown30[0x44];
    int f74;
    int f78;
};
extern void create_effect_777c(void *, int);
extern int step_effect_color_alpha(void *, void *, float);
extern void interpolate_effect_vector(void *, void *, float);
void operation_8c09fe44(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    *(Block16 *)&(&frame)->f18 = *(Block16 *)&*(Block16 *)0x8c3021b8;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&*(Vector3 *)0x8c3021c8;
    if (o->f78 != 0) {
        if (o->f78 == 1) {
            goto L_8c09ff0c;
        }
    } else {
        v1 = (int)0;
        while (4 > v1) {
            if (v1 != 0) {
                if (v1 == 1) {
                    goto L_8c09feb0;
                }
                if (v1 == 2) {
                    goto L_8c09febe;
                }
                if (v1 == 3) {
                    goto L_8c09fef4;
                }
            } else {
                create_effect_777c((void *)(&o->f24), 7);
                goto L_8c09fefe;
L_8c09feb0:;
                create_effect_777c((void *)(&o->f24), 0xb);
                goto L_8c09fefe;
L_8c09febe:;
                (&frame)->f00 = o->f24;
                (&frame)->f04 = o->f28 - 20.0f;
                (&frame)->f08 = o->f2c;
                create_effect_777c((void *)(&frame), 0xc);
                goto L_8c09fefe;
L_8c09fef4:;
                create_effect_777c((void *)(&o->f24), 0xe);
            }
L_8c09fefe:;
            v1 = (int)(v1 + 1);
        }
        o->f78 = 1;
    }
L_8c09ff0c:;
    t1 = step_effect_color_alpha((void *)(((char *)o + 0x30)), (void *)(&(&frame)->f18), *(float *)0x8c3021a8);
    if (t1 != 0) {
        o->f04 |= 1;
        return;
    }
    interpolate_effect_vector((void *)(((char *)o + 0x40)), (void *)(&(&frame)->f0c), 0.2f);
    o->f74 += 1;
    if (o->f74 >= 0xf) {
        o->f74 = 0;
    }
}
