typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d9938 S_g8c4d9938;
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
    char unknownf2[0xa6];
    short f198;
    char unknown19a[0x1c];
    volatile unsigned short f1b6;
    char unknown1b8[0x152];
    short f30a;
    char unknown30c[0xc];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x22];
    short f354;
    char unknown356[0x4];
    short f35a;
    char unknown35c[0x28];
    int f384;
    char unknown388[0x8];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c4d9938 {
    char unknown0[0x18];
    int f18;
};
extern void call_8c01c5f0(Object *);
extern int query_capped_segment(void *, void *);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
extern int call_8c18e768(int, int);
void operation_8c125658(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    void *v6;
    float v7;
    int v10;
    int v8;
    int v11;
    int v12;
    short v21;
    int v9;
    int t1;
    int t2;
    if (o->f398 == -1) {
        return;
    }
    switch (o->f398) {
    case 0:
        o->f34 &= -0x200001;
        v1 = (int)(((o->f3a4 & 0x1000000)) != 0);
        if (v1 != 0) {
            v2 = (int)3;
        } else {
            v2 = (int)8;
        }
        o->ff0 = v2;
        o->f398 = 1;
    case 1:
        call_8c01c5f0(o);
        o->f31c = 0.0f;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
        (&frame)->f00.f00 = o->f318 + (&frame)->f00.f00;
        (&frame)->f00.f08 = o->f320 + (&frame)->f00.f08;
        t1 = query_capped_segment((void *)o, (void *)(&frame));
        if (t1 == 0) {
            apply_object_velocity((void *)o);
        } else {
            o->f320 = 0.0f;
            o->f318 = 0.0f;
        }
        o->f318 *= 0.9f;
        o->f320 *= 0.9f;
        v6 = (void *)0;
        v7 = (float)0.0f;
        operation_8c04a43c((void *)o, (void *)v6, v7);
        refresh_follow_effect_8c052180((void *)o);
        if (o->fec != 8) {
            o->f35a = o->f330;
            o->f34 &= -0x201;
            {
                int *pf1 = (int *)((char *)o + 0x3a4);
                *pf1 = (unsigned int)*pf1 >> 1 << 1;
            }
            v8 = (int)o->f3a4;
            v9 = (int)(((v8 & 0x1000000)) != 0);
            v10 = (int)0;
            if (v9 == 0) {
                v11 = (int)(*(S_g8c4d9938 **)((char *)0x8c4d9938 + (o->f384 << 2)))->f18;
                v12 = (int)v11;
                if (!(v11 > 0)) {
                    v12 = (int)0xa;
                }
                t2 = call_8c18e768((int)(o->f198 * v12), 0x64);
                if (t2 >= o->f330) {
                    if (((v8 & 0x2000000)) == 0) {
                        o->f354 = o->f1b6 & 0xffff;
                        o->f3a4 |= 0x2000000;
                    }
                    v10 = (int)2;
                }
            }
            if (((o->f3a4 & 1)) == 0) {
                v21 = (short)o->f30a;
                if (v21 != v10) {
                    o->f39c = (int)(v21);
                    o->f390 = (int)(v10);
                }
            }
        }
    }
}
