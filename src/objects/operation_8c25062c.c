typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int operation_8c01c25c(void);
extern int operation_8c21dc9c(void);
extern int query_field_8c209364(void);
int operation_8c25062c(void)
{
    int t1;
    int t2;
    int t3;
    t1 = operation_8c01c25c();
    if (t1 != 0x10) {
        return 3;
    }
    if (*(int *)0x8c418258 == *(int *)0x8c418248) {
        t2 = operation_8c21dc9c();
        switch (t2) {
        case 0:
            return 3;
        case 1:
            return 1;
        case 2:
            return 2;
        default:
            return 0;
        }
    }
    t3 = query_field_8c209364();
    switch (t3) {
    case -1:
        return 3;
    default:
        return 0;
    }
}
