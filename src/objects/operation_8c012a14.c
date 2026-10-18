typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv8 S_vv8;
struct S_g8c467240 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_vv8 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c467874;
extern int g_8c467878;
extern int call_8c18e768(int, int);
S_vv8 *operation_8c012a14(int a0)
{
    int v3;
    int v4;
    int t1;
    S_vv8 *v8;
    if ((unsigned int)(unsigned short)a0 >= (unsigned int)0x1000 && (unsigned int)0x4000 > (unsigned int)(unsigned short)a0) {
        v3 = g_8c467874;
        v4 = v3 + g_8c467878 + -1;
        while (v3 < v4) {
            t1 = call_8c18e768(v3 + v4, 2);
            if ((*(S_g8c467240 **)((char *)0x8c467240 + (t1 << 2)))->f20 < (unsigned int)(unsigned short)a0) {
                v3 = t1 + 1;
            } else {
                v4 = t1;
            }
        }
        v8 = (S_vv8 *)*(S_g8c467240 **)((char *)0x8c467240 + (v3 << 2));
        if (v8 != 0 && (unsigned short)a0 == v8->f20) {
            return v8;
        }
    }
    return 0;
}
