typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c03651c(void);
extern void call_8c234800(void);
void operation_8c17b8ac(void)
{
    int t1;
    t1 = call_8c03651c();
    if (t1 != 0) {
        call_8c234800();
    }
}
