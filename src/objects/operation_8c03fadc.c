typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
extern char g_8c2ef854[];
extern void call_8c38c0f0(int);
extern void call_8c37eb1c(void *, int, int, float);
void operation_8c03fadc(int a0)
{
    *(int *)0x8c46f560 = (int)(*(int *)0x8c575570);
    *(Block16 *)&*(Block16 *)0x8c46f564 = *(Block16 *)&*(Block16 *)0x8c5755ac;
    *(int *)0x8c575570 |= 0x10;
    call_8c38c0f0((int)(a0 + 0x38));
    call_8c37eb1c((void *)((g_8c2ef854 + 0x140)), 0xa, 0x22, -10.0f);
    *(Block16 *)&*(Block16 *)0x8c5755ac = *(Block16 *)&*(Block16 *)0x8c46f564;
    *(int *)0x8c575570 = (int)(*(int *)0x8c46f560);
}
