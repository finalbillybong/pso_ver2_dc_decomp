typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Arg1 Arg1;
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x5b0];
    unsigned short f5f8;
};
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern float call_8c130334(float, float);
extern void call_8c1f0948(int, Arg1 *, int);
void operation_8c11160c(int a0, Arg1 *a1)
{
    S_c8c021ef8 *t1;
    S_c8c021ef8 *t2;
    float t3;
    t2 = lookup_low_id((int)((unsigned short)a0));
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 == 0 || (unsigned short)a0 == 0) {
        return;
    }
    if ((t2->f5f8 & 0xffff) != 0xffff) {
        t3 = call_8c130334(a1->f00 - t1->f3c, a1->f08 - t1->f44);
        call_8c1f0948(a0, a1, (int)((int)(t3 * 65536.0f / 6.28318405f)));
    }
}
