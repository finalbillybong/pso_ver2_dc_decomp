typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c4db6e0[];
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
int operation_8c177a00(int a0, int a1)
{
    int t1;
    int t2;
    if (a1 < 0 || a1 > 0x3ff) {
        return -1;
    }
    if (a0 < 0 || a0 >= 4) {
        return -1;
    }
    t2 = call_8c18e768((int)(a1 + 1), 8);
    t1 = call_8c18e8a0((int)(a1 + 1), 8);
    if (t1 > 0) {
        int s = 8 - t1;
        return (*(unsigned char *)((char *)&*(int *)((char *)g_8c4db6e0 + (a0 << 7)) + (t2)) & 1 << s) >> s;
    }
    return *(unsigned char *)((char *)&*(int *)((char *)(g_8c4db6e0 - 0x1) + (a0 << 7)) + (t2)) & 1;
}
