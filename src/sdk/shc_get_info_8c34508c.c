/* SDK pool group 0x8c34508c (Hitachi SHC): fills a channel information record
   through nine field getters; error 0x0d000001 when there is no current object,
   0x07000103 / 0x07000203 for null arguments. */
typedef struct Info {
    short unknown0;
    char kind;
    char mode;
    char level;
    char pan;
    short pitch;
    short unknown8;
    short unknowna;
    int position;
    int length;
    int word;
    int size;
} Info;

extern void *g_current_8c3fac48;
extern int get_word_8c344d58(char *, int *);
extern int get_size_8c344e04(char *, int *);
extern int get_kind_8c3451ec(char *, char *);
extern int get_mode_8c344f78(char *, char *);
extern int get_pitch_8c345000(char *, short *);
extern int get_level_8c344ef0(char *, char *);
extern int get_pan_8c344cd0(char *, char *);
extern int get_length_8c344c7c(char *, int *);
extern int get_position_8c345174(char *, int *);
extern void report_error_8c346118(int (*)(char *, Info *), int);

int get_info_8c34508c(char *channel, Info *info)
{
    int error = 0;
    if (g_current_8c3fac48 == 0) error = 0xd000001;
    else if (channel == 0) error = 0x7000103;
    else if (info == 0) error = 0x7000203;
    else {
        info->unknown0 = 0;
        info->unknown8 = 0;
        get_word_8c344d58(channel, &info->word);
        get_size_8c344e04(channel, &info->size);
        get_kind_8c3451ec(channel, &info->kind);
        get_mode_8c344f78(channel, &info->mode);
        get_pitch_8c345000(channel, &info->pitch);
        get_level_8c344ef0(channel, &info->level);
        get_pan_8c344cd0(channel, &info->pan);
        get_length_8c344c7c(channel, &info->length);
        get_position_8c345174(channel, &info->position);
    }
    if (error) report_error_8c346118(get_info_8c34508c, error);
    return error;
}
