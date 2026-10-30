/* SDK pool group 0x8c371dac-0x8c371e38 (Hitachi SHC): decodes the media mode
   character ('0'-'3') and maps it to a status for callers. */
typedef struct Info {
    char unknown0[0xc];
    char mode;
} Info;

extern void select_8c378714(int unit);
extern Info *get_info_8c37873c(void);
extern int drive_ready_8c371e38(void);

int media_mode_8c371dac(void)
{
    Info *info;
    int mode;
    select_8c378714(0);
    info = get_info_8c37873c();
    switch (info->mode) {
    case '1': mode = 1; break;
    case '2': mode = 2; break;
    case '3': mode = 3; break;
    case '0':
    default: mode = 0; break;
    }
    return mode;
}

int media_status_8c371de6(void)
{
    int ready = drive_ready_8c371e38();
    int mode = media_mode_8c371dac();
    if (!ready) return 1;
    switch (mode) {
    case 1:
    case 3:
        return 2;
    case 2:
    case 0:
    default:
        return 0;
    }
}
