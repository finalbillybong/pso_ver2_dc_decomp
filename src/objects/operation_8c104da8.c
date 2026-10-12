typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int call_8c36a868(void);
extern void call_8c36a880(void);
int operation_8c104da8(void)
{
    int t1;
    if (*(int *)0x8c41cb3c != 0) {
        return 0;
    }
    if (*(int *)0x8c5064f8 != 0) {
        return 0;
    }
    if (*(int *)0x8c4d7b20 != 0) {
        return 1;
    }
    t1 = call_8c36a868();
    if (t1 == 6 || t1 == 0) {
        call_8c36a880();
    } else {
    }
    return 0;
}
