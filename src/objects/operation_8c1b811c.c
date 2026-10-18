typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct S_c8c03ef88_4 S_c8c03ef88_4;
typedef struct S_c8c03ef88_4_4 S_c8c03ef88_4_4;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_0 Arg0_0_0;
typedef struct Arg0_0_0_8 Arg0_0_0_8;
struct S_c8c03ef88 {
    char unknown0[0x4];
    S_c8c03ef88_4 *f04;
};
struct S_c8c03ef88_4 {
    char unknown0[0x4];
    S_c8c03ef88_4_4 *f04;
};
extern S_c8c03ef88 *call_8c03ef88(void *, int);
extern void call_8c0344f0(void *, int, int, int);
void operation_8c1b811c(Object *o)
{
    char *v4;
    int v3;
    int v1;
    int v2;
    char *a;
    char *row;
    S_c8c03ef88 *t1;
    S_c8c03ef88 *t2;
    v1 = (int)0x398;
    v3 = (int)0;
    v2 = (int)0x42c;
    while (3 > v3) {
        row = (char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v1)) + 0x0) + (v2)) + 0x8;
        a = (char *)*(int *)(row + (*(int *)((char *)0x8c327a70 + (v3 << 2)) << 4));
        v4 = (char *)*(int *)(row + (*(int *)((char *)0x8c327a7c + (v3 << 2)) << 4));
        switch (v3) {
        case 0:
            t1 = call_8c03ef88((void *)a, 2);
            call_8c0344f0((void *)(t1->f04->f04), 8, 0, 1);
            t2 = call_8c03ef88((void *)v4, 2);
            call_8c0344f0((void *)(t2->f04->f04), 8, 0, 1);
            break;
        }
        v3 = (int)(v3 + 1);
    }
}
