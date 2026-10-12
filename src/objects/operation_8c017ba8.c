typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
struct S_g8c418a00 {
    char unknown0[0xa88];
    int fa88;
};
extern void call_8c09cb48(void);
void operation_8c017ba8(void)
{
    call_8c09cb48();
    (*(S_g8c418a00 **)0x8c418a00)->fa88 = 1;
    *(int *)0x8c41c728 = 1;
}
