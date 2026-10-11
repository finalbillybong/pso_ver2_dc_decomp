typedef struct Selection { char unknown0[2]; unsigned char ids[6]; } Selection;
extern Selection selection_8c41ccec;
int find_selected_8c01e110(int value)
{
    unsigned char *list;
    int i;
    if (*(signed char *)0x8c41cd04) return 0;
    list = selection_8c41ccec.ids;
    for (i = 0; i < 6; i++) {
        if ((unsigned char)list[i] == value) return value;
    }
    return 0;
}
