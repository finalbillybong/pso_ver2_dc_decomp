typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d9c6c S_L8c4d9c6c;
typedef struct S_c8c167fd4 S_c8c167fd4;
typedef struct S_x44768 S_x44768;
struct S_L8c4d9c6c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_x44768 {
    float f00;
};
struct S_c8c167fd4 {
    float f00;
};
extern int g_8c4d9dec;
extern int g_8c4d9df0;
extern S_L8c4d9c6c g_8c4d9c6c;
extern S_c8c167fd4 *record64_8c167fd4(int);
void operation_8c13f1d8(int a0, int a1)
{
    int found;
    int i;
    S_c8c167fd4 *t1;
    int n;
    found = 0;
    t1 = record64_8c167fd4(a1);
    n = g_8c4d9dec;
    for (i = 0; i < n; i++) {
        if (a0 == *(int *)((char *)&g_8c4d9c6c + i * 0xc)) {
            found = 1;
        }
    }
    if (found == 0) {
        *(int *)((char *)&g_8c4d9c6c.f08 + (n * 0xc)) = a1;
        ((S_x44768 *)((char *)&g_8c4d9c6c.f04 + n * 0xc))->f00 = t1->f00;
        *(int *)((char *)&g_8c4d9c6c + (n * 0xc)) = a0;
        g_8c4d9df0 = a0;
        g_8c4d9dec += 1;
    }
}
