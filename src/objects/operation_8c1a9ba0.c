typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c25c(void);
extern int call_8c17796c(int);
extern void call_8c1869f4(void);
extern void call_8c09d42c(void);
extern void call_8c186ffc(void);
extern void operation_03cee8(void);
extern void operation_195508(void);
extern void call_8c0b4bac(void);
extern void call_8c1bdea4(int);
extern void call_8c177748(int);
void operation_8c1a9ba0(void)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c01c25c();
    if (t1 == 0xf) {
        t2 = call_8c17796c(0x41);
        if (t2 == 0) {
            t3 = call_8c17796c(0x2a);
            if (t3 != 0) {
                call_8c1869f4();
                call_8c09d42c();
                call_8c186ffc();
                operation_03cee8();
                operation_195508();
                call_8c0b4bac();
                call_8c1bdea4(2);
                call_8c1bdea4(4);
                call_8c1bdea4(5);
                call_8c1bdea4(7);
                call_8c1bdea4(9);
                call_8c1bdea4(0xa);
                call_8c177748(0x41);
            }
        }
    }
}
