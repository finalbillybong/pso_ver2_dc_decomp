typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c4db6e0[];
extern int g_8c4703c0;
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
int operation_8c17796c(int a0)
{
    int t2;
    int t1;
    int v2;
    if (a0 < 0 || a0 > 0x3ff) {
        return -1;
    }
    v2 = (int)g_8c4703c0;
    if (v2 < 0 || v2 >= 4) {
        return -1;
    }
    t2 = call_8c18e768((int)(a0 + 1), 8);
    t1 = call_8c18e8a0((int)(a0 + 1), 8);
    if (t1 > 0) {
        int s = 8 - t1;
        return (*(unsigned char *)((char *)&*(int *)((char *)g_8c4db6e0 + (v2 << 7)) + (t2)) & 1 << s) >> s;
    }
    return *(unsigned char *)((char *)&*(int *)((char *)(g_8c4db6e0 - 0x1) + (v2 << 7)) + (t2)) & 1;
}
