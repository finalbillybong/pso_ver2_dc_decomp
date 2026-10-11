extern int hierarchy_is_active(void *);
extern void request_resource_release(void *);

void release_active_resource_8c184038(void)
{
    if (*(void **)0x8c4dbb30 && hierarchy_is_active(*(void **)0x8c4dbb30)) {
        request_resource_release(*(void **)0x8c4dbb30);
        *(void **)0x8c4dbb30 = 0;
    }
}
