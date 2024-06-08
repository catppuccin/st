/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#5C5F77",
	"#D20F39",
	"#40A02B",
	"#DF8E1D",
	"#1E66F5",
	"#EA76CB",
	"#179299",
	"#ACB0BE",

	/* 8 bright colors */
	"#6C6F85",
	"#D20F39",
	"#40A02B",
	"#DF8E1D",
	"#1E66F5",
	"#EA76CB",
	"#179299",
	"#BCC0CC",

[256] = "#4C4F69", /* default foreground colour */
[257] = "#EFF1F5", /* default background colour */
[258] = "#DC8A78", /*575268*/

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
