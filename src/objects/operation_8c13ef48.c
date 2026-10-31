typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d9c64 S_L8c4d9c64;
typedef struct Frame Frame;
typedef struct S_g8c4d9c64 S_g8c4d9c64;
struct S_L8c4d9c64 {
    S_g8c4d9c64 *f00;
    int f04;
};
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c31467c;
extern int g_8c4d9c60;
extern S_L8c4d9c64 g_8c4d9c64;
extern void release_render_mode_four_8c05b944(void *, void *);
void operation_8c13ef48(void)
{
    Vector3 v;
    int i;
    char *b;
    int off;
    for (i = 0; i < g_8c4d9c64.f04; i++) {
        b = (char *)g_8c4d9c64.f00;
        off = i << 5;
        if (*(int *)((char *)(b + 0x10) + off) == g_8c4d9c60) {
            v = g_8c31467c;
            release_render_mode_four_8c05b944(&v, (char *)(b + off) + 4);
        }
    }
    g_8c4d9c60 += 1;
}
