typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d5198 S_g8c4d5198;
typedef struct S_g8c4d51d4 S_g8c4d51d4;
extern void call_8c350152(void *);
extern void call_8c34debc(void);
extern void call_8c011ec0(void *);
void operation_8c100288(void)
{
    int v1;
    v1 = (int)0;
    while (3 > v1) {
        call_8c350152(*(S_g8c4d51d4 **)((char *)0x8c4d51d4 + (v1 << 2)));
        v1 = (int)(v1 + 1);
    }
    call_8c34debc();
    call_8c011ec0(*(S_g8c4d5198 **)0x8c4d5198);
}
