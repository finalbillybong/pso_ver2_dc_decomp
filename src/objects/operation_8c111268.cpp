typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_c8c021ef8;
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c111268(void)
{
    int v2;
    int v1;
    int v3;
    S_c8c021ef8 *t1;
    v1 = (int)0x308;
    v2 = (int)0;
    while (4 > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0) {
            v3 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v1)) == 3);
            if (v3 != 0 && t1 != 0) {
                t1->v0(1);
            }
        }
        v2 = (int)(v2 + 1);
    }
}
