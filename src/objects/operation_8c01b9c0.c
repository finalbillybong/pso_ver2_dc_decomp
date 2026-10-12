typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c2e3014[];
extern void call_8c18e720(void *, void *);
void *operation_8c01b9c0(void)
{
    call_8c18e720((void *)((void *)0x8c41cab5), (void *)((g_8c2e3014 + 0x57)));
    return (void *)0x8c41cab5;
}
