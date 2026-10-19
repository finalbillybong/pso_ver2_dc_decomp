typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
struct S_g8c4db9e0 {
    char unknown0[0x7];
    char f07;
};
extern int g_8c4db254;
extern S_g8c4db9e0 *g_8c4db9e0;
extern int call_8c25fd44(void);
extern int operation_8c25fec4(void);
void operation_8c163f34(void)
{
    int t1;
    int t2;
    t1 = call_8c25fd44();
    if (t1 != 1) {
        t2 = operation_8c25fec4();
        if (t2 != 1) {
            return;
        }
    }
    g_8c4db254 = 1;
    if (g_8c4db9e0 != 0) {
        g_8c4db9e0->f07 |= 1;
    }
}
