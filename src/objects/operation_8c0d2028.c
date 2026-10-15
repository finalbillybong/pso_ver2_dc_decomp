typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fc80 S_g8c46fc80;
typedef struct S_g8c46fc80_42c S_g8c46fc80_42c;
typedef struct S_g8c46fc80_42c_c S_g8c46fc80_42c_c;
struct S_g8c46fc80 {
    char unknown0[0x42c];
    S_g8c46fc80_42c *f42c;
};
struct S_g8c46fc80_42c {
    char unknown0[0xc];
    S_g8c46fc80_42c_c *f0c;
};
extern void call_8c3827d8(void *);
extern void call_8c0d1f80(int);
void operation_8c0d2028(int a0)
{
    call_8c3827d8((void *)((*(S_g8c46fc80 **)0x8c46fc80)->f42c->f0c));
    *(int *)0x8c46fd74 = (int)(*(int *)((char *)0x8c46fc9c + (a0 * 0x60)));
    call_8c0d1f80((int)((int)(a0 * 0x60 + 0x8c46fc9c) + 0x20));
}
