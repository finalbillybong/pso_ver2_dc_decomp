typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_c8c021ef8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c111244(int a0)
{
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((unsigned short)a0);
    if (t1 != 0) {
        if (t1 != 0) {
            t1->v0(1);
        }
    }
}
