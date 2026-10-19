typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c468964 S_g8c468964;
extern int g_8c46892c;
extern int g_8c468930;
extern S_g8c468964 *g_8c468964;
extern int g_8c468968;
extern int g_8c46896c;
extern int g_8c468970;
extern void call_8c38ae68(void);
extern void release_render_mode_four_8c05b938(void);
extern void call_8c3be2dc(int, void *, void *, int);
extern void call_8c38ad10(void);
extern void release_render_mode_four_8c05b944(void *, void *);
void operation_8c072830(void)
{
    int v6;
    if (g_8c46892c == g_8c468930) {
        call_8c38ae68();
        release_render_mode_four_8c05b938();
        call_8c3be2dc(0, (void *)((void *)0x8c468940), g_8c468964, 3);
        call_8c38ad10();
    }
    if ((int)g_8c46892c == *(int *)((char *)0x8c284d1c + (g_8c468968 << 2))) {
        v6 = (int)g_8c46896c;
        g_8c46896c = v6 + 0xc;
        release_render_mode_four_8c05b944((void *)((void *)0x8c468934), (void *)v6);
        if (++g_8c468968 == 7 && ((g_8c468970 & 0x80)) == 0) {
            g_8c468968 = 0xc;
            g_8c46896c += 0x3c;
        }
        if (g_8c468968 == 0x12 && ((g_8c468970 & 0x200)) == 0) {
            g_8c468968 = 0x20;
            g_8c46896c += 0xa8;
        }
    }
    g_8c46892c += 1;
}
