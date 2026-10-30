/* SDK pool group 0x8c3524b4-0x8c35258c (Hitachi SHC): reference-counted
   initialisation and shutdown of an eight-entry channel table, with two empty
   hooks. */
typedef struct Channel {
    char state;
    char unknown1[0x378 - 1];
} Channel;

extern int g_channel_users_8c3fb494;
extern Channel g_channels_8c5366e0[8];
extern void *memset(void *, int, unsigned int);
extern void lock_8c3523cc(int *);
extern void unlock_8c3523e4(int *);
extern void configure_8c3523fc(int, int);
extern void close_channel_8c351eb6(Channel *);

void init_hook_8c3524b4(void)
{
}

void exit_hook_8c3524b8(void)
{
}

void channels_open_8c3524bc(void)
{
    int saved;
    lock_8c3523cc(&saved);
    if (!g_channel_users_8c3fb494) {
        memset(g_channels_8c5366e0, 0, sizeof g_channels_8c5366e0);
        init_hook_8c3524b4();
        configure_8c3523fc(0, 0);
    }
    g_channel_users_8c3fb494++;
    unlock_8c3523e4(&saved);
}

void channels_close_8c3524fa(void)
{
    int saved;
    int i;
    lock_8c3523cc(&saved);
    g_channel_users_8c3fb494--;
    if (g_channel_users_8c3fb494 == 0) {
        for (i = 0; i < 8; i++)
            if (g_channels_8c5366e0[i].state == 1) close_channel_8c351eb6(&g_channels_8c5366e0[i]);
        memset(g_channels_8c5366e0, 0, sizeof g_channels_8c5366e0);
        exit_hook_8c3524b8();
        configure_8c3523fc(0, 0);
    }
    unlock_8c3523e4(&saved);
}
