typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c50591c S_g8c50591c;
typedef struct S_g8c505920 S_g8c505920;
typedef struct S_x60752 S_x60752;
struct S_x60752 {
    unsigned char f00;
};
extern void call_8c12b880(void *, int, int);
extern void call_8c219bd8(void);
void operation_8c219b80(void)
{
    int v1;
    unsigned char v2;
    call_8c12b880((void *)(*(S_g8c505920 **)0x8c505920), 0, 0xd);
    call_8c219bd8();
    v1 = (int)0;
    while (v1 != 0x84) {
        v2 = (unsigned char)*(unsigned char *)((char *)((char *)*(S_g8c50591c **)0x8c50591c + 0x0) + (v1));
        if ((unsigned int)0xd > v2) {
            ((S_x60752 *)(*(int *)0x8c505920 + v2))->f00 += 1;
        }
        v1 = (int)(v1 + 1);
    }
}
