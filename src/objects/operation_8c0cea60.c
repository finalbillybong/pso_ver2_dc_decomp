typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fab8 S_g8c46fab8;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x20e];
    short f30a;
    char unknown30c[0xc];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x28];
    int f384;
    char unknown388[0x8];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    int f3a0;
    int f3a4;
    char unknown3a8[0x40];
    int f3e8;
};
struct S_g8c46fab8 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
};
extern int operation_8c05bbf8(void);
extern float object_random_fraction(void *);
extern void call_8c044410(Object *, void *, float);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c01c5f0(void *);
extern int query_capped_segment(void *, void *);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(void *, float, void *);
extern void operation_8c0521a0(void *);
extern void operation_8c05228c(void *);
void operation_8c0cea60(Object *o)
{
    Frame frame;
    int v18;
    int t1;
    int t3;
    switch (o->f398) {
    case 0:
        t1 = operation_8c05bbf8();
        if (t1 != 0) {
            if (object_random_fraction((void *)o) > 0.2f) {
                o->f398 = -1;
                goto L_8c0ceb00;
            }
        }
        o->ff0 = 3;
        call_8c044410(o, (void *)(o->f64), -7.0f);
        o->f398 = 1;
        play_se_8c05fbf8(0x30006, (void *)(((char *)o + 0x3c)), 0, 0);
        o->f3e8 = (int)((*(S_g8c46fab8 **)((o->f384 << 2) + 0x8c46fab8))->f20);
L_8c0ceb00:;
        o->f34 &= -0x200001;
        break;
    case 1:
        operation_8c01c5f0((void *)o);
        if (!(--o->f3e8 > 0)) {
            o->fdc->f18 |= 0x14000000;
            o->f34 |= 0x4000000;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
        (&frame)->f00.f00 = o->f318 + (&frame)->f00.f00;
        (&frame)->f00.f08 = o->f320 + (&frame)->f00.f08;
        t3 = query_capped_segment((void *)o, (void *)(&frame));
        if (t3 == 0) {
            apply_object_velocity((void *)o);
        } else {
            o->f320 = 0.0f;
            o->f318 = 0.0f;
        }
        o->f318 *= 0.75f;
        o->f320 *= 0.75f;
        if (o->ff0 != 0xe) {
            break;
        }
        o->f320 = 0.0f;
        o->f318 = 0.0f;
        o->f398 = 3;
        o->fdc->f18 |= 0x14000000;
        o->f34 |= 0x4000000;
        break;
    case 3:
        operation_8c01c5f0((void *)o);
        if (!(25.0f > o->ff8)) {
            o->fdc->f18 &= -0x14000001;
            o->f34 &= -0x4000001;
        }
        if (o->fec == 8) {
            break;
        }
        o->f398 = -1;
        break;
    case 4:
        *(int *)((char *)o + 0x3a0) -= 1;
        if (o->f3a0 > 0) {
            break;
        }
        o->f398 = -1;
        break;
    case -1:
        o->fdc->f18 &= -0x14000001;
        o->f34 &= -0x4000001;
        o->f34 &= -0x201;
        {
            int *pf1 = (int *)((char *)o + 0x3a4);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        o->f35a = o->f330;
        if (((o->f3a4 & 1)) != 0) {
            return;
        }
        v18 = (int)o->f30a;
        if (v18 == 1) {
        } else {
            o->f39c = (int)(v18);
            o->f390 = 1;
        }
        return;
    case 2:
        break;
    }
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    operation_8c0521a0((void *)o);
    operation_8c05228c((void *)o);
}
