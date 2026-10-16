typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_s534 S_c8c021ef8_s534;
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_c8c021ef8_534 {
    float f00;
    char unknown4[0x8];
} Block_c8c021ef8_534;
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c021ef8 {
    char unknown0[0x534];
    Block_c8c021ef8_534 f534;
};
struct S_c8c021ef8_s534 {
    char unknown0[0x4];
    float f04;
    float f08;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c1704dc(int a0)
{
    Frame frame;
    char *v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0++ << 2))));
    if (t1 != 0 && &t1->f534 != 0) {
        v1 = (char *)*(int *)0x8c4db408;
        (&frame)->f00.f00 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0++ << 2)) + t1->f534.f00;
        (&frame)->f00.f04 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)a0 << 2)) + ((S_c8c021ef8_s534 *)((char *)t1 + 0x534))->f04;
        (&frame)->f00.f08 = (float)*(int *)((char *)((char *)v1 + 0x0) + ((unsigned char)(a0 + 1) << 2)) + ((S_c8c021ef8_s534 *)((char *)t1 + 0x534))->f08;
        *(Vector3 *)&t1->f534 = *(Vector3 *)&(&frame)->f00;
    }
}
