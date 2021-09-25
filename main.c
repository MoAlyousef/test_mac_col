#include "coc.h"
#include <stdio.h>

int main()
{
    double r = 0.0;
    double g = 0.0;
    double b = 0.0;
    double a = 0.0;

    my_windowBackgroundColor(&r, &g, &b, &b);
    printf("windowBackgroundColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_labelColor(&r, &g, &b, &b);
    printf("labelColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_controlBackgroundColor(&r, &g, &b, &b);
    printf("controlBackgroundColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_windowFrameColor(&r, &g, &b, &b);
    printf("windowFrameColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_secondaryLabelColor(&r, &g, &b, &b);
    printf("secondaryLabelColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_tertiaryLabelColor(&r, &g, &b, &b);
    printf("tertiaryLabelColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_quaternaryLabelColor(&r, &g, &b, &b);
    printf("quaternaryLabelColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_textColor(&r, &g, &b, &b);
    printf("textColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_placeholderTextColor(&r, &g, &b, &b);
    printf("placeholderTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedTextColor(&r, &g, &b, &b);
    printf("selectedTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_textBackgroundColor(&r, &g, &b, &b);
    printf("textBackgroundColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedTextBackgroundColor(&r, &g, &b, &b);
    printf("selectedTextBackgroundColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_keyboardFocusIndicatorColor(&r, &g, &b, &b);
    printf("keyboardFocusIndicatorColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_unemphasizedSelectedTextColor(&r, &g, &b, &b);
    printf("unemphasizedSelectedTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_unemphasizedSelectedTextBackgroundColor(&r, &g, &b, &b);
    printf("unemphasizedSelectedTextBackgroundColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_linkColor(&r, &g, &b, &b);
    printf("linkColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_separatorColor(&r, &g, &b, &b);
    printf("separatorColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedContentBackgroundColor(&r, &g, &b, &b);
    printf("selectedContentBackgroundColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_unemphasizedSelectedContentBackgroundColor(&r, &g, &b, &b);
    printf("unemphasizedSelectedContentBackgroundColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedMenuItemTextColor(&r, &g, &b, &b);
    printf("selectedMenuItemTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_gridColor(&r, &g, &b, &b);
    printf("gridColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_headerTextColor(&r, &g, &b, &b);
    printf("headerTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_controlAccentColor(&r, &g, &b, &b);
    printf("controlAccentColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_controlColor(&r, &g, &b, &b);
    printf("controlColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_controlTextColor(&r, &g, &b, &b);
    printf("controlTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_disabledControlTextColor(&r, &g, &b, &b);
    printf("disabledControlTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedControlColor(&r, &g, &b, &b);
    printf("selectedControlColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedControlTextColor(&r, &g, &b, &b);
    printf("selectedControlTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_alternateSelectedControlTextColor(&r, &g, &b, &b);
    printf("alternateSelectedControlTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_scrubberTexturedBackgroundColor(&r, &g, &b, &b);
    printf("scrubberTexturedBackgroundColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_windowFrameTextColor(&r, &g, &b, &b);
    printf("windowFrameTextColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_underPageBackgroundColor(&r, &g, &b, &b);
    printf("underPageBackgroundColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_findHighlightColor(&r, &g, &b, &b);
    printf("findHighlightColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_highlightColor(&r, &g, &b, &b);
    printf("highlightColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_shadowColor(&r, &g, &b, &b);
    printf("shadowColor %u %u %u %u\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));
}