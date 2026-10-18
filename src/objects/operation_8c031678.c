typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be10 S_g8c44be10;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv2_8 S_vv2_8;
struct S_g8c44be10 {
    int f00;
};
struct S_vv2 {
    short f00;
    char unknown2[0x2];
    S_vv2_4 *f04;
    S_vv2_8 *f08;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c09f398(int, int, void *, void *, int);
void operation_8c031678(int a0)
{
    int v1;
    S_vv2 *v2;
    int t1;
    v1 = (int)(*(S_g8c44be10 **)0x8c44be10)->f00;
    v2 = (S_vv2 *)v1;
    do {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x74);
        if (t1 != 0) {
            call_8c09f398(t1, a0, (void *)(v2->f04), (void *)(v2->f08), v2->f00);
        }
        v2++;
    } while (v2->f00 >= 0);
}
