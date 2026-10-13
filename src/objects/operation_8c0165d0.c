typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c62c S_g8c41c62c;
typedef struct S_g8c41c630 S_g8c41c630;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv2 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c2e3014[];
extern int operation_8c051d04(void *);
extern void operation_8c016950(S_vv1 *);
extern int operation_8c051cf0(void *);
extern int operation_8c051d18(void *);
extern void call_8c02ea04(void *, int, void *, int);
extern void call_8c18de08(int);
extern void request_resource_release(void *);
extern void release_stage_8c016a74(void);
void operation_8c0165d0(void)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int t1;
    int t2;
    int t3;
    if (*(int *)0x8c41c630 != 0) {
        t1 = operation_8c051d04((void *)(*(S_g8c41c630 **)0x8c41c630));
        if (t1 != 0) {
            v1 = (S_vv1 *)*(S_g8c41c630 **)0x8c41c630;
            v1->f04 |= 1;
            *(int *)0x8c41c630 = 0;
            operation_8c016950(v1);
            return;
        }
        t2 = operation_8c051cf0((void *)(*(S_g8c41c630 **)0x8c41c630));
        if (t2 != 0) {
            t3 = operation_8c051d18((void *)(*(S_g8c41c630 **)0x8c41c630));
            call_8c02ea04((void *)(*(S_g8c418a00 **)0x8c418a00), (int)(*(int *)0x8c418a00 + *(int *)0x8c41c72c * 0x1c + 0xf14), (void *)((g_8c2e3014 + 0x57)), t3);
            call_8c18de08(t3);
            v2 = (S_vv2 *)*(S_g8c41c630 **)0x8c41c630;
            v2->f04 |= 1;
            *(int *)0x8c41c630 = 0;
            request_resource_release((void *)(*(S_g8c41c62c **)0x8c41c62c));
            *(int *)0x8c41c62c = 0;
            release_stage_8c016a74();
        }
    }
}
