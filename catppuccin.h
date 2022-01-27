/*
 *
 * Name : Catppuccin
 * author : tsjazil (https://github.com/tsjazil)
 * 
 * Soothing pastel theme for the high-spirited!
 *
 */


/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#6E6C7E",
	"#F28FAD",
	"#ABE9B3",
	"#FAE3B0",
	"#96CDFB",
	"#F5C2E7",
	"#89DCEB",
	"#D9E0EE",

	/* 8 bright colors */
	"#988BA2",
	"#F28FAD",
	"#ABE9B3",
	"#FAE3B0",
	"#96CDFB",
	"#F5C2E7",
	"#89DCEB",
	"#D9E0EE",



[256] = "#D9E0EE", /* default foreground colour */
[257] = "#1E1E2E", /* default background colour */
[258] = "#C3BAC6", /*575268*/

};


/*
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;

