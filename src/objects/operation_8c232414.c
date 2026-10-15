typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void select_mode10_8c1cc588(void);
extern void select_mode20_8c1cc660(void);
void operation_8c232414(void)
{
    switch (*(unsigned char *)0x8c5108e0) {
    case 0:
        *(char *)0x8c4e3130 = 0;
        select_mode10_8c1cc588();
        return;
    case 1:
        select_mode20_8c1cc660();
        return;
    default:
        for (;;) {
        }
        return;
    }
}
