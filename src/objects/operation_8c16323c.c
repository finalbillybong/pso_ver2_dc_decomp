typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_14 {
    unsigned char f00;
    unsigned char f01;
    char unknown2[0xa];
    int f0c;
    char unknown10[0x4];
} Block_frame_14;
typedef struct Block_frame_0 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Block_frame_14 f14;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    float f2c;
};
extern void call_8c1c9cdc(void *, Object *);
extern void operation_1c7dd4(void *);
extern int current_effect_mode(void);
extern void call_8c1588b8(int, void *);
extern int global_byte_set_8c08d7e8(void);
extern int operation_19528c(unsigned short);
extern void call_8c1c9730(Frame *);
extern int call_8c1c9bb0(Frame *);
extern void operation_1954bc(int);
extern void call_8c073710(int, int, void *, int);
int operation_8c16323c(Object *o)
{
    Frame frame;
    unsigned char v1;
    unsigned char v2;
    int v10;
    int v15;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    call_8c1c9cdc((void *)(&(&frame)->f14), o);
    if (o->f2c == 0.0f) {
        v1 = (unsigned char)(&frame)->f14.f00;
        v2 = (unsigned char)(&frame)->f14.f01;
        operation_1c7dd4((void *)(&(&frame)->f14));
        (&frame)->f14.f00 = v1;
        (&frame)->f14.f01 = v2;
        t1 = current_effect_mode();
        call_8c1588b8(t1, (void *)(&(&frame)->f14));
    }
    t2 = global_byte_set_8c08d7e8();
    if (t2 != 0) {
        t3 = operation_19528c((unsigned short)0xffff);
        (&frame)->f14.f0c = (int)(t3);
    } else {
        t4 = operation_19528c((unsigned short)(o->f04));
        (&frame)->f14.f0c = (int)(t4);
    }
    *(Object **)0x8c4db240 = o;
    if (&(&frame)->f14 != 0) {
        *(Block20 *)&(&frame)->f00 = *(Block20 *)&(&frame)->f14;
        call_8c1c9730((Frame *)((&frame)));
        t5 = call_8c1c9bb0((Frame *)((&frame)));
        if (t5 != 0 && (unsigned int)5 > (unsigned int)(v1 = (&frame)->f14.f00)) {
            v10 = (int)*(int *)((char *)0x8c317330 + (v1 << 2));
            if (v10 != 0) {
                operation_1954bc((int)((&frame)->f00.f0c));
                v15 = ((int (*)(Frame *))(v10))((Frame *)((&frame)));
                goto L_8c16330e;
            }
        }
    }
    v15 = (int)0;
L_8c16330e:;
    *(int *)0x8c4db240 = 0;
    if (v15 != 0) {
        t6 = current_effect_mode();
        call_8c073710(v15, t6, (void *)(((char *)o + 0xc)), 0);
    }
    return (int)(v15);
}
