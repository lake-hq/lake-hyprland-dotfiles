const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#110a19", /* black   */
  [1] = "#9f4e21", /* red     */
  [2] = "#764243", /* green   */
  [3] = "#99553f", /* yellow  */
  [4] = "#b0632c", /* blue    */
  [5] = "#ad6a47", /* magenta */
  [6] = "#6f5168", /* cyan    */
  [7] = "#928e98", /* white   */

  /* 8 bright colors */
  [8]  = "#63596e",  /* black   */
  [9]  = "#D5682D",  /* red     */
  [10] = "#9E585A", /* green   */
  [11] = "#CC7255", /* yellow  */
  [12] = "#EB843B", /* blue    */
  [13] = "#E78E5F", /* magenta */
  [14] = "#946D8B", /* cyan    */
  [15] = "#c3c1c5", /* white   */

  /* special colors */
  [256] = "#110a19", /* background */
  [257] = "#c3c1c5", /* foreground */
  [258] = "#c3c1c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
