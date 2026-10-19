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
    char f2b;
    short f2c;
    short f2e;
    char unknown30[0xa2c];
    int fa5c;
    int fa60;
};
extern void call_8c037eb8(void *, void *, int);
void operation_8c010de0(int a0, int a1)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)*(S_g8c2e20f0 **)((char *)0x8c2e20f0 + ((short)a1 << 2));
    if (v1 != 0) {
        if ((short)a0 > 0) {
            v1->f2b = 0;
            v1->f2c = a0;
            v1->f2e = 0;
            if (v1->fa5c != 0) {
                call_8c037eb8((void *)((int)v1 + 0x974), (void *)((int)v1 + 0x74), (int)((short)a0));
            }
            if (v1->fa60 == 0) {
                return;
            }
            ((void (*)(S_vv1 *))(v1->fa60))(v1);
            return;
        }
        v1->f2a |= 1;
    }
}
