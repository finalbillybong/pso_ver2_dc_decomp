typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4705c0 S_g8c4705c0;
typedef struct S_g8c4705c4 S_g8c4705c4;
typedef struct S_g8c4705c4_0 S_g8c4705c4_0;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(void *);
void operation_8c0f2ea4(void)
{
    int v1;
    int v2;
    v1 = (int)1;
    while (4 > v1) {
        v2 = (int)(v1 << 2);
        call_8c37d534((void *)(*(S_g8c4705c4_0 **)((char *)((char *)*(S_g8c4705c4 **)0x8c4705c4 + 0x0) + (v2))));
        call_8c011ec0((void *)(*(S_g8c4705c4_0 **)((char *)((char *)*(S_g8c4705c4 **)0x8c4705c4 + 0x0) + (v2))));
        v1 = (int)(v1 + 1);
    }
    if (*(int *)0x8c4705c0 != 0) {
        call_8c03dc40((void *)(*(S_g8c4705c0 **)0x8c4705c0), 1);
    }
    if (*(int *)0x8c4705c4 != 0) {
        call_8c18de08((void *)(*(S_g8c4705c4 **)0x8c4705c4));
    }
}
