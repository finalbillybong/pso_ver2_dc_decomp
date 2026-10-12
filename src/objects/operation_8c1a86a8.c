typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c323e8c S_g8c323e8c;
extern int current_effect_mode(void);
extern void call_8c1a80d4(void *);
void operation_8c1a86a8(void)
{
    int t1;
    t1 = current_effect_mode();
    call_8c1a80d4(*(S_g8c323e8c **)((char *)0x8c323e8c + (t1 << 2)));
}
