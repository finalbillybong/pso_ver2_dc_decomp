typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c504960 S_g8c504960;
typedef struct S_g8c505960 S_g8c505960;
typedef struct S_g8c505960_s4 S_g8c505960_s4;
struct S_g8c505960_s4 {
    char unknown0[0x24];
    int f24;
};
extern S_g8c504960 *g_8c504960;
extern S_g8c505960 *g_8c505960;
extern void call_8c12b77c(void *, int, int);
void operation_8c207ca8(int a0)
{
    if (g_8c504960 != 0) {
        call_8c12b77c(g_8c504960, a0, 0x11d4);
        if (g_8c505960 != 0) {
            ((S_g8c505960_s4 *)((char *)g_8c505960 + 0x4))->f24 = 1;
        }
    }
}
