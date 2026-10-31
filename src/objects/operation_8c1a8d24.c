typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct S_vv5 S_vv5;
struct Arg1 {
    char unknown0[0x88];
    short f88;
};
struct S_vv5 {
    short f00;
};
extern void operation_8c15761c(void *);
extern void operation_8c1a8d94(short, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c157138(void *);
extern void operation_8c1571d4(void *, short);
void operation_8c1a8d24(int a0, Arg1 *a1, int a2)
{
    short *v1;
    short v2;
    short v3;
    v1 = *(short **)((a2 << 2) + 0x8c323ff4);
    v2 = (short)a1->f88;
    operation_8c15761c((void *)a1);
    while ((v3 = *v1) != 0x13) {
        operation_8c1a8d94(v3, (int)a1);
        v1++;
    }
    operation_8c15700c((void *)a1, 178.0f);
    operation_8c157138((void *)a1);
    operation_8c1571d4((void *)a1, v2);
}
