typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    int f00;
};
extern void operation_8c258088(void);
extern void call_8c18de08(void *);
void operation_8c257fbc(void)
{
    int v1;
    int v2;
    operation_8c258088();
    v1 = (int)0;
    while (v1 != 2) {
        v2 = (int)(v1 << 2);
        call_8c18de08((void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c513388)))));
        *(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c513388))) = 0;
        v1 = (int)(v1 + 1);
    }
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
}
