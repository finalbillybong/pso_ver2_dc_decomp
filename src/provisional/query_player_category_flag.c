typedef struct Player { char unknown0[49]; signed char index; } Player;
typedef char check_index[(unsigned long)&((Player *)0)->index==49?1:-1];
extern Player *player; extern unsigned int *flags;
int query_player_category_flag(int category,int bit) {
 switch(category) {
 case 0:return (flags[player->index]&(1u<<bit))!=0;
 case 1:return (flags[player->index]&(1u<<(bit+9)))!=0;
 default:return 1;
 }
}
