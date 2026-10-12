typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467184 S_g8c467184;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
void operation_8c04c604(void)
{
    if (*(int *)0x8c467184 != 0) {
        call_8c37d534(*(S_g8c467184 **)0x8c467184);
        call_8c011ec0(*(S_g8c467184 **)0x8c467184);
    }
}
