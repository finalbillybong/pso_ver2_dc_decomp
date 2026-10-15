typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da39c S_g8c4da39c;
typedef struct S_g8c4da3a0 S_g8c4da3a0;
typedef struct S_g8c4da3a4 S_g8c4da3a4;
typedef struct S_g8c4da3a8 S_g8c4da3a8;
extern int g_8c4da374;
extern int g_8c4da378;
extern int g_8c4da37c;
extern S_g8c4da39c *g_8c4da39c;
extern S_g8c4da3a0 *g_8c4da3a0;
extern S_g8c4da3a4 *g_8c4da3a4;
extern S_g8c4da3a8 *g_8c4da3a8;
extern void release_render_mode_four_8c05b944(void *, void *);
extern void call_8c38ae68(void);
extern void release_render_mode_four_8c05b938(void);
extern void call_8c3be2dc(int, void *, void *, int);
extern void call_8c38ad10(void);
extern void call_8c37f6f0(int, void *);
extern void call_8c3843a8(void *);
void operation_8c14ae60(void)
{
    if ((int)g_8c4da374 == *(int *)((char *)0x8c2862ac + (g_8c4da378 << 2))) {
        release_render_mode_four_8c05b944((void *)((void *)0x8c4da390), g_8c4da39c);
        g_8c4da378 += 1;
        g_8c4da39c = (S_g8c4da39c *)((int)g_8c4da39c + 0xc);
    }
    if (g_8c4da374 == 0x33) {
        call_8c38ae68();
        release_render_mode_four_8c05b938();
        call_8c3be2dc(0, (void *)((void *)0x8c314ce0), g_8c4da3a0, 4);
        call_8c38ad10();
        call_8c37f6f0((int)((int)g_8c4da3a0 + 0xc), g_8c4da3a0);
    }
    if (((g_8c4da37c & 0x80)) != 0 && g_8c4da374 >= 0x4d && 0x58 >= g_8c4da374) {
        call_8c38ae68();
        release_render_mode_four_8c05b938();
        call_8c3843a8(g_8c4da3a8);
        call_8c38ad10();
        g_8c4da3a8 = (S_g8c4da3a8 *)((int)g_8c4da3a8 + 0x40);
    }
    if (g_8c4da374 >= 0x1d && 0x20 >= g_8c4da374) {
        call_8c38ae68();
        release_render_mode_four_8c05b938();
        call_8c3843a8(g_8c4da3a4);
        call_8c38ad10();
        g_8c4da3a4 = (S_g8c4da3a4 *)((int)g_8c4da3a4 + 0x40);
    }
    g_8c4da374 += 1;
}
