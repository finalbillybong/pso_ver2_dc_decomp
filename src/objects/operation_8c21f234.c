typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
extern S_g8c467180 *g_8c467180;
extern int g_8c4db9e4;
extern int operation_8c104d70(int);
extern void call_8c3889a4(int, int, int);
extern void call_8c011ec0(int);
extern int get_field_8c21f338(int);
extern void operation_8c21f66c(void *, int);
extern void call_8c21f2d4(int);
void operation_8c21f234(void)
{
    int v2;
    int v1;
    int t1;
    int t2;
    int t3;
    v2 = (int)(g_8c4db9e4 + 0x86c);
    t1 = operation_8c104d70((int)((void *)0x8c3369b0));
    call_8c3889a4(v2, t1, 0x420);
    call_8c011ec0(t1);
    v1 = (int)0x123;
    v2 = (int)0;
    while (6 > v2) {
        t2 = get_field_8c21f338(v2);
        operation_8c21f66c((void *)t2, (int)(*(S_g8c467180_2c_0 **)((char *)((char *)g_8c467180->f2c + 0x0) + (v2 + v1 << 2))));
        v2 = (int)(v2 + 1);
    }
    while (0xc > v2) {
        t3 = get_field_8c21f338(v2);
        call_8c21f2d4(t3);
        v2 = (int)(v2 + 1);
    }
}
