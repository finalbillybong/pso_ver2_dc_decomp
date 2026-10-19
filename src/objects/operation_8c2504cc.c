typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c01c25c(void);
extern void clear_global_8c159210(void);
extern void clear_global_8c208e24(void);
extern void clear_global_8c20854c(void);
extern void operation_8c207bf0(void);
void operation_8c2504cc(void)
{
    int t1;
    int t2;
    t1 = operation_8c01c25c();
    if (t1 == 0xf) {
        clear_global_8c159210();
    }
    t2 = operation_8c01c25c();
    if (t2 == 0x10) {
        clear_global_8c208e24();
        clear_global_8c20854c();
        operation_8c207bf0();
    }
}
