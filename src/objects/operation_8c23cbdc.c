typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x280];
    int f280;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
    int fe0;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int allocate_block(void *, unsigned int);
extern void call_8c0b7fcc(int, int, int, void *, float);
void operation_8c23cbdc(int a0, Arg1 *a1, int a2, int a3)
{
    char *v1;
    S_c8c053d84 *t1;
    int t2;
    a1->f280 = 1;
    t1 = lookup_object_by_id((unsigned short)a2);
    if (t1 != 0 && t1->fdc != 0 && t1->fe0 > a3) {
        v1 = (char *)t1->fdc;
        t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x64);
        if (t2 != 0) {
            call_8c0b7fcc(t2, (int)(v1 + a3 * 0x2c + 0x1c), 0, (void *)(*(S_g8c44bea0 **)0x8c44bea0), 5.0f);
        }
    }
}
