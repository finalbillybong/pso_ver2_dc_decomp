typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db484 S_L8c4db484;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_818 S_c8c021ef8_818;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct S_c8c021ef8 {
    char unknown0[0x818];
    S_c8c021ef8_818 *f818;
};
struct S_L8c4db484 {
    char unknown0[0xf];
    char f0f;
};
extern S_g8c4db408 *g_8c4db408;
extern S_L8c4db484 g_8c4db484;
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c04c6a8(void *);
extern void call_8c12b154(void *, int, int);
void operation_8c171440(int a0)
{
    int v1;
    S_c8c021ef8 *t1;
    int t2;
    v1 = (int)((unsigned char)a0 << 2);
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)g_8c4db408 + 0x0) + (v1))));
    if (t1 != 0) {
        t2 = call_8c04c6a8((void *)(t1->f818));
        call_8c12b154((void *)((void *)&g_8c4db484), t2, 0xf);
        (&g_8c4db484)->f0f = 0;
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + (v1)) = 1;
        return;
    }
    *(int *)((char *)((char *)g_8c4db408 + 0x0) + (v1)) = 0;
}
