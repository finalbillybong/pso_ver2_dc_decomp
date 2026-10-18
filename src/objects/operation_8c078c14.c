typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_s3c S_c8c021ef8_s3c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    int f08;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Block8 f3c;
};
struct S_c8c021ef8_s3c {
    char unknown0[0x8];
    int f08;
};
struct Arg0_2c {
    char unknown0[0x4];
    short f04;
};
extern int operation_8c05bbf8(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern int create_effect_769c(void *, int);
extern void call_8c0a7608(Arg0_2c *, Frame *);
void operation_8c078c14(Object *o)
{
    Frame frame;
    char *v3;
    int v4;
    int v2;
    int v1;
    int v5;
    int t1;
    S_c8c021ef8 *t2;
    int t3;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        v1 = (int)0x144;
        v2 = (int)0;
        while (4 > v2) {
            t2 = lookup_low_id(v2);
            if (t2 != 0) {
                v3 = (char *)v2;
                frame = *(Frame *)&t2->f3c;
                v4 = (int)((int)(v3) << 2);
                (&frame)->f00.f04 -= 4.0f;
                if (*(int *)((char *)((char *)o + 0x2c) + (v4)) == 0) {
                    t3 = create_effect_769c((void *)(&frame), v1);
                    *(int *)((char *)((char *)o + 0x2c) + (v4)) = (int)(t3);
                    goto L_8c078caa;
                }
                call_8c0a7608((Arg0_2c *)(*(Arg0_2c **)((char *)((char *)o + 0x2c) + (v4))), (Frame *)((&frame)));
            } else {
                v5 = (int)(v2 << 2);
                if (*(int *)((char *)((char *)o + 0x2c) + (v5)) != 0) {
                    (*(Arg0_2c **)((char *)((char *)o + 0x2c) + (v5)))->f04 |= 1;
                    *(int *)((char *)((char *)o + 0x2c) + (v5)) = 0;
                }
            }
L_8c078caa:;
            v2 = (int)(v2 + 1);
        }
    }
}
