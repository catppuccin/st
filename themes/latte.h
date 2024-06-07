/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#5c5f77",
	"#d20f39",
	"#40a02b",
	"#df8e1d",
	"#1e66f5",
	"#ea76cb",
	"#179299",
	"#acb0be",

	/* 8 bright colors */
	"#6c6f85",
	"#d20f39",
	"#40a02b",
	"#df8e1d",
	"#1e66f5",
	"#ea76cb",
	"#179299",
	"#bcc0cc",

[256] = "#4c4f69", /* default foreground colour */
[257] = "#eff1f5", /* default background colour */
[258] = "#dc8a78", /*575268*/

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
