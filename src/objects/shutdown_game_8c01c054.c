extern void shutdown_11a8f0(void);
extern void shutdown_184610(void);
extern void shutdown_17e108(void);
extern void shutdown_0a95a0(void);
extern void shutdown_0406dc(void);
extern void shutdown_0a01cc(void);
extern void shutdown_04b1b0(void);
extern void shutdown_0357dc(void);
extern void shutdown_011ee8(void);
extern void shutdown_05f828(void);
extern void shutdown_041074(void);
extern void shutdown_36e884(void);
extern void shutdown_36aac8(void);
extern void shutdown_36d392(void);
extern void shutdown_104e7c(void);
extern void shutdown_033c38(void);
extern void shutdown_38c5a2(void);
extern void shutdown_382768(void);
extern void shutdown_030864(void);
extern void shutdown_379280(void);
extern int shutdown_17b8f4(void);
extern void free_handle_8c36cde4(void *);
void shutdown_game_8c01c054(void)
{
    shutdown_11a8f0();
    shutdown_184610();
    shutdown_17e108();
    shutdown_0a95a0();
    shutdown_0406dc();
    shutdown_0a01cc();
    shutdown_04b1b0();
    shutdown_0357dc();
    shutdown_011ee8();
    shutdown_05f828();
    shutdown_041074();
    shutdown_36e884();
    shutdown_36aac8();
    shutdown_36d392();
    shutdown_104e7c();
    free_handle_8c36cde4(*(void **)0x8c41cb64);
    free_handle_8c36cde4(*(void **)0x8c41cb70);
    free_handle_8c36cde4(*(void **)0x8c41cb60);
    free_handle_8c36cde4(*(void **)0x8c46f580);
    free_handle_8c36cde4(*(void **)0x8c41cb14);
    shutdown_033c38();
    shutdown_38c5a2();
    shutdown_382768();
    if (!shutdown_17b8f4()) {
        shutdown_030864();
        shutdown_379280();
    }
}
