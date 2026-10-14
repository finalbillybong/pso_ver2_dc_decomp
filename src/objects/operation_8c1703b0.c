typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c03b2f4(void *);
void operation_8c1703b0(int a0)
{
    int v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2))));
    if (t1 != 0) {
        v1 = (int)(t1->f308 == 2);
        if (v1 == 0) {
            call_8c03b2f4((void *)(((char *)t1 + 0x510)));
        }
    }
}
