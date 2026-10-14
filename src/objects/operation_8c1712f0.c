typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
extern int lookup_low_id(int);
extern void create_child_8c02c6c0(void *);
void operation_8c1712f0(int a0)
{
    int t1;
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2))));
    if (t1 != 0) {
        create_child_8c02c6c0((void *)t1);
    }
}
