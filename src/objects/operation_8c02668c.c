typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c01d158 S_c8c01d158;
struct S_c8c01d158 {
    char unknown0[0xa];
    short f0a;
};
extern S_c8c01d158 *operation_8c01d158(void *, short);
void operation_8c02668c(int a0)
{
    int v1;
    int v2;
    S_c8c01d158 *t1;
    S_c8c01d158 *t2;
    S_c8c01d158 *t3;
    v1 = (int)0;
    while (0xf > v1) {
        v2 = (int)(v1 << 1);
        t1 = operation_8c01d158((void *)a0, *(short *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c2e7358))));
        t1->f0a |= 0x80;
        t2 = operation_8c01d158((void *)a0, *(short *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c2e7376))));
        t2->f0a |= 0x80;
        t3 = operation_8c01d158((void *)a0, *(short *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c2e7394))));
        t3->f0a |= 0x80;
        v1 = (int)(v1 + 1);
    }
}
