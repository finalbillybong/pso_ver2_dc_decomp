typedef struct Buffer { int size; void *data; } Buffer;
int configure_buffer_8c1f9f64(void)
{
    Buffer *b = (Buffer *)0x8c4f1200;
    b->size = 0x56000;
    b->data = (void *)0x8c28ad54;
    return 1;
}
