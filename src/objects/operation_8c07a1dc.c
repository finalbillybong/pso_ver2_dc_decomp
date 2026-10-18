typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c469a8c S_g8c469a8c;
typedef struct Object Object;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0xc];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x34];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x12];
    short f3ba;
};
struct S_g8c469a8c {
    char unknown0[0x8];
    float f08;
};
struct Frame {
    Block_frame_0 f00;
};
extern float call_8c37e480(void *);
extern void create_effect_777c(void *, int);
extern void call_8c01c5f0(Object *);
extern int query_capped_segment(void *, void *);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
extern void call_8c102cd0(void *, int, int, int);
extern void call_8c027090(Object *);
void operation_8c07a1dc(Object *o)
{
    Frame frame;
    float v3;
    float t1;
    int t2;
    if (o->f398 == -1) {
    } else {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                goto L_8c07a278;
            }
            goto L_8c07a378;
        }
        o->f34 &= -0x200001;
        if (((o->f3a4 & 0x800000)) != 0) {
            o->ff0 = 9;
        } else {
            o->ff0 = 5;
        }
        t1 = call_8c37e480((void *)(&o->f318));
        v3 = (float)(*(S_g8c469a8c **)0x8c469a8c)->f08;
        if (t1 > v3) {
            o->f318 = o->f318 * v3 / t1;
            o->f320 = o->f320 * v3 / t1;
        }
        if (((o->f3a4 & 0x400000)) != 0) {
            create_effect_777c((void *)(&o->f324), 0xd7);
        }
        o->f3ba = 0;
        o->f398 = 1;
L_8c07a278:;
        o->f318 *= 0.95f;
        o->f320 *= 0.95f;
        call_8c01c5f0(o);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
        (&frame)->f00.f00 += o->f318;
        (&frame)->f00.f08 += o->f320;
        t2 = query_capped_segment((void *)o, (void *)(&frame));
        if (t2 == 0) {
            apply_object_velocity((void *)o);
        } else {
            o->f320 = 0.0f;
            o->f318 = 0.0f;
        }
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        refresh_follow_effect_8c052180((void *)o);
        if (o->fec == 8) {
            goto L_8c07a378;
        }
        o->f34 &= -0x40301;
        *(int *)((char *)o + 0x3a4) &= -0x800002;
        o->f35a = o->f330;
        if (((o->f34 & 0x800)) != 0) {
            goto L_8c07a378;
        }
        if (((o->f3a4 & 1)) == 0 && o->f30a != 1) {
            o->f39c = o->f30a;
            o->f390 = 1;
        }
        o->f3a4 |= 0x20000;
        goto L_8c07a378;
    }
    o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
L_8c07a378:;
    call_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    call_8c027090(o);
}
