typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c418258 S_g8c418258;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct Object {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0x2];
    short f30;
    char unknown32[0xa];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct Frame {
    char f00;
    char unknown1[0x1];
    unsigned short f02;
    char f04;
    char f05;
    char unknown6[0x2];
    char f08;
    char f09;
    short f0a;
    float f0c;
    float f10;
    short f14;
    short f16;
    char f18;
    char unknown19[0x3];
};
struct S_vv4 {
    char f00;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int current_effect_mode(void);
extern int call_8c163d20(int);
extern void operation_8c036964(void *);
void operation_8c162e94(Object *o, int a1, int a2)
{
    Frame frame;
    short v3;
    S_c8c021ef8 *t2;
    S_c8c021ef8 *t1;
    int t3;
    int t4;
    int t5;
    if (o != 0) {
        t1 = lookup_low_id((int)(*(S_g8c418258 **)0x8c418258));
        t2 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t1 != 0 && t2 != 0) {
            t3 = current_effect_mode();
            t4 = call_8c163d20(t3);
            if (t4 != 0) {
                if (t1->f37c == t2->f37c && *(int *)0x8c418258 != *(int *)0x8c418248) {
                    return;
                }
                v3 = (short)o->f30;
                if (v3 != -1) {
                    *(SBlock4 *)&frame = *(SBlock4 *)((char *)*(S_g8c46ed0c **)0x8c46ed0c + (v3 << 2));
                    if ((&frame)->f02 != 0xffff) {
                        (&frame)->f10 = 0.0f;
                        (&frame)->f0c = 0.0f;
                        (&frame)->f14 = 0;
                        (&frame)->f16 = 0;
                        (&frame)->f09 = 0;
                        (&frame)->f08 = 0;
                        (&frame)->f04 = 0x60;
                        (&frame)->f05 = 5;
                        (&frame)->f04 = 0x60;
                        (&frame)->f05 = 6;
                        (&frame)->f08 = *(int *)0x8c44be04;
                        (&frame)->f09 = 0x30;
                        (&frame)->f0c = o->f3c;
                        (&frame)->f10 = o->f44;
                        (&frame)->f14 = o->f2c;
                        (&frame)->f16 = a2;
                        (&frame)->f0a = o->f30;
                        t5 = current_effect_mode();
                        (&frame)->f18 = t5;
                        operation_8c036964((void *)(&(&frame)->f04));
                    }
                }
            }
        }
    }
}
