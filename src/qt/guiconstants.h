#ifndef GUICONSTANTS_H
#define GUICONSTANTS_H

/* Milliseconds between model updates */
static const int MODEL_UPDATE_DELAY = 500;

/* Maximum  passphrase length */
static const int MAX_PASSPHRASE_SIZE = 1024;

/* Size of icons in status bar */
static const int STATUSBAR_ICONSIZE = 16;

/* Invalid field background style */
#define STYLE_INVALID "background:#FF8080"

/* Transaction list -- unconfirmed transaction */
#define COLOR_UNCONFIRMED QColor(128, 128, 128)
/* Transaction list -- negative amount */
#define COLOR_NEGATIVE QColor(136, 0, 21)
/* Table List -- negative amount */
#define COLOR_NEGATIVE_TABLE QColor(255, 80, 80)
/* Transaction list -- positive amount */
#define COLOR_POSITIVE QColor(0, 128, 0)
/* Transaction list -- bare address (without label) */
#define COLOR_BAREADDRESS QColor(140, 140, 140)

/* Colors for minting tab for each coin age group */
#define COLOR_MINT_YOUNG QColor(255, 232, 232)
#define COLOR_MINT_MATURE QColor(251, 255, 206)
#define COLOR_MINT_OLD QColor(207, 247, 207)

#define COLOR_MINT_YOUNG_DARK QColor(219, 30, 30)
#define COLOR_MINT_MATURE_DARK QColor(234, 249, 64)
#define COLOR_MINT_OLD_DARK QColor(42, 224, 42)


#endif // GUICONSTANTS_H
