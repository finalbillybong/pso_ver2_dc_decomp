typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be3c S_g8c44be3c;
struct Frame {
    char unknown0[0x20];
};
extern int g_8c44be0c;
extern int g_8c44be28;
extern S_g8c44be3c *g_8c44be3c;
extern char g_8c2e8428[];
extern void call_8c03ef04(Frame *, int, void *);
extern int call_8c104d50(Frame *);
extern int current_effect_mode(void);
extern int call_8c011e9c(void *);
extern int call_8c105380(Frame *, int);
void operation_8c030b94(int a0)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    g_8c44be28 = 0;
    g_8c44be0c = 0;
    call_8c03ef04((Frame *)((&frame)), a0, (void *)((g_8c2e8428 + 0x30)));
    t1 = call_8c104d50((Frame *)((&frame)));
    g_8c44be3c = (S_g8c44be3c *)(int)(t1);
    if (t1 > 0) {
        t2 = current_effect_mode();
        if (t2 == 0xf) {
            if ((int)(g_8c44be3c) > 0xa000) {
                g_8c44be3c = (S_g8c44be3c *)0;
                return;
            }
            g_8c44be3c = (S_g8c44be3c *)0xa000;
        }
        t3 = call_8c011e9c(g_8c44be3c);
        g_8c44be28 = (int)(t3);
        if (t3 != 0) {
            t4 = call_8c105380((Frame *)((&frame)), t3);
            g_8c44be0c = (int)(t4);
        }
    }
}
