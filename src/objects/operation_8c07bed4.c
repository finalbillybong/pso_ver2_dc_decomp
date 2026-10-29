typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469ac0 S_g8c469ac0;
typedef struct S_g8c469ac0_0 S_g8c469ac0_0;
typedef struct S_g8c469ac0_4 S_g8c469ac0_4;
typedef struct S_g8c469ac0_8 S_g8c469ac0_8;
typedef struct Object Object;
typedef struct Arg0_48 Arg0_48;
typedef struct S_vv13 S_vv13;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    int f38;
    int f3c;
    float f40;
    float f44;
    Arg0_48 *f48;
};
struct S_g8c469ac0 {
    S_g8c469ac0_0 *f00;
    S_g8c469ac0_4 *f04;
    S_g8c469ac0_8 *f08;
};
struct S_vv13 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c469ac0 *g_8c469ac0;
extern int create_effect_7708(void *, int, int);
extern void call_8c0a7608(void *, void *);
extern void create_effect(void *, int, int);
extern void call_8c05fbf8(int, void *, int, int);
extern int operation_8c065330(void);
extern void operation_8c067ca0(void *, int);
void operation_8c07bed4(Object *o)
{
    float v1;
    float v2;
    float v6;
    S_vv13 *v13;
    int t1;
    int t2;
    switch (o->f3c) {
    case 0:
        v6 = 25.0f;
        {
            float *p = &o->f40;
            *p += v6;
            v1 = *p;
        }
        v2 = (float)o->f44;
        if (v1 > v2) {
            o->f38 = 0;
            o->f3c = 1;
            v6 = (float)(v2 - (v1 - v6));
        }
        o->f20 = o->f2c * v6 + o->f20;
        o->f24 = o->f30 * v6 + o->f24;
        o->f28 = o->f34 * v6 + o->f28;
        if (o->f48 == 0) {
            t1 = create_effect_7708((void *)(&o->f20), (int)(g_8c469ac0->f00), 0x40);
            o->f48 = (Arg0_48 *)t1;
        }
        if (o->f48 == 0) {
            return;
        }
        call_8c0a7608((void *)(o->f48), (void *)(&o->f20));
        return;
    case 1:
        o->f38 += 1;
        if (o->f38 == 1) {
            create_effect((void *)(&o->f20), (int)(g_8c469ac0->f04), 0x40);
            if (o->f48 != 0) {
                v13 = (S_vv13 *)o->f48;
                v13->f04 |= 1;
                o->f48 = (Arg0_48 *)0;
            }
            call_8c05fbf8(0x3000c, (void *)(&o->f20), 0, 0);
            t2 = operation_8c065330();
            operation_8c067ca0((void *)t2, (int)(&o->f20));
        }
        if (2 >= o->f38) {
            create_effect((void *)(&o->f20), (int)(g_8c469ac0->f08), 0x40);
            return;
        }
        o->f3c = 2;
        return;
    case 2:
        o->f38 += 1;
        if (o->f38 > 0x64) {
            o->f04 |= 1;
        }
    }
}
