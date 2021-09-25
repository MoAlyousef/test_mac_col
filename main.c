#include "coc.h"
#include <stdio.h>

int main()
{
    double r = 0.0;
    double g = 0.0;
    double b = 0.0;
    double a = 0.0;

    my_windowBackgroundColor(&r, &g, &b, &a);
    printf("windowBackgroundColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_labelColor(&r, &g, &b, &a);
    printf("labelColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_controlBackgroundColor(&r, &g, &b, &a);
    printf("controlBackgroundColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_windowFrameColor(&r, &g, &b, &a);
    printf("windowFrameColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_secondaryLabelColor(&r, &g, &b, &a);
    printf("secondaryLabelColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_tertiaryLabelColor(&r, &g, &b, &a);
    printf("tertiaryLabelColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_quaternaryLabelColor(&r, &g, &b, &a);
    printf("quaternaryLabelColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_textColor(&r, &g, &b, &a);
    printf("textColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_placeholderTextColor(&r, &g, &b, &a);
    printf("placeholderTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedTextColor(&r, &g, &b, &a);
    printf("selectedTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_textBackgroundColor(&r, &g, &b, &a);
    printf("textBackgroundColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedTextBackgroundColor(&r, &g, &b, &a);
    printf("selectedTextBackgroundColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_keyboardFocusIndicatorColor(&r, &g, &b, &a);
    printf("keyboardFocusIndicatorColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_unemphasizedSelectedTextColor(&r, &g, &b, &a);
    printf("unemphasizedSelectedTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_unemphasizedSelectedTextBackgroundColor(&r, &g, &b, &a);
    printf("unemphasizedSelectedTextBackgroundColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_linkColor(&r, &g, &b, &a);
    printf("linkColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_separatorColor(&r, &g, &b, &a);
    printf("separatorColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedContentBackgroundColor(&r, &g, &b, &a);
    printf("selectedContentBackgroundColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_unemphasizedSelectedContentBackgroundColor(&r, &g, &b, &a);
    printf("unemphasizedSelectedContentBackgroundColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedMenuItemTextColor(&r, &g, &b, &a);
    printf("selectedMenuItemTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_gridColor(&r, &g, &b, &a);
    printf("gridColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_headerTextColor(&r, &g, &b, &a);
    printf("headerTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_controlAccentColor(&r, &g, &b, &a);
    printf("controlAccentColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_controlColor(&r, &g, &b, &a);
    printf("controlColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_controlTextColor(&r, &g, &b, &a);
    printf("controlTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_disabledControlTextColor(&r, &g, &b, &a);
    printf("disabledControlTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedControlColor(&r, &g, &b, &a);
    printf("selectedControlColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_selectedControlTextColor(&r, &g, &b, &a);
    printf("selectedControlTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_alternateSelectedControlTextColor(&r, &g, &b, &a);
    printf("alternateSelectedControlTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_scrubberTexturedBackgroundColor(&r, &g, &b, &a);
    printf("scrubberTexturedBackgroundColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_windowFrameTextColor(&r, &g, &b, &a);
    printf("windowFrameTextColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_underPageBackgroundColor(&r, &g, &b, &a);
    printf("underPageBackgroundColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_findHighlightColor(&r, &g, &b, &a);
    printf("findHighlightColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_highlightColor(&r, &g, &b, &a);
    printf("highlightColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));

    my_shadowColor(&r, &g, &b, &a);
    printf("shadowColor (%u, %u, %u, %u)\n", (unsigned)(r * 255.0), (unsigned)(g * 255.0), (unsigned)(b * 255.0), (unsigned)(a * 255.0));
}