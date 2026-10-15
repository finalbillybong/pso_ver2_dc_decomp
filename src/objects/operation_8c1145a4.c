typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8260 S_g8c4d8260;
typedef struct S_g8c4d8264 S_g8c4d8264;
typedef struct S_g8c4d8264_0 S_g8c4d8264_0;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c18de08(void *);
extern void call_8c03dc40(void *, int);
void operation_8c1145a4(void)
{
    int v1;
    int v2;
    v1 = (int)1;
    while (4 > v1) {
        v2 = (int)(v1 << 2);
        call_8c37d534((void *)(*(S_g8c4d8264_0 **)((char *)((char *)*(S_g8c4d8264 **)0x8c4d8264 + 0x0) + (v2))));
        call_8c011ec0((void *)(*(S_g8c4d8264_0 **)((char *)((char *)*(S_g8c4d8264 **)0x8c4d8264 + 0x0) + (v2))));
        v1 = (int)(v1 + 1);
    }
    if (*(int *)0x8c4d8264 != 0) {
        call_8c18de08((void *)(*(S_g8c4d8264 **)0x8c4d8264));
    }
    if (*(int *)0x8c4d8260 != 0) {
        call_8c03dc40((void *)(*(S_g8c4d8260 **)0x8c4d8260), 1);
    }
}
