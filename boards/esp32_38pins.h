const int leftColumnPins[] = {INT_MAX,INT_MAX,36, 39, 34, 35, 32, 33, 25, 26, 27, 14, 12,INT_MAX, 13, 9, 10, 11,INT_MAX};
const int rightColumnPins[] = {INT_MAX, 23, 22,1, 3, 21,INT_MAX,19, 18, 5, 17, 16, 4, 0, 2, 15,8,7,6};
const int numLeftColumnPins = sizeof(leftColumnPins) / sizeof(leftColumnPins[0]);
const int numRightColumnPins = sizeof(rightColumnPins) / sizeof(rightColumnPins[0]);
String table_margins = "margin-top: 50px; margin-bottom: 50px;";
String table_border_spacing = "border-spacing: 0px 6px;";
String board_image = "http://192.168.1.90/images/esp32_38pins.png";