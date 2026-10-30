typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c323e80 S_g8c323e80;
typedef struct S_g8c4df884 S_g8c4df884;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char f00;
};
struct S_g8c323e80 {
    char f00;
};
extern S_g8c323e80 *g_8c323e80;
extern S_g8c4df884 *g_8c4df884;
extern int g_8c4df888;
extern int g_8c4df88c;
extern int g_8c4df890;
extern void call_8c12b154(void *, int, int);
extern int call_8c34d35e(int, int);
extern void set_fields_8c1a82a0(void);
extern void call_8c34d6ae(void *, int, void *);
extern int call_8c34da3c(void *);
extern void operation_8c104c60(void);
void operation_8c1a80d4(int a0)
{
    S_vv2 *v2;
    int v1;
    int t1;
    int t2;
    call_8c12b154((void *)((void *)0x8c4df864), a0, 0x20);
    if (g_8c4df88c == 0) {
        t1 = call_8c34d35e(a0, 0);
        g_8c4df884 = (S_g8c4df884 *)(int)(t1);
        if (t1 == 0) {
            return;
        }
        set_fields_8c1a82a0();
        call_8c34d6ae(g_8c4df884, 6, (void *)((void *)0x8c4dc860));
        for (;;) {
            t2 = call_8c34da3c(g_8c4df884);
            if (t2 == 3) {
                break;
            }
            operation_8c104c60();
        }
        g_8c4df888 = v1 = 0;
        v2 = (S_vv2 *)(void *)0x8c4dc860;
        while (0xff > v1) {
            if (v2->f00 == 0) {
                g_8c4df888 = (int)(v1);
                return;
            }
            v1 = (int)(v1 + 1);
            v2 = (S_vv2 *)((char *)v2 + 48);
        }
        return;
    }
    g_8c4df888 = 0;
    g_8c4df890 = 1;
    g_8c323e80->f00 = 0;
}
