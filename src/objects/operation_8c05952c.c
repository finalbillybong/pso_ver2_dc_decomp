typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void release_render_mode_four_8c05b944(void *, void *);
void operation_8c05952c(void)
{
    char *v1;
    switch (*(int *)0x8c467914) {
    case 36:
    case 45:
        v1 = (char *)*(int *)0x8c467918;
        *(int *)0x8c467918 += 0xc;
        release_render_mode_four_8c05b944((void *)((void *)0x8c467924), (void *)v1);
    }
    *(int *)0x8c467914 += 1;
}
