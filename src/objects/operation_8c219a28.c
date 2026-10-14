typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c18de4c(int);
extern void call_8c219b80(void);
void operation_8c219a28(void)
{
    int t1;
    int t2;
    t1 = call_8c18de4c(0x84);
    *(int *)0x8c50591c = (int)(t1);
    t2 = call_8c18de4c(0xd);
    *(int *)0x8c505920 = (int)(t2);
    call_8c219b80();
}
