typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e20f0 S_g8c2e20f0;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x2a];
    char f2a;
    char unknown2b[0x5];
    int f30;
};
void operation_8c010dac(int a0, int a1)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(S_g8c2e20f0 **)((char *)0x8c2e20f0 + ((short)a1 << 2));
    if (v1 != 0) {
        switch ((short)a0) {
        case 0:
            v1->f30 = 0;
            return;
        }
        v1->f2a |= 1;
    }
}
