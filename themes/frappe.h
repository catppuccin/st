/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#51576d",
	"#e78284",
	"#a6d189",
	"#e5c890",
	"#8caaee",
	"#f4b8e4",
	"#81c8be",
	"#b5bfe2",

	/* 8 bright colors */
	"#626880",
	"#e78284",
	"#a6d189",
	"#e5c890",
	"#8caaee",
	"#f4b8e4",
	"#81c8be",
	"#a5adce",

[256] = "#c6d0f5", /* default foreground colour */
[257] = "#303446", /* default background colour */
[258] = "#f2d5cf", /*575268*/

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
