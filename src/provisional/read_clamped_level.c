/* Provisional signed-byte level table; preserve invalid-value replacement. */
typedef struct LevelView { signed char maximum; char unknown1[71]; signed char levels[19]; } LevelView;
typedef char check_maximum[(unsigned long)&((LevelView *)0)->maximum==0?1:-1];
typedef char check_levels[(unsigned long)&((LevelView *)0)->levels==72?1:-1];
typedef char check_prefix[sizeof(LevelView)==91?1:-1];
signed char read_clamped_level(LevelView *levels,short index) {
 signed char value;
 if(!(index>=0 && index<19)) return 0;
 value=levels->levels[index];
 if(!(value>=-1 && value<=29)) value=29;
 if(value>levels->maximum) value=levels->maximum;
 return value;
}
