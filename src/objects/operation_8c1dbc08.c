typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c32ae1c S_g8c32ae1c;
typedef struct S_g8c4db520 S_g8c4db520;
extern char g_8c32ae20[];
extern int operation_8c173460(void *, int);
extern void call_8c1003d0(void *);
void operation_8c1dbc08(void)
{
    int t1;
    int v1;
    if (*(int *)0x8c4e2f80 == 0) {
        t1 = operation_8c173460((void *)(*(S_g8c4db520 **)0x8c4db520), 0xff);
        if (t1 == 0 && *(int *)0x8c4e2f84 == 0) {
            return;
        }
        v1 = *(int *)0x8c4e2f88;
        switch (v1) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            call_8c1003d0((void *)(*(S_g8c32ae1c **)((char *)(g_8c32ae20 - 0x4) + (v1 << 2))));
            *(int *)0x8c4e2f80 = 1;
            return;
        case 0:
            break;
        }
    }
}
