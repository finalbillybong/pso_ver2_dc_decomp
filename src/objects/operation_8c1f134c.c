typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c02c194(void);
extern int call_8c01e0e4(int);
extern int call_8c01e148(int);
int operation_8c1f134c(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    t1 = call_8c02c194();
    if (t1 != 0) {
        t2 = call_8c01e0e4(4);
        t3 = call_8c01e0e4(0x40);
        if ((t2 | t3) != 0) {
            t4 = call_8c01e148(0x3a);
            if (t4 != 0) {
                return 0xb;
            }
            t5 = call_8c01e148(0x3b);
            if (t5 != 0) {
                return 0xd;
            }
            t6 = call_8c01e148(0x3c);
            if (t6 != 0) {
                return 0x11;
            }
            t7 = call_8c01e148(0x3d);
            if (t7 != 0) {
                return 7;
            }
            t8 = call_8c01e148(0x3e);
            if (t8 != 0) {
                return 3;
            }
            t9 = call_8c01e148(0x3f);
            if (t9 != 0) {
                return 0x17;
            }
            t10 = call_8c01e148(0x40);
            if (t10 != 0) {
                return 0x67;
            }
            t11 = call_8c01e148(0x41);
            if (t11 != 0) {
                return 0x13;
            }
            t12 = call_8c01e148(0x42);
            if (t12 != 0) {
                return 2;
            }
            t13 = call_8c01e148(0x43);
            if (t13 != 0) {
                return 0x16;
            }
            t14 = call_8c01e148(0x44);
            if (t14 != 0) {
                return 0xa2;
            }
            t15 = call_8c01e148(0x45);
            if (t15 != 0) {
                return 0x66;
            }
        }
    }
    return 0;
}
