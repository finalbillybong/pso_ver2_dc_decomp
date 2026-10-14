typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c33fed0 S_g8c33fed0;
typedef struct S_g8c513300 S_g8c513300;
extern S_g8c33fed0 *g_8c33fed0;
extern S_g8c513300 *g_8c513300;
extern int call_8c18de4c(int);
extern int call_8c104d70(void *);
extern void call_8c0787cc(int, void *);
extern void call_8c011ec0(int);
void operation_8c25630c(void)
{
    int v21;
    int t1;
    int t2;
    t1 = call_8c18de4c(0x840);
    g_8c513300 = (S_g8c513300 *)(int)(t1);
    t2 = call_8c104d70(g_8c33fed0);
    if (t2 != 0) {
        call_8c0787cc(t2, g_8c513300);
    }
    call_8c011ec0(t2);
    v21 = (int)0;
    while (v21 != 3) {
        *(int *)((char *)0x8c513304 + (v21 << 2)) = 0;
        v21 = (int)(v21 + 1);
    }
}
