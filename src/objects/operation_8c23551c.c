typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg1 {
    char unknown0[0x88];
    short f88;
};
struct Arg2 {
    float f00;
    float f04;
};
extern void operation_8c15761c(void *);
extern void operation_8c1a8d94(short, int);
extern void operation_8c1570b4(void *, float, float);
extern void operation_8c157138(void *);
extern void operation_8c1571d4(void *, short);
void operation_8c23551c(int a0, Arg1 *a1, Arg2 *a2)
{
    int v3;
    int v2;
    short v1;
    v1 = (short)a1->f88;
    v2 = (int)(*(int *)0x8c4db9e4 + 0x1264);
    operation_8c15761c((void *)a1);
    v3 = (int)0;
    while (0x13 > v3) {
        operation_8c1a8d94(*(short *)((char *)((char *)v2 + 0x0) + (v3 << 1)), (int)a1);
        v3 = (int)(v3 + 1);
    }
    operation_8c1570b4((void *)a1, a2->f00, a2->f04);
    operation_8c157138((void *)a1);
    operation_8c1571d4((void *)a1, v1);
}
