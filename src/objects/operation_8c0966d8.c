typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct S_c8c0351c8 S_c8c0351c8;
typedef struct S_g8c44be90 S_g8c44be90;
typedef struct S_g8c469e40 S_g8c469e40;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct Block_vv1_0 {
    char f00;
    char unknown1[0x2f];
    char f30;
    char unknown31[0x1f];
} Block_vv1_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x22];
    int f28;
};
struct S_vv1 {
    Block_vv1_0 f00;
};
struct S_c8c0351c8 {
    Block80 f00;
};
extern S_c8c0351c8 *operation_8c0351c8(int);
extern void call_8c0348bc(void *, int);
void operation_8c0966d8(Object *o)
{
    S_vv1 *v1;
    S_c8c0351c8 *t1;
    if (!(--o->f28 > 0)) {
        v1 = (S_vv1 *)(*(int *)0x8c4db9e0 + 0x370);
        t1 = operation_8c0351c8((int)(*(S_g8c469e40 **)0x8c469e40));
        *(Block80 *)&v1->f00 = *(Block80 *)&t1->f00;
        v1->f00.f30 = -1;
        v1->f00.f00 = 0;
        o->f04 |= 1;
        call_8c0348bc((void *)(*(S_g8c44be90 **)0x8c44be90), (int)(*(int *)0x8c4db9e0 + 0x370));
    }
}
