//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"mailbox",	180,	1},
	/* {"",	"memory",	5,	2}, */
	{"",	"internet",	5,	3},
	{"",	"volume",	0,	4},
	{"",	"battery | tr \'\n\' \' \'",	5,	0},
	{"",	"cpu",	5,	5},
	{"",	"clock",	60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
