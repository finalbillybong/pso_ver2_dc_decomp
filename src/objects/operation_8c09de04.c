typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2ebec8 S_g8c2ebec8;
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
extern int current_effect_mode(void);
int operation_8c09de04(int a0, Arg1 *a1)
{
    char *v1;
    int t1;
    int t2;
    t1 = current_effect_mode();
    v1 = (char *)*(int *)((char *)((char *)*(S_g8c2ebec8 **)((char *)0x8c2ebec8 + (t1 << 2)) + 0x4) + (a1->f00 << 4));
    if (v1 != 0) {
        t2 = ((int (*)(void *))(v1))((void *)(((char *)a1 + 0x4)));
        return (int)(t2);
    }
    return 0;
}
