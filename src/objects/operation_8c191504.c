typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4dc2a0 S_g8c4dc2a0;
struct Frame {
    char f00;
    unsigned char f01;
    char f02;
    char f03;
    char f04;
    char unknown5[0x3];
};
extern S_g8c4dc2a0 *g_8c4dc2a0;
extern int operation_8c2097a8(int);
extern int call_8c1916e0(void);
extern void call_8c379d48(void *);
extern void call_8c379d1a(void *, Frame *);
void operation_8c191504(int a0)
{
    Frame frame;
    int t1;
    int t2;
    t1 = operation_8c2097a8(8);
    if (t1 != 0) {
        return;
    }
    t2 = call_8c1916e0();
    g_8c4dc2a0 = (S_g8c4dc2a0 *)(int)(t2);
    if (t2 == -1) {
        return;
    }
    switch (a0) {
    case 0:
        call_8c379d48(g_8c4dc2a0);
        return;
    case 1:
        (&frame)->f00 = 1;
        (&frame)->f01 = 0x80;
        (&frame)->f02 = 7;
        (&frame)->f03 = 0xf;
        (&frame)->f04 = 1;
        call_8c379d1a(g_8c4dc2a0, (Frame *)((&frame)));
        return;
    case 2:
        (&frame)->f00 = 1;
        (&frame)->f01 = 0x80;
        (&frame)->f02 = 7;
        (&frame)->f03 = 0xf;
        (&frame)->f04 = 3;
        call_8c379d1a(g_8c4dc2a0, (Frame *)((&frame)));
        return;
    case 3:
        (&frame)->f00 = 1;
        (&frame)->f01 = 1;
        (&frame)->f02 = 7;
        (&frame)->f03 = 0xf;
        (&frame)->f04 = 0;
        call_8c379d1a(g_8c4dc2a0, (Frame *)((&frame)));
        return;
    case 4:
        (&frame)->f00 = 1;
        (&frame)->f01 = 1;
        (&frame)->f02 = -7;
        (&frame)->f03 = 0xf;
        (&frame)->f04 = 0;
        call_8c379d1a(g_8c4dc2a0, (Frame *)((&frame)));
        return;
    case 5:
        (&frame)->f00 = 1;
        (&frame)->f01 = 0x81;
        (&frame)->f02 = 7;
        (&frame)->f03 = 0xf;
        (&frame)->f04 = 0;
        call_8c379d1a(g_8c4dc2a0, (Frame *)((&frame)));
        return;
    case 6:
        (&frame)->f00 = 1;
        (&frame)->f01 = 0x81;
        (&frame)->f02 = 7;
        (&frame)->f03 = 0xf;
        (&frame)->f04 = 0;
        call_8c379d1a(g_8c4dc2a0, (Frame *)((&frame)));
        return;
    }
}
