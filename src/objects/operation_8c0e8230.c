typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c470300 S_g8c470300;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    int f00;
};
extern S_g8c470300 *g_8c470300;
extern void call_8c105374(void *);
void operation_8c0e8230(void)
{
    call_8c105374(g_8c470300);
    g_8c470300 = (S_g8c470300 *)0;
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
