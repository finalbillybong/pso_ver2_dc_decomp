typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
extern S_g8c44be88 *g_8c44be88;
extern int g_8c4db428;
extern int g_8c4db4c8;
extern int TObjItemNameEntry_create_8c174144(int);
void quest_op_award_item_name_8c170b84(void)
{
    int t1;
    t1 = TObjItemNameEntry_create_8c174144((int)g_8c44be88);
    g_8c4db4c8 = (int)(t1);
    g_8c4db428 = 9;
}
