typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern void operation_8c157ff0(void);
extern int call_8c218938(int);
void operation_8c157fa8(void)
{
    int t1;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    operation_8c157ff0();
    t1 = call_8c218938(0);
    *(int *)0x8c4daaa8 = (int)(t1);
}
