/* SDK pool group 0x8c3454dc-0x8c345550 (Hitachi SHC): fills three 32-byte
   settings blocks from the defaults; 0x0d000001 when not ready, 0x07000103
   for a null target. */
typedef struct Block {
    int words[8];
} Block;

typedef struct Settings {
    int unknown0;
    Block first;
    Block second;
    Block third;
} Settings;

extern int g_ready_8c3fac48;
extern Block g_defaults_8c3fac18;
extern void register_8c346118(int (*owner)(Settings *), int status);

int copy_defaults_8c3454dc(Settings *settings)
{
    int status = 0;
    if (!g_ready_8c3fac48) status = 0xd000001;
    else if (!settings) status = 0x7000103;
    else {
        settings->first = g_defaults_8c3fac18;
        settings->second = g_defaults_8c3fac18;
        settings->third = g_defaults_8c3fac18;
    }
    if (status) register_8c346118(copy_defaults_8c3454dc, status);
    return status;
}
