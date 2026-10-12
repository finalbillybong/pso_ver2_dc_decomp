typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505960 S_g8c505960;
typedef struct S_g8c505960_44 S_g8c505960_44;
struct S_g8c505960 {
    char unknown0[0x44];
    S_g8c505960_44 *f44;
};
extern int operation_8c1cdc80(void *);
int operation_8c21dc50(void)
{
    int t1;
    if (*(int *)0x8c505960 != 0 && (*(S_g8c505960 **)0x8c505960)->f44 != 0 && *(int *)0x8c504960 != 0) {
        t1 = operation_8c1cdc80((*(S_g8c505960 **)0x8c505960)->f44);
        return *(int *)0x8c504960 + t1 * 0x98 + 0xc;
    }
    return 0;
}
