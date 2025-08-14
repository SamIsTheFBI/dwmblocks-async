#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 145

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)                            \
    X("", "~/.local/bin/now-playing sbar", 1, 1) \
    X("", "~/.local/bin/nettraf sbar", 1, 2)     \
    X("", "~/.local/bin/sys-prop", 1, 3)         \
    X("", "~/.local/bin/date-time", 1, 4)

#endif  // CONFIG_H

// const Block blocks[] = {
//     BLOCK("~/.local/bin/now-playing sbar", 1, 1),
//     BLOCK("~/.local/bin/nettraf sbar", 1, 2),
//     BLOCK("~/.local/bin/sys-prop", 1, 3),
//     // BLOCK("~/.local/bin/battery sbar", 5,    5),
//     BLOCK("~/.local/bin/date-time", 1, 4),
// };
