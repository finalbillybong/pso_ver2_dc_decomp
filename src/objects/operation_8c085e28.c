typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c469ca0;
extern int g_8c469ca4;
extern char g_8c2ffaa0[];
extern int game_malloc_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int load_pvm_file_tls_8c118528(void *);
void operation_8c085e28(void)
{
    int t1;
    int t2;
    t1 = game_malloc_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 5, (void *)((void *)0x8c2ffa60), 0, 0, 0);
    }
    g_8c469ca0 = (int)(t1);
    t2 = load_pvm_file_tls_8c118528((void *)((g_8c2ffaa0 + 0x4a)));
    g_8c469ca4 = (int)(t2);
}
