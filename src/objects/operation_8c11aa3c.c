typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv23 S_vv23;
struct S_vv1 {
    int f00;
};
struct S_vv23 {
    int f00;
};
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c11aa3c(void)
{
    int t1;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c310988), 0, 0, 0);
    }
    *(int *)0x8c4d8360 = (int)(t1);
    if (t1 != 0) {
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
}
