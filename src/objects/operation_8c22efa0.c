typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e1b68 S_g8c2e1b68;
extern void call_8c1778d4(void *);
void operation_8c22efa0(void)
{
    int v1;
    v1 = (int)0;
    while (0x15 > v1) {
        call_8c1778d4(*(S_g8c2e1b68 **)((char *)0x8c2e1b68 + (v1 << 2)));
        v1 = (int)(v1 + 1);
    }
}
