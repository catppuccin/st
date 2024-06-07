/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#45475a",
	"#f38ba8",
	"#a6e3a1",
	"#f9e2af",
	"#89b4fa",
	"#f5c2e7",
	"#94e2d5",
	"#bac2de",

	/* 8 bright colors */
	"#585b70",
	"#f38ba8",
	"#a6e3a1",
	"#f9e2af",
	"#89b4fa",
	"#f5c2e7",
	"#94e2d5",
	"#a6adc8",

[256] = "#cdd6f4", /* default foreground colour */
[257] = "#1e1e2e", /* default background colour */
[258] = "#f5e0dc", /*575268*/

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
