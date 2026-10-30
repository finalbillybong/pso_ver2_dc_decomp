typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418258 S_g8c418258;
extern S_g8c418258 *g_8c418258;
extern int g_8c41cd20;
extern int g_8c510ba0;
extern int operation_8c02b9e4(void);
extern int lookup_low_id(int);
extern float distance_xz(void *, void *);
int operation_8c250918(void)
{
    int v14;
    int v15;
    int t5;
    int t4;
    int t2;
    int v12;
    int v11;
    int pm6;
    if (g_8c41cd20 != 0) {
        int t1;
        t1 = operation_8c02b9e4();
        if (t1 == 1) {
            return 2;
        }
    }
    if ((int)(g_8c510ba0 != 0) != 0) {
        t2 = operation_8c02b9e4();
        if (t2 == 1) {
            return 2;
        }
    }
    v12 = (int)0;
    v11 = (int)0x37c;
    while (v12 < 4) {
        int t3;
        t3 = lookup_low_id(v12);
        if (t3 != 0 && *(int *)((char *)((char *)t3 + 0x0) + (v11)) != 0) {
            return 0;
        }
        v12 = (int)(v12 + 1);
    }
    pm6 = (int)g_8c418258;
    v14 = (int)1;
    t5 = lookup_low_id(pm6);
    v15 = 0;
    for (; 4 > v15; ) {
        if (v15 != (int)(g_8c418258)) {
            t4 = lookup_low_id(v15);
            if (t4 != 0) {
                if (distance_xz((void *)(t5 + 0x3c), (void *)(t4 + 0x3c)) > 2500.0f) {
                    v14 = (int)0;
                }
            }
        }
        v15 = (int)(v15 + 1);
    }
    return (int)(v14);
}
