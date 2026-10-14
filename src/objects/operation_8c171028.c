typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct S_c8c021ef8 {
    char unknown0[0x20];
    unsigned short f20;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c02b0ec(S_c8c021ef8 *);
void operation_8c171028(int a0)
{
    int v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2))));
    if (t1 != 0) {
        v1 = (int)(t1->f20 == *(int *)0x8c418248);
        if (v1 != 0) {
            call_8c02b0ec(t1);
        }
    }
}
