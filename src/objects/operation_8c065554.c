typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c468994 S_g8c468994;
extern int call_8c065578(void *);
int operation_8c065554(void)
{
    int t1;
    if (*(int *)0x8c468994 == 0) {
        return 0;
    }
    t1 = call_8c065578(*(S_g8c468994 **)0x8c468994);
    return t1;
}
