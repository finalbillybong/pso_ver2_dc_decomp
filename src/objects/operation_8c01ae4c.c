typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46ed10 S_g8c46ed10;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
};
struct Frame {
    char unknown0[0x80];
};
extern int g_8c41bce4;
extern S_g8c46ed10 *g_8c46ed10;
extern int g_8c46ed18;
extern int g_8c4d8288;
extern char g_8c2e3014[];
extern void call_8c12b048(Frame *, void *, ...);
extern void operation_8c011efc(Frame *);
extern int call_8c011ecc(int);
extern int call_8c20684c(int, void *, int, void *);
extern void call_8c011ed8(int);
extern int call_8c18e808(int, int);
void operation_8c01ae4c(Object *o)
{
    Frame frame;
    int v1;
    int t2;
    int t1;
    int t3;
    if (g_8c4d8288 == 0 && (unsigned int)1 >= (unsigned int)(g_8c41bce4 + -0xe)) {
        Object *p = o;
        v1 = (int)((int)p->f04 + -8);
        call_8c12b048((Frame *)((&frame)), (void *)((g_8c2e3014 + 0x1bd)), (void *)(p->f04));
        operation_8c011efc((Frame *)((&frame)));
        t1 = call_8c011ecc(0x7230);
        if (t1 != 0) {
            t2 = call_8c20684c(t1, (void *)(((char *)p + 0x8)), v1, g_8c46ed10);
            call_8c011ed8(t1);
            t3 = call_8c18e808(t2, 0xc);
            g_8c46ed18 = (int)(t3);
        }
    }
}
