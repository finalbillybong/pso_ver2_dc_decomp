typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c5062b0 S_L8c5062b0;
typedef struct Frame Frame;
typedef struct S_g8c33817c S_g8c33817c;
typedef struct S_g8c5062a0 S_g8c5062a0;
struct Frame {
    char unknown0[0x4];
    unsigned short f04;
    char unknown6[0xe];
    int f14;
    char unknown18[0x54];
    int f6c;
    int f70;
};
struct S_L8c5062b0 {
    void *f00;
    int f04;
};
extern S_g8c33817c *g_8c33817c;
extern S_g8c5062a0 *g_8c5062a0;
extern S_L8c5062b0 g_8c5062b0;
extern int current_effect_mode(void);
extern int operation_8c22ae58(void);
extern int operation_8c01018c(int);
extern int operation_8c104c60(void);
extern int call_8c372d66(int, void *, Frame *);
extern int call_8c011e9c(int);
extern void call_8c12b880(int, int, int);
extern void operation_8c010240(int, int, int);
extern int call_8c372d98(int);
extern int call_8c377fd0(void *, int);
extern void call_8c011ec0(int);
extern void call_8c3889a4(int, int, int);
extern void call_8c37e9a8(void *, void *, int, int, int);
extern void call_8c37e9b6(void *, void *, int, int);
extern void apply_resource_118780(void *);
void operation_8c22ace8(void)
{
    Frame frame;
    int v107;
    int v106;
    int v110;
    int t3;
    int t5;
    int v105;
    int t1;
    int t2;
    int v108;
    int t4;
    int v109;
    int t6;
    int t7;
    int t8;
    int t9;
    t1 = current_effect_mode();
    if (t1 == 0) {
        t2 = operation_8c22ae58();
        if (t2 != 0) {
            v105 = (int)-2;
            for (;;) {
                v107 = operation_8c01018c((int)g_8c33817c);
                if (v107 != v105) {
                    break;
                }
                operation_8c104c60();
            }
            if (v107 != -1) {
                v108 = (int)-1;
                do {
                    t4 = call_8c372d66(v107, g_8c33817c, (Frame *)((&frame)));
                } while (t4 == v108);
                if (t4 == 0) {
                    t5 = call_8c011e9c((int)((unsigned short)(&frame)->f04 << 9));
                    if (t5 != 0) {
                        call_8c12b880(t5, 0, (int)((unsigned short)(&frame)->f04 << 9));
                        operation_8c010240(v107, (int)g_8c33817c, t5);
                        goto L_8c22ad76;
L_8c22ad70:;
                        operation_8c104c60();
L_8c22ad76:;
                        t6 = call_8c372d98(v107);
                        if (t6 != 0) {
                            goto L_8c22ad70;
                        }
                        t7 = call_8c377fd0((void *)(&(&frame)->f14), t5);
                        if (t7 != 0) {
                            call_8c011ec0(t5);
                            return;
                        }
                        v109 = (int)(&frame)->f70;
                        v108 = (int)v109;
                        v110 = (int)(&frame)->f6c;
                        v107 = (int)v110;
                        t8 = call_8c011e9c(v108);
                        g_8c5062a0 = (S_g8c5062a0 *)(int)(t8);
                        if (t8 != 0) {
                            call_8c3889a4(t8, v107, v108);
                            (&g_8c5062b0)->f00 = (void *)0x8c5062a4;
                            (&g_8c5062b0)->f04 = 1;
                            call_8c37e9a8((void *)((void *)0x8c5062b8), g_8c5062a0, 0, 0, 0);
                            call_8c37e9b6((void *)((void *)0x8c5062a4), (void *)((void *)0x8c5062b8), 0, 0x40000000);
                            apply_resource_118780((void *)((void *)&g_8c5062b0));
                        }
                        call_8c011ec0(t5);
                    }
                }
            }
        }
    }
}
