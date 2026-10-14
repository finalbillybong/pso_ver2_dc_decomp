typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg1 Arg1;
struct S_c8c122700 {
    char unknown0[0x4c];
    int f4c;
    int f50;
};
struct Arg1 {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x1a8];
    int f1d4;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c1c63d0(S_c8c122700 *, int, Arg1 *, int, int);
void operation_8c1c635c(int a0, Arg1 *a1, int a2, int a3)
{
    S_c8c122700 *t1;
    if ((unsigned short)a2 != 0xffff && a1 != 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t1 != 0) {
            call_8c1c63d0(t1, a0, a1, a2, a3);
        }
        if (t1 != 0) {
            t1->f4c = (int)(a1->f1d4);
            t1->f50 = (int)(a1->f28);
        }
    }
}
