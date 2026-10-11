extern int hierarchy_is_active(void *);
extern void request_resource_release(void *);

void release_matching_8c0ddd64(unsigned short id)
{
    unsigned int i;
    if (*(char **)0x8c46fe20) {
        for (i = 0; i < 4; i++) {
            char *node = *(char **)((char *)(char **)(*(char **)0x8c46fe20 + 0x5c) + (i << 2));
            if (node && hierarchy_is_active(node) && id == (*(unsigned short *)(node + 0x86) & 0xffff))
                request_resource_release(node);
        }
    }
}
