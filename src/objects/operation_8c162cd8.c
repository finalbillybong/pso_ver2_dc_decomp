typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern int g_8c4db248;
extern int g_8c4db24c;
extern int g_8c4db250;
extern int g_8c4db25c;
extern void call_8c257f4c(void);
extern void call_8c192f00(void);
extern int call_8c011ecc(int);
extern void call_8c193658(int, void *, int);
extern int call_8c21871c(void *);
void operation_8c162cd8(void)
{
    int t1;
    int t2;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    call_8c257f4c();
    call_8c192f00();
    t1 = call_8c011ecc(8);
    if (t1 != 0) {
        call_8c193658(t1, (void *)((void *)0x8c317344), 0x800);
    }
    g_8c4db25c = (int)(t1);
    t2 = call_8c21871c((void *)((void *)0x8c317048));
    g_8c4db24c = (int)(t2);
    g_8c4db248 = 0;
    g_8c4db250 = 0;
}
