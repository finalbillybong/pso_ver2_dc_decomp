typedef struct Item { int unknown0; short flags; } Item;
extern void request_resource_release(void *);
void release_stage_8c016a74(void)
{
    if (*(void **)0x8c41c604) {
        request_resource_release(*(void **)0x8c41c604);
        *(void **)0x8c41c604 = 0;
    }
    if (*(void **)0x8c41c608) {
        request_resource_release(*(void **)0x8c41c608);
        *(void **)0x8c41c608 = 0;
    }
    if (*(void **)0x8c41c60c) {
        request_resource_release(*(void **)0x8c41c60c);
        *(void **)0x8c41c60c = 0;
    }
    if (*(void **)0x8c41c614) {
        request_resource_release(*(void **)0x8c41c614);
        *(void **)0x8c41c614 = 0;
    }
    if (*(void **)0x8c41c618) {
        request_resource_release(*(void **)0x8c41c618);
        *(void **)0x8c41c618 = 0;
    }
    if (*(void **)0x8c41c61c) {
        request_resource_release(*(void **)0x8c41c61c);
        *(void **)0x8c41c61c = 0;
    }
    if (*(void **)0x8c41c620) {
        request_resource_release(*(void **)0x8c41c620);
        *(void **)0x8c41c620 = 0;
    }
    if (*(void **)0x8c41c624) {
        request_resource_release(*(void **)0x8c41c624);
        *(void **)0x8c41c624 = 0;
    }
    if (*(Item **)0x8c41c628) {
        (*(Item **)0x8c41c628)->flags |= 1;
        *(Item **)0x8c41c628 = 0;
    }
    if (*(Item **)0x8c41c62c) {
        (*(Item **)0x8c41c62c)->flags |= 1;
        *(Item **)0x8c41c62c = 0;
    }
    *(int *)0x8c41bce4 = 14;
}
