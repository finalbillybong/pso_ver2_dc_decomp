typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x16336 S_x16336;
typedef struct S_x56560 S_x56560;
struct S_x16336 {
    unsigned char f00;
};
struct S_x56560 {
    unsigned char f00;
};
extern char g_8c4db6e0[];
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
void operation_8c177848(int a0, int a1)
{
    int t1;
    int t2;
    if (a1 < 0 || a1 > 0x3ff) {
        return;
    }
    if (a0 < 0 || a0 >= 4) {
        return;
    }
    t2 = call_8c18e768((int)(a1 + 1), 8);
    t1 = call_8c18e8a0((int)(a1 + 1), 8);
    if (t1 > 0) {
        ((S_x16336 *)((char *)&*(int *)((char *)g_8c4db6e0 + (a0 << 7)) + t2))->f00 |= 1 << 8 - t1;
        return;
    }
    ((S_x56560 *)((char *)&*(int *)((char *)(g_8c4db6e0 - 0x1) + (a0 << 7)) + t2))->f00 |= 1;
}
