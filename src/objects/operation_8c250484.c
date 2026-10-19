typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c01c25c(void);
extern void clear_global_8c159204(void);
extern void call_8c207b68(void);
extern void clear_global_8c208540(void);
extern void clear_global_8c208e18(void);
void operation_8c250484(void)
{
    int t1;
    int t2;
    t1 = operation_8c01c25c();
    if (t1 == 0xf) {
        clear_global_8c159204();
    }
    t2 = operation_8c01c25c();
    if (t2 == 0x10) {
        call_8c207b68();
        clear_global_8c208540();
        clear_global_8c208e18();
    }
}
