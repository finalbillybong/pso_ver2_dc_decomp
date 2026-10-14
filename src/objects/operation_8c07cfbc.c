typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469b60 S_g8c469b60;
typedef struct S_g8c469b68 S_g8c469b68;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern S_g8c469b60 *g_8c469b60;
extern int g_8c469b64;
extern S_g8c469b68 *g_8c469b68;
extern void operation_193704(void *, short);
extern void call_8c105374(void *);
void operation_8c07cfbc(void)
{
    operation_193704(g_8c469b60, (short)1);
    call_8c105374(g_8c469b68);
    g_8c469b60 = (S_g8c469b60 *)0;
    g_8c469b64 = 0;
    g_8c469b68 = (S_g8c469b68 *)0;
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
