typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c1f1588(int);
extern void TOKey_update_8c112fb0(void *);
void TLazerFenceSw_update_8c113a24(int a0)
{
    call_8c1f1588((int)(a0 + 0x124));
    TOKey_update_8c112fb0((void *)a0);
}
