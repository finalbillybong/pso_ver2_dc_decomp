typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c628 S_g8c41c628;
typedef struct S_vv1 S_vv1;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_24 S_vv3_24;
struct S_vv1 {
    char unknown0[0x21];
    unsigned char f21;
};
struct S_vv3 {
    char unknown0[0x22];
    char f22;
    char f23;
    S_vv3_24 *f24;
};
extern S_g8c418a00 *g_8c418a00;
extern S_g8c41c628 *g_8c41c628;
extern int operation_8c1e58e8(void *);
extern int operation_8c1e5900(void *);
extern void call_8c02f374(void *, int, int, int, int, int, void *);
extern void release_stage_8c016a74(void);
extern void operation_8c016950(void);
void operation_8c016354(void)
{
    int v5;
    unsigned char v2;
    S_vv3 *v3;
    char v4;
    char v7;
    S_vv1 *v1;
    int t1;
    int t2;
    char pm3;
    v1 = (S_vv1 *)g_8c41c628;
    if (v1 != 0) {
        v2 = (unsigned char)v1->f21;
        if (((v2 & 1)) != 0) {
            t1 = operation_8c1e58e8((void *)v1);
            if (t1 != 0) {
                t2 = operation_8c1e5900(g_8c41c628);
                v3 = (S_vv3 *)g_8c41c628;
                v4 = (char)v3->f22;
                v5 = (int)((char)v4 == 2);
                if ((char)v4 == 1) {
                    v7 = (char)0;
                } else {
                    v7 = (char)v3->f23;
                }
                pm3 = (char)v4;
                call_8c02f374(g_8c418a00, t1, t2, (int)((unsigned char)v7), (int)((unsigned char)v5), (int)((unsigned char)(1 == pm3)), (void *)(v3->f24));
                release_stage_8c016a74();
            } else {
                operation_8c016950();
            }
            return;
        }
        if (((v2 & 2)) != 0) {
            operation_8c016950();
        }
    }
}
