typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x22608 S_x22608;
typedef struct S_x816 S_x816;
struct S_x816 {
    unsigned char f00;
};
struct S_x22608 {
    unsigned char f00;
};
extern int g_8c4703c0;
extern char g_8c4db6e0[];
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
void operation_8c1778d4(int a0)
{
    int t2;
    int t1;
    int v1;
    unsigned char *p;
    if (a0 < 0 || a0 > 0x3ff) {
        return;
    }
    v1 = (int)g_8c4703c0;
    if (v1 < 0 || v1 >= 4) {
        return;
    }
    t2 = call_8c18e768((int)(a0 + 1), 8);
    t1 = call_8c18e8a0((int)(a0 + 1), 8);
    if (t1 > 0) {
        p = (unsigned char *)g_8c4db6e0 + (v1 << 7) + t2;
        *p = *p & ~(1 << 8 - t1);
        return;
    }
    p = (unsigned char *)(g_8c4db6e0 - 0x1) + (v1 << 7) + t2;
    *p = *p & 0xfe;
}
