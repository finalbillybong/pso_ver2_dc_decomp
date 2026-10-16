typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0xa6c];
    Block8 fa6c;
};
extern void call_8c02f304(S_vv1 *, int, Block8);
void operation_8c217ed8(int a0)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(S_g8c418a00 **)0x8c418a00;
    if (v1 != 0) {
        call_8c02f304(v1, a0, *(Block8 *)&v1->fa6c);
    }
}
