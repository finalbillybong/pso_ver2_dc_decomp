typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_8c Arg0_8c;
struct Frame {
    float f00;
    float f04;
    float f08;
    Vector3 f0c;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x24];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x14];
    Arg0_8c *f8c;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern int operation_8c03d338(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern int target_within_range_8c185748(void *, unsigned short, float);
extern void call_8c38ade4(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void call_8c38accc(int);
extern float call_8c3845f0(Frame *, void *);
extern void operation_8c01d778(void *, int);
void operation_8c18548c(Object *o)
{
    Frame frame;
    int v3;
    int v1;
    S_c8c021ef8 *t5;
    int v2;
    int t1;
    S_c8c021ef8 *t2;
    int t3;
    int t4;
    int v7;
    int t6;
    float t7;
    v1 = (int)1;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&*(Vector3 *)0x8c3199f4;
    t1 = operation_8c03d338();
    if (t1 == 0) {
        v2 = (int)0;
        while (4 > v2) {
            t2 = lookup_low_id(v2);
            if (t2 != 0) {
                t3 = target_within_range_8c185748((void *)o, (unsigned short)v2, (o->f6c * 10.0f + 30.0f) * (o->f6c * 10.0f + 30.0f));
                if (t3 != 0) {
                    v3 = (int)0;
                    v1 = (int)v3;
                }
            }
            v2 = (int)(v2 + 1);
        }
    }
    t4 = operation_8c03d338();
    if (t4 == 0 && v1 != 0) {
        return;
    }
    call_8c38ade4((void *)((void *)0x8c400500));
    call_8c37df90(0, (void *)(o->f8c));
    call_8c3be280(0, (void *)(&(&frame)->f0c), (void *)(((char *)o + 0x94)));
    call_8c38accc(1);
    v7 = (int)0;
    while (4 > v7) {
        t5 = lookup_low_id(v7);
        if (t5 != 0) {
            t6 = target_within_range_8c185748((void *)o, (unsigned short)v7, o->f6c * 10.0f * (o->f6c * 10.0f));
            if (t6 != 0) {
                (&frame)->f00 = t5->f3c - o->f3c;
                (&frame)->f04 = 0.0f;
                (&frame)->f08 = t5->f44 - o->f44;
                t7 = call_8c3845f0((Frame *)((&frame)), (void *)(((char *)o + 0x94)));
                if (t7 > 0.0f) {
                    operation_8c01d778((void *)t5, (int)((int)o->f70));
                } else {
                    operation_8c01d778((void *)t5, (int)((int)o->f74));
                }
            }
        }
        v7 = (int)(v7 + 1);
    }
}
