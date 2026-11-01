typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
extern S_g8c44be88 *g_8c44be88;
extern int g_8c4db428;
extern int g_8c4db4cc;
extern int TObjItemNameSelect_create_8c174474(int);
void quest_op_award_item_select_8c170bb0(void)
{
    int t1;
    t1 = TObjItemNameSelect_create_8c174474((int)g_8c44be88);
    g_8c4db4cc = (int)(t1);
    g_8c4db428 = 0xa;
}
