/* SDK pool group 0x8c3485b4-0x8c348628 (Hitachi SHC): copies the default
   32-byte block into three slots of a handle (struct assignment uses the SHC
   runtime block move). */
typedef struct Block32 {
    int words[8];
} Block32;

typedef struct Handle {
    int unknown0;
    Block32 slots[3];
} Handle;

extern void *g_context_8c3fac48;
extern Block32 g_default_block_8c3fac80;
extern void report_error_8c346118(int, int);

int copy_defaults_8c3485b4(Handle *handle)
{
    int error = 0;
    if (!g_context_8c3fac48) error = 0xd000001;
    else if (!handle) error = 0x7000103;
    else {
        handle->slots[0] = g_default_block_8c3fac80;
        handle->slots[1] = g_default_block_8c3fac80;
        handle->slots[2] = g_default_block_8c3fac80;
    }
    if (error) report_error_8c346118((int)copy_defaults_8c3485b4, error);
    return error;
}
