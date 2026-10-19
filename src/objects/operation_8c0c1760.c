typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x25c];
    short f358;
    char unknown35a[0x3e];
    int f398;
    char unknown39c[0x64];
    float f400;
    char unknown404[0x1c];
    float f420;
    float f424;
};
extern void refresh_follow_effect_8c0129f4(void *);
extern void operation_8c09e6d0(void *);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void create_effect_777c(void *, int);
extern void create_effect_at_8c108394(void *, int);
extern void create_resource_effect_8c1081d4(void *, int);
void operation_8c0c1760(Object *o)
{
    float v1;
    float v2;
    switch (o->f398) {
    case 0:
        refresh_follow_effect_8c0129f4((void *)o);
        operation_8c09e6d0((void *)o);
        o->f358 = 0x1e;
        call_8c05fbf8(0x30025, (void *)(((char *)o + 0x3c)), 0, 0);
        if (((o->f34 & 0x1000000)) != 0) {
            o->f424 = -o->f420 * 0.0153846154f;
            o->ff0 = 0xb;
            o->f398 = 2;
            return;
        }
        o->ff0 = 4;
        o->f398 = 1;
        return;
    case 1:
        call_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        if (30.0f > o->ff8) {
            return;
        }
        create_effect_777c((void *)(((char *)o + 0x3c)), 0xf0);
        o->f398 = 3;
        return;
    case 2:
        call_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        v1 = (float)(o->f420 + o->f424);
        if (v1 > 0.0f) {
            v2 = (float)v1;
        } else {
            v2 = (float)0.0f;
        }
        o->f420 = v2;
        if (30.0f > o->ff8) {
            return;
        }
        create_effect_777c((void *)(((char *)o + 0x3c)), 0xf0);
        call_8c05fbf8(0x30022, (void *)(((char *)o + 0x3c)), 0, 0);
        o->f398 = 3;
        return;
    case 3:
        *(short *)((char *)o + 0x358) -= 1;
        if (o->f358 > 0) {
            return;
        }
        create_effect_at_8c108394((void *)(((char *)o + 0x3c)), 0x1e);
        create_resource_effect_8c1081d4((void *)(((char *)o + 0x3c)), 0xf);
        o->f398 = 4;
        return;
    case 4:
        o->f400 -= 0.3f;
        if (-15.0f > o->f400) {
            o->f04 |= 1;
        }
        return;
    case -1:
        break;
    }
}
