typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c505248[];
extern void call_8c18e044(void *, void *, int, int, int);
extern void operation_8c02db24();
void operation_8c284518(void)
{
    call_8c18e044((void *)((g_8c505248 + 0x58)), operation_8c02db24, 0, 8, 8);
    call_8c18e044((void *)((void *)0x8c505304), (void *)((void *)0x8c217f5c), 0, 0xbc, 8);
}
