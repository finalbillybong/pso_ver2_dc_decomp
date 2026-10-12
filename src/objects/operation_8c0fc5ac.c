typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x34];
    int f34;
};
extern void call_8c0e1bbc(int);
extern void call_8c0fc620(int, Arg1 *);
extern void call_8c0fc6d0(int, Arg1 *);
extern void call_8c0fc7f8(int, Arg1 *);
void operation_8c0fc5ac(int a0, Arg1 *a1)
{
    call_8c0e1bbc(a0 + 0x2c);
    if (((a1->f34 & 0x10000000)) != 0) {
        call_8c0fc620(a0, a1);
        return;
    }
    if (((a1->f34 & -0x80000000)) != 0) {
        call_8c0fc6d0(a0, a1);
        return;
    }
    if (((a1->f34 & 0x20000000)) != 0) {
        call_8c0fc7f8(a0, a1);
    }
}
