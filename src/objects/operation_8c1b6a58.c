typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2284 S_g8c4e2284;
struct S_g8c4e2284 {
    char unknown0[0x390];
    int f390;
};
extern int call_8c1ae1a4(void);
extern void call_8c1ae0ac(int, int);
void operation_8c1b6a58(int a0)
{
    int t1;
    if (*(int *)0x8c4e2284 != 0 && (*(S_g8c4e2284 **)0x8c4e2284)->f390 != 3 && (*(S_g8c4e2284 **)0x8c4e2284)->f390 != 4) {
        t1 = call_8c1ae1a4();
        if (t1 == 0) {
            return;
        }
    }
    call_8c1ae0ac(a0, 7);
}
