typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
struct S_g8c418a00 {
    char unknown0[0xb150];
    void *fb150;
    char unknownb154[0x10];
    void *fb164;
};
void operation_8c01ba20(void)
{
    (*(S_g8c418a00 **)0x8c418a00)->fb150 = (void *)0x8c01988c;
    (*(S_g8c418a00 **)0x8c418a00)->fb164 = (void *)0x8c019f54;
}
