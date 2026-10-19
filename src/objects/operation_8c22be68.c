typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c506300 S_g8c506300;
typedef struct S_g8c506304 S_g8c506304;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    int f00;
};
extern S_g8c506300 *g_8c506300;
extern S_g8c506304 *g_8c506304;
extern void call_8c18de08(void *);
void operation_8c22be68(void)
{
    call_8c18de08(g_8c506304);
    g_8c506304 = (S_g8c506304 *)0;
    call_8c18de08(g_8c506300);
    g_8c506300 = (S_g8c506300 *)0;
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
