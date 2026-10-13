typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_g8c4db9ec S_g8c4db9ec;
typedef struct S_g8c510ba0 S_g8c510ba0;
struct S_g8c510ba0 {
    char unknown0[0x20];
    int f20;
};
struct S_g8c4db9e4 {
    int f00;
    char unknown4[0x8];
    int f0c;
};
struct Frame {
    int f00;
    int f04;
};
struct S_L8c4dbaf8 {
    int f00;
    int f04;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4db9e0 *g_8c4db9e0;
extern S_g8c4db9e4 *g_8c4db9e4;
extern S_g8c4db9ec *g_8c4db9ec;
extern S_g8c510ba0 *g_8c510ba0;
extern S_L8c4dbaf8 g_8c4dbaf8;
extern void call_8c191504(int);
extern int lookup_low_id(int);
extern int operation_2391f4(void *);
extern void call_8c027d54(void);
extern void call_8c035388(void);
extern void call_8c36d4c0(void *, Frame *);
extern void call_8c36d3ca(void *);
extern void call_8c177a90(void);
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
extern void call_8c12b77c(int, void *, int);
extern void call_8c17f024(void *);
extern void call_8c17eecc(void);
int operation_8c180ae8(void)
{
    Frame frame;
    int v1;
    int v3;
    int v85;
    int t1;
    int t2;
    int t3;
    int t4;
    call_8c191504(0);
    if (g_8c4db9e0 != 0 && g_8c4db9e4 != 0 && g_8c4db9ec != 0) {
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 != 0) {
            t2 = operation_2391f4((void *)((void *)0x8c41ce5c));
            if ((unsigned char)t2 != 1) {
                v3 = (int)0;
                if (g_8c510ba0 != 0) {
                    v1 = (int)0;
                    if (g_8c510ba0->f20 == 2) {
                        v1 = (int)1;
                    }
                    v3 = (int)v1;
                }
                if (v3 != 1) {
                    call_8c027d54();
                    call_8c035388();
                }
            }
        }
        if (g_8c4db9e4 != 0) {
            g_8c4db9e4->f00 = (unsigned int)g_8c4db9e4->f00 >> 2 << 2;
        }
        if (g_8c4db9e4 != 0) {
            call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)((&frame)));
            call_8c36d3ca((void *)((void *)0x8c4dbae0));
            call_8c36d4c0((void *)((void *)0x8c4dbae0), (Frame *)(&(&frame)->f04));
            g_8c4db9e4->f0c = (&frame)->f04 - (&frame)->f00 + g_8c4db9e4->f0c;
        }
        call_8c177a90();
        t3 = operation_8c2324e0();
        v85 = (int)t3;
        if (t3 == 0) {
            t4 = operation_8c2324c0();
            v85 = (int)t4;
        }
        (&g_8c4dbaf8)->f04 = (int)(v85);
        (&g_8c4dbaf8)->f00 = (int)(v85);
        call_8c12b77c((int)((int)(g_8c4db9ec) + 4), g_8c4db9e0, 0x41c);
        call_8c12b77c((int)((int)(g_8c4db9ec) + 0x420), (void *)g_8c4db9e4, 0x12d8);
        call_8c17f024(g_8c4db9ec);
        call_8c17eecc();
    }
    return -0x10000;
}
