typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c01c434(void);
extern void call_8c17b8f8(void);
extern void call_8c17ba24(void);
extern void call_8c17bae4(void);
void operation_8c1a6274(void)
{
    int t1;
    t1 = call_8c01c434();
    if (t1 == 1) {
        call_8c17b8f8();
        call_8c17ba24();
        call_8c17bae4();
    }
}
