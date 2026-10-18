typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_58 S_frame_58;
typedef struct S_frame_5c S_frame_5c;
typedef struct S_frame_b8 S_frame_b8;
typedef struct S_frame_bc S_frame_bc;
typedef struct S_g8c338174 S_g8c338174;
typedef struct S_g8c338178 S_g8c338178;
struct Frame {
    char unknown0[0x58];
    S_frame_58 *f58;
    S_frame_5c *f5c;
    int f60;
    char unknown64[0x54];
    S_frame_b8 *fb8;
    S_frame_bc *fbc;
};
extern S_g8c338174 *g_8c338174;
extern S_g8c338178 *g_8c338178;
extern int current_effect_mode(void);
extern int operation_8c01018c(int);
extern void operation_8c104c60(void);
extern int call_8c011e9c(int);
extern void call_8c011ec0(int);
extern void call_8c12b880(int, int, int);
extern void operation_8c010240(int, int, int);
extern int call_8c372d98(int);
extern int call_8c377fd0(void *, int);
extern void call_8c060380(void *, void *, void *, void *);
extern void call_8c060438(int, int);
void operation_8c22ab48(void)
{
    Frame frame;
    int v106;
    int v104;
    int t1;
    int t5;
    int v103;
    int v105;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    t1 = current_effect_mode();
    switch (t1) {
    case 0:
        v103 = (int)-2;
        for (;;) {
            v104 = operation_8c01018c((int)g_8c338178);
            if (v104 != v103) {
                break;
            }
            operation_8c104c60();
        }
        v105 = (int)-2;
        for (;;) {
            v106 = operation_8c01018c((int)g_8c338174);
            if (v106 != v105) {
                break;
            }
            operation_8c104c60();
        }
        v105 = (int)-1;
        if (v104 != v105) {
            if (v104 != -1) {
                t4 = call_8c011e9c(0x20000);
                if (t4 != 0) {
                    t5 = call_8c011e9c(0x20000);
                    if (t5 == 0) {
                        if (t4 == 0) {
                            return;
                        }
                        call_8c011ec0(t4);
                        return;
                    }
                    if (t5 != 0) {
                        if (t5 != 0) {
                            call_8c12b880(t4, 0, 0x20000);
                            call_8c12b880(t5, 0, 0x20000);
                            operation_8c010240(v104, (int)g_8c338178, t4);
                            while ((t6 = call_8c372d98(v104)) != 0) {
                                operation_8c104c60();
                            }
                            t7 = call_8c377fd0((void *)(&(&frame)->f60), t4);
                            if (t7 != 0) {
                                call_8c011ec0(t4);
                                call_8c011ec0(t5);
                                return;
                            }
                            operation_8c010240(v106, (int)g_8c338174, t5);
                            while ((t8 = call_8c372d98(v106)) != 0) {
                                operation_8c104c60();
                            }
                            t9 = call_8c377fd0((void *)(&frame), t5);
                            if (t9 != 0) {
                                call_8c011ec0(t4);
                                call_8c011ec0(t5);
                                return;
                            }
                            call_8c060380((void *)((&frame)->f58), (void *)((&frame)->f5c), (void *)((&frame)->fb8), (void *)((&frame)->fbc));
                            call_8c011ec0(t4);
                            call_8c011ec0(t5);
                            call_8c060438(0, 0);
                        }
                    }
                }
            }
        }
    }
}
